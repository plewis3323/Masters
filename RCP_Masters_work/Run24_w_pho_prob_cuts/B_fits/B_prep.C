void PrepareBkgrdData(
    const char* inputFileName = "scaled_output_New_R24_0-30_CT_6-7_ptbin_photon_prob.root",         // Input ROOT file
    const char* canvasName = "SubtractedCanvas",        // Existing canvas in the file
    double include_min = 0.07,                         // Range to keep points
    double include_max = 0.50,
    double exclude_min = 0.10,                         // Range to exclude points
    double exclude_max = 0.25
) {
    // Step 1: Open the ROOT file
    TFile* inputFile = TFile::Open(inputFileName, "READ");
    if (!inputFile || inputFile->IsZombie()) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return;
    }

    // Step 2: Access the canvas
    TCanvas* originalCanvas = dynamic_cast<TCanvas*>(inputFile->Get(canvasName));
    if (!originalCanvas) {
        std::cerr << "Error: Canvas '" << canvasName << "' not found." << std::endl;
        return;
    }

    // Step 3: Get the first histogram from the canvas
    TObject* obj = originalCanvas->GetListOfPrimitives()->FindObject("TH1");
    TH1* hist = nullptr;
    if (!obj) {
        TIter next(originalCanvas->GetListOfPrimitives());
        while ((obj = next())) {
            if (obj->InheritsFrom("TH1")) {
                hist = (TH1*)obj;
                break;
            }
        }
    } else {
        hist = (TH1*)obj;
    }

    if (!hist) {
        std::cerr << "Error: No histogram found on the canvas." << std::endl;
        return;
    }

    // Step 3: Extract included data points
    TH1* hist_included = (TH1*)hist->Clone("hist_included");
    hist_included->Reset();

    for (int i = 1; i <= hist->GetNbinsX(); ++i) {
        double x = hist->GetBinCenter(i);
        if (x >= include_min && x <= include_max) {
            hist_included->SetBinContent(i, hist->GetBinContent(i));
            hist_included->SetBinError(i, hist->GetBinError(i));
        }
    }

    TCanvas* c_data = new TCanvas("data_canvas", "Data Within Range", 800, 600);
    hist_included->SetLineColor(kBlue);
    hist_included->Draw("E1");

    // Step 4: Exclude specified data points
    TH1* hist_excluded = (TH1*)hist->Clone("hist_excluded");
    for (int i = 1; i <= hist_excluded->GetNbinsX(); ++i) {
        double x = hist_excluded->GetBinCenter(i);
        if (x >= exclude_min && x <= exclude_max) {
            hist_excluded->SetBinContent(i, 0);
            hist_excluded->SetBinError(i, 0);
        }
    }

    TCanvas* c_excl = new TCanvas("histo_w_o_data_points", "Histogram Without Data Points", 800, 600);
    hist_excluded->SetLineColor(kRed);
    hist_excluded->Draw("E1");

    // Step 5: Save output to new file
    std::string outName = inputFileName;
    size_t dot = outName.find(".root");
    if (dot != std::string::npos)
        outName.replace(dot, 5, "_Bkgrd_prep.root");
    else
        outName += "_Bkgrd_prep.root";

    TFile* outFile = new TFile(outName.c_str(), "RECREATE");
    originalCanvas->Write();
    hist_included->Write("data_hist");
    c_data->Write();
    hist_excluded->Write("hist_without_data_points");
    c_excl->Write();
    outFile->Close();

    std::cout << "Saved background prep file: " << outName << std::endl;
}
