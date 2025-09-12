#include <TFile.h>
#include <TH1.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TLine.h>
#include <iostream>

void stack_histograms() {
    // Open the ROOT files
    TFile *file1 = TFile::Open("R24_60-100_CT_phoprob_Yproj_pt_7.0_8.0.root");
    //TFile *file2 = TFile::Open("New_R24_60-100_CT_6-7_ptbin_hist.root");

    if (!file1 || file1->IsZombie()) {
        std::cerr << "Error opening one of the ROOT files!" << std::endl;
        return;
    }

    // Load histograms
    TH1 *histB = (TH1*)file1->Get("Bkg_projY_pt_7.0_8.0");
    TH1 *histS = (TH1*)file1->Get("Signal_projY_pt_7.0_8.0");

    if (!histB || !histS) {
        std::cerr << "Error accessing histograms!" << std::endl;
        return;
    }

    // === Define both scaling regions ===
    double r1Min = 0.25, r1Max = 0.45;  // sidebands
    double r2Min = 1.5,  r2Max = 3.0;   // signal tail
    //double r3Min = 0.0,  r3Max = 0.09;   // sidebands 

    int binR1_L = histB->FindBin(r1Min);
    int binR1_H = histB->FindBin(r1Max);
    int binR2_L = histB->FindBin(r2Min);
    int binR2_H = histB->FindBin(r2Max);
   // int binR3_L = histB->FindBin(r3Min); 
   // int binR3_H = histB->FindBin(r3Max); 

    // Total integrals over both ranges
    double intB = histB->Integral(binR1_L, binR1_H) + histB->Integral(binR2_L, binR2_H);
    double intS = histS->Integral(binR1_L, binR1_H) + histS->Integral(binR2_L, binR2_H);

    if (intB == 0) {
        std::cerr << "Warning: Background integral is zero in combined scaling regions!" << std::endl;
        return;
    }

    double scale = intS / intB;
    std::cout << "[Scaling using Intervals:]" << std::endl;
    std::cout << "  Background Integral: " << intB << std::endl;
    std::cout << "  Signal Integral    : " << intS << std::endl;
    std::cout << "  Scale Factor       : " << scale << std::endl;

    // === Scale the background ===
    TH1* histB_scaled = (TH1*)histB->Clone("histB_scaled");
    histB_scaled->Scale(scale);

    // === Styling (classic histogram style) ===
    histB_scaled->SetLineColor(kBlue);
    histS->SetLineColor(kRed);
    histB_scaled->SetLineWidth(2);
    histS->SetLineWidth(2);
    histB_scaled->SetFillColor(0);
    histS->SetFillColor(0);

    // === Draw stacked histograms ===
    TCanvas *c1 = new TCanvas("c1", "Overlay: Scaled Background", 800, 600);
    histS->Draw("HIST");
    histB_scaled->Draw("HIST SAME");

    TLegend *legend = new TLegend(0.62, 0.7, 0.9, 0.88);
    legend->AddEntry(histS, "Signal", "l");
    legend->AddEntry(histB_scaled, "Background (scaled)", "l");
    legend->Draw();

    // === Subtract background ===
    TH1* hSubtracted = (TH1*)histS->Clone("hSubtracted");
    hSubtracted->Add(histB_scaled, -1);
    hSubtracted->SetLineColor(kGreen + 2);
    hSubtracted->SetLineWidth(2);
    hSubtracted->SetFillColor(0);

    // === Plot subtraction result ===
    TCanvas *c2 = new TCanvas("c2", "Signal - Scaled Background", 800, 600);
    hSubtracted->Draw("HIST");

    TLegend *legend2 = new TLegend(0.6, 0.75, 0.88, 0.88);
    legend2->AddEntry(hSubtracted, "Signal - Scaled Background", "l");
    legend2->Draw();

    // === Save both canvases to ROOT file ===
    TFile *outFile = new TFile("scaled_output_New_R24_60-100_CT_7-8_ptbin_photon_prob.root", "RECREATE");
    c1->Write("StackedCanvas");
    c2->Write("SubtractedCanvas");
    outFile->Close();

    std::cout << "Saved canvases Completed" << std::endl;

    // Optional: draw interactively
    c1->Draw();
    c2->Draw();
}
