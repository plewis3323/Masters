void extract_pi0_signal_fit_subtract() {
    const char* inputFileName = "scaled_output_New_R24_0-30_CT_3.3-4_ptbin_photon_prob.root";
    TFile* file = TFile::Open(inputFileName, "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Could not open file!" << std::endl;
        return;
    }

    std::string baseName = inputFileName;
    size_t lastSlash = baseName.find_last_of("/");
    if (lastSlash != std::string::npos) baseName = baseName.substr(lastSlash + 1);
    size_t lastDot = baseName.find_last_of(".");
    if (lastDot != std::string::npos) baseName = baseName.substr(0, lastDot);
    std::string outTxtName = baseName + "_yield_sigminusbkg.txt";
    std::string outRootName = baseName + "_sigminusbkg.root";
    std::ofstream outTxt(outTxtName);

    // Load histogram from canvas named "c2"
    TCanvas* canvas = nullptr;
    TIter nextKey(file->GetListOfKeys());
    while (TKey* key = (TKey*)nextKey()) {
        TObject* obj = key->ReadObj();
        if (obj->InheritsFrom("TCanvas") && std::string(obj->GetName()) == "c2") {
            canvas = (TCanvas*)obj;
            break;
        }
    }

    if (!canvas) {
        std::cerr << "Canvas 'c2' not found!" << std::endl;
        return;
    }

    TH1* h1 = nullptr;
    TIter next(canvas->GetListOfPrimitives());
    while (TObject* obj = next()) {
        if (obj->InheritsFrom("TH1")) {
            h1 = (TH1*)obj;
            break;
        }
    }

    if (!h1) {
        std::cerr << "No histogram found in canvas!" << std::endl;
        return;
    }

    h1->SetDirectory(0);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit(1111);

    // === Define full fit region ===
    double fit_min = 0.09;
    double fit_max = 0.35;
    double binWidth = h1->GetBinWidth(1);

   // === Fit (Signal + Background): Gaus + pol3 ===
      TF1* sigplusbkg = new TF1("sigplusbkg", "[0]*exp(-0.5*((x-[1])/[2])^2) + [3]*exp(-[4]*x) + pol3(5)", fit_min, fit_max);
    sigplusbkg->SetParameters(1000, 0.135, 0.012);

   // Free (fittable) signal parameters
   sigplusbkg->SetParLimits(0, 0, 1e9);
   sigplusbkg->SetParLimits(1, 0.11, 0.185);
   sigplusbkg->SetParLimits(2, 0.005, 0.075);

  // Fix background parameters (3–8)
  sigplusbkg->FixParameter(3,  9473669.202824);
  sigplusbkg->FixParameter(4,   68.791608);
  sigplusbkg->FixParameter(5,  225672.558602);
  sigplusbkg->FixParameter(6, -1242460.329863);
  sigplusbkg->FixParameter(7,  2174257.276170);
  sigplusbkg->FixParameter(8,  -660726.228874);

  h1->Fit(sigplusbkg, "R");

  // === Fit (Background only): Gaus term removed ===
   TF1* bkgonly = new TF1("bkgonly", "[0]*exp(-[1]*x) + pol3(2)", fit_min, fit_max);
  //bkgonly->SetParameters(-18997, 22.462, 1762.53, 1657.65, -22165.5, 29305.7);

  // Fix all parameters (no free fitting)
  bkgonly->FixParameter(0,  9473669.202824);
  bkgonly->FixParameter(1,  68.791608);
  bkgonly->FixParameter(2,  225672.558602);
  bkgonly->FixParameter(3,  -1242460.329863);
  bkgonly->FixParameter(4,  2174257.276170);
  bkgonly->FixParameter(5,  -660726.228874);

  h1->Fit(bkgonly, "R");

    // === Integrate both fits over full range ===
    double total_sigplusbkg = sigplusbkg->Integral(fit_min , fit_max) / binWidth;
    double total_bkg = bkgonly->Integral(fit_min , fit_max) / binWidth;
    //double total_bkg = 0.0;
    double signal_yield = total_sigplusbkg - total_bkg;
    double err_signal = sqrt(total_sigplusbkg + total_bkg);  // conservative error

    // === Output results ===
    std::cout << "\n=== Pi0 Signal via Full-Range Fit Subtraction ===" << std::endl;
    std::cout << "Fit range:           " << fit_min << " - " << fit_max << " GeV" << std::endl;
    std::cout << "S + B integral:      " << total_sigplusbkg << std::endl;
    std::cout << "Bkg-only integral:   " << total_bkg << std::endl;
    std::cout << "Signal yield:        " << signal_yield << " ± " << err_signal << std::endl;

    outTxt << "=== Pi0 Signal via Full-Range Fit Subtraction ===\n";
    outTxt << "Fit range:           " << fit_min << " - " << fit_max << " GeV\n";
    outTxt << "S + B integral:      " << total_sigplusbkg << "\n";
    outTxt << "Bkg-only integral:   " << total_bkg << "\n";
    outTxt << "Signal yield:        " << signal_yield << " ± " << err_signal << "\n";
    outTxt.close();

    // === Draw histogram and both fits ===
    TCanvas* c = new TCanvas("c", "Signal minus Background Fit", 900, 700);
    h1->SetLineColor(kRed);
    h1->SetTitle("Pi0 Signal via Full Fit Subtraction;M_{#gamma#gamma} (GeV);Counts");
    h1->Draw("E");

    sigplusbkg->SetLineColor(kBlue + 1);
    sigplusbkg->SetLineWidth(2);
    sigplusbkg->Draw("same");

    bkgonly->SetLineColor(kGreen + 2);
    bkgonly->SetLineStyle(2);
    bkgonly->SetLineWidth(2);
    bkgonly->Draw("same");

    TLegend* legend = new TLegend(0.58, 0.68, 0.88, 0.88);
    legend->AddEntry(h1, "Data", "l");
    legend->AddEntry(sigplusbkg, "Signal", "l");
    legend->AddEntry(bkgonly, "Background-only Fit", "l");
    legend->Draw();

    c->SaveAs(outRootName.c_str());
}

