void ShowProjection70() {
    // Open ROOT file
    TFile *file = TFile::Open("R24_60-100_CT_phoprop.root");
    if (!file || file->IsZombie()) {
        std::cerr << "Could not open file!" << std::endl;
        return;
    }

    // Get the histograms
    TH3F *hSignal = (TH3F*)file->Get("pairInvMassPtEta");
    TH3F *hBackground = (TH3F*)file->Get("pairInvMassPtEtaBkgd");

    if (!hSignal || !hBackground) {
        std::cerr << "Could not find one or both histograms!" << std::endl;
        return;
    }

    // Set show projection with 70 bins on Z axis
    hSignal->SetShowProjection("xy", 70);
    hBackground->SetShowProjection("xy", 70);

    // Draw to separate canvases
    TCanvas *c1 = new TCanvas("c1", "Signal Projection", 800, 600);
    hSignal->Draw("box2");

    TCanvas *c2 = new TCanvas("c2", "Background Projection", 800, 600);
    hBackground->Draw("box2");

    // --- Optional: Save canvases as images
    // c1->SaveAs("Signal_Projection.png");
    // c2->SaveAs("Background_Projection.png");

    // --- Optional: Save 2D projections to ROOT file
     TFile *outFile = new TFile("R24_60-100_CT_phoprob_Projection2D_output.root", "RECREATE");
     hSignal->Project3D("xy")->Write("SignalProjXY");
     hBackground->Project3D("xy")->Write("BkgProjXY");
     outFile->Close();

    std::cout << "Done with SetShowProjection." << std::endl;
}



void ExtractPtBinned2D() {
    TString inputFileName = "R24_60-100_CT_phoprob_Projection2D_output.root";
    TFile *file = TFile::Open(inputFileName);
    if (!file || file->IsZombie()) {
        std::cerr << "Could not reopen file: " << inputFileName << std::endl;
        return;
    }

     //Getting histograms for projecting
     TH2F *hSignal2D = (TH2F*)file->Get("SignalProjXY");
     TH2F *hBackground2D = (TH2F*)file->Get("BkgProjXY");
   
    if (!hSignal2D || !hBackground2D) {
        std::cerr << "Could not find required histograms in file!" << std::endl;
        return;
    }

    std::vector<std::pair<float, float>> ptBins = {
        {3.3, 4.0},
        {4.0, 5.0},
        {5.0, 6.0},
        {6.0, 7.0},
        {7.0, 8.0}
    };

    for (size_t i = 0; i < ptBins.size(); ++i) {
        float ptMin = ptBins[i].first;
        float ptMax = ptBins[i].second;

        int binXmin = hSignal2D->GetXaxis()->FindBin(ptMin);
        int binXmax = hSignal2D->GetXaxis()->FindBin(ptMax) - 1;

	  // Project onto Y within given pt (X) range
        TH1D *projSig = hSignal2D->ProjectionY(Form("Signal_projY_pt_%.1f_%.1f", ptMin, ptMax), binXmin, binXmax);
        TH1D *projBkg = hBackground2D->ProjectionY(Form("Bkg_projY_pt_%.1f_%.1f", ptMin, ptMax), binXmin, binXmax);

        // Save to ROOT file per pt bin
        TString outFile = Form("R24_60-100_CT_phoprob_Yproj_pt_%.1f_%.1f.root", ptMin, ptMax);
        TFile *fout = new TFile(outFile, "RECREATE");
        projSig->Write();
        projBkg->Write();
        fout->Close();

        std::cout << "Saved Y projections for pt " << ptMin << "–" << ptMax << " to " << outFile << std::endl;

    }

    std::cout << "All pt-binned projections saved with correct naming." << std::endl;
}
