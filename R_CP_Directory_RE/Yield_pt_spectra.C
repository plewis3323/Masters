#include <iostream>
#include <TFile.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TLegend.h>

using namespace std;
/*
void DrawCentralYields(TCanvas* canvas, TGraphErrors* graph) {
    canvas->cd();
    graph->SetTitle("Central Yields");
    graph->SetMarkerStyle(21);
    graph->SetMarkerSize(1.0);
    graph->SetMarkerColor(kBlue);
    graph->SetLineColor(kBlue);
    graph->SetLineWidth(2);
    graph->Draw("AP");
    graph->GetXaxis()->SetTitle("#it{p}_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("Counts");
   // graph->SetMinimum(0);
   // graph->SetMaximum(1.2e7); // manually set based on scaled central[0]
}

void DrawPeripheralYields(TCanvas* canvas, TGraphErrors* graph) {
    canvas->cd();
    graph->SetTitle("Peripheral Yields");
    graph->SetMarkerStyle(22);
    graph->SetMarkerSize(1.0);
    graph->SetMarkerColor(kRed);
    graph->SetLineColor(kRed);
    graph->SetLineWidth(2);
    graph->Draw("AP");
    graph->GetXaxis()->SetTitle("#it{p}_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("Counts");
   // graph->SetMinimum(0);
   // graph->SetMaximum(2.0e7); // manually set based on scaled peripheral[0]
}

*/

void Energy_Calibration(TCanvas* combinedCanvas, TGraphErrors* graph, TGraphErrors* graph1) {
    combinedCanvas->cd();
    combinedCanvas->SetLogy();  // Enable log scale on Y-axis

    graph->SetTitle("Raw Yields Spectra");
    graph->SetMarkerStyle(21);
    graph->SetMarkerSize(1.0);
    graph->SetMarkerColor(kBlue);
    graph->SetLineColor(15);
    graph->SetLineWidth(2);

    graph1->SetMarkerStyle(22);
    graph1->SetMarkerSize(1.0);
    graph1->SetMarkerColor(kRed);
    graph1->SetLineColor(kRed);
    graph1->SetLineWidth(2);

    // Manually set axis titles
    graph->GetXaxis()->SetTitle("p_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("#frac{dN}{dp_{T}} (GeV/c)^{-1}");
    graph->GetXaxis()->SetTitleOffset(1.15);
    graph->GetXaxis()->SetTitleSize(0.035);
    graph->GetYaxis()->SetTitleOffset(1.15);
    graph->GetYaxis()->SetTitleSize(0.035);

    // Compute global min and max (ignoring zeros for log scale)
    double minY = 1e30;
    double maxY = -1e30;

    for (int i = 0; i < graph->GetN(); ++i) {
        double y = graph->GetY()[i];
        if (y > 0) {
            minY = std::min(minY, y - graph->GetEY()[i]);
            maxY = std::max(maxY, y + graph->GetEY()[i]);
        }
    }
    for (int i = 0; i < graph1->GetN(); ++i) {
        double y = graph1->GetY()[i];
        if (y > 0) {
            minY = std::min(minY, y - graph1->GetEY()[i]);
            maxY = std::max(maxY, y + graph1->GetEY()[i]);
        }
    }

    // Clamp to reasonable log-scale range
    if (minY <= 0) minY = 10;        // ROOT log scale needs > 0
    if (maxY <= minY) maxY = minY * 10;

    graph->SetMinimum(minY * 0.5);   // Add margin
    graph->SetMaximum(maxY * 1.2);

    // Draw both
    graph->Draw("AP");
    graph1->Draw("P SAME");

    TLegend* legend = new TLegend(0.6, 0.7, 0.9, 0.9);
    legend->AddEntry(graph, "Central Yields", "p");
    legend->AddEntry(graph1, "Peripheral Yields", "p");
    legend->Draw();
}

void Run1() {
    const int n = 5;
    Double_t P_t[n] = {3.65, 4.5, 5.5, 6.5, 7.5};

    // Original data
    Double_t Yields_Cent[n] = {332270.0, 338604.0, 56743.2, 9857.4, 2657.04};
    Double_t Yields_Cent_Err[n] = {1877.6, 684.819, 261.822, 129.693, 67.2195};

    Double_t Yields_per[n] =  {77710.2,  24498.8, 5577.43, 1279.38,  336.907};
    Double_t Yields_per_Err[n] = {354.603, 170.389, 85.5614, 40.4009, 18.3957};

    // Rescale first bin (width = 0.7) to match 1.0-width bins
    double scale_factor = 1.0 / 0.7;
    Yields_Cent[0] *= scale_factor;
    Yields_Cent_Err[0] *= scale_factor;
    Yields_per[0] *= scale_factor;
    Yields_per_Err[0] *= scale_factor;

    // Create graphs
    TGraphErrors* graph_central = new TGraphErrors(n, P_t, Yields_Cent, 0, Yields_Cent_Err);
    TGraphErrors* graph_peripheral = new TGraphErrors(n, P_t, Yields_per, 0, Yields_per_Err);

    // Create canvases
    TCanvas *c_combined = new TCanvas("c_combined_Raw", "Combined Graph", 800, 600);
    //TCanvas *c_central = new TCanvas("c_central", "Central Only", 800, 600);
    //TCanvas *c_peripheral = new TCanvas("c_peripheral", "Peripheral Only", 800, 600);

    // Draw graphs
    Energy_Calibration(c_combined, graph_central, graph_peripheral);
    //DrawCentralYields(c_central, graph_central);
    //DrawPeripheralYields(c_peripheral, graph_peripheral);

    // Save canvases to ROOT file
    TFile *Histo_data = new TFile("Run24_H_stat_photon_prob_cut_sets_A.root", "RECREATE");
    c_combined->Write();
    //c_central->Write();
    //c_peripheral->Write();
    Histo_data->Close();
}

