#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TLine.h>
#include <TLegend.h>
#include <cmath>
using namespace std;

void DrawRcpGraph(TCanvas* canvas, TGraphErrors* graph) {
    canvas->cd();
    graph->SetTitle("R_{CP} vs. #it{p}_{T}");
    graph->SetMarkerStyle(20);
    graph->SetMarkerSize(1.2);
    graph->SetMarkerColor(kBlack);
    graph->SetLineColor(kBlack);
    graph->SetLineWidth(2);
    graph->Draw("AP");  // Draw with error bars

    graph->GetXaxis()->SetTitle("#it{p}_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("R_{CP}");
    graph->GetXaxis()->SetTitleOffset(0.95);
    graph->GetXaxis()->SetTitleSize(0.05);
    graph->GetYaxis()->SetTitleOffset(0.95);
    graph->GetYaxis()->SetTitleSize(0.05);
    graph->GetYaxis()->SetRangeUser(0, 2);

    // Draw guide line at Rcp = 1
    double xmin = graph->GetX()[0] - graph->GetEX()[0];
    double xmax = graph->GetX()[graph->GetN() - 1] + graph->GetEX()[graph->GetN() - 1];
    TLine* line = new TLine(xmin, 1.0, xmax, 1.0);
    line->SetLineStyle(2);
    line->SetLineColor(kGray + 2);
    line->SetLineWidth(2);
    line->Draw("SAME");
}

void DrawCentralPeripheralYields(TCanvas* canvas, TGraphErrors* graph, TGraphErrors* graph1) {
    canvas->cd();
    graph->SetTitle("Yields vs. #it{p}_{T} (Central and Peripheral)");
    graph->SetMarkerStyle(21);
    graph->SetMarkerSize(1.0);
    graph->SetMarkerColor(kBlue);
    graph->SetLineColor(kBlue);
    graph->SetLineWidth(2);

    graph1->SetMarkerStyle(22);
    graph1->SetMarkerSize(1.0);
    graph1->SetMarkerColor(kRed);
    graph1->SetLineColor(kRed);
    graph1->SetLineWidth(2);

    graph->Draw("AP");
    graph1->Draw("P SAME");

    graph->GetXaxis()->SetTitle("#it{p}_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("Counts");
    graph->GetXaxis()->SetTitleOffset(0.95);
    graph->GetXaxis()->SetTitleSize(0.05);
    graph->GetYaxis()->SetTitleOffset(0.95);
    graph->GetYaxis()->SetTitleSize(0.05);

    TLegend* legend = new TLegend(0.6, 0.7, 0.9, 0.9);
    legend->AddEntry(graph, "Central Yields", "p");
    legend->AddEntry(graph1, "Peripheral Yields", "p");
    legend->Draw();
}

void Run1() {
    const int n = 4;

    // pT values and x-errors
    Double_t P_t[n]     = {3.5, 4.5, 5.5, 6.5};
    Double_t P_t_Err[n] = {0.35, 0.5, 0.5, 0.5};  // Bin widths for horizontal error bars

    // Yields and statistical errors

    Double_t Yields_Cent[n] = {27245.2, 30236.6, 5020.13, 942.957};
    Double_t Yields_Cent_Err[n] = {464.563, 204.26, 74.8145, 32.3529};

    Double_t Yields_per[n] = {13871.7, 4419.23, 946.453, 220.3};
    Double_t Yields_per_Err[n] = {140.086, 73.5104, 31.97, 14.8425};

    // Rcp and its propagated error
    Double_t R_cp[n];
    Double_t R_cp_Err[n];

    // Ncoll values (treated as constants here)
    double Ncoll_cent = (1067.0 + 857.8 + 680.2 + 538.7 + 424.4 + 330.9) / 6.0;
    double Ncoll_per  = (35.67 + 23.77 + 15.37 + 9.686 + 5.875 + 3.395 + 2.065) / 7.0;

    for (int i = 0; i < n; ++i) {
        double yC = Yields_Cent[i];
        double yP = Yields_per[i];
        double eC = Yields_Cent_Err[i];
        double eP = Yields_per_Err[i];

        double normC = yC / Ncoll_cent;
        double normP = yP / Ncoll_per;
        R_cp[i] = normC / normP;

        // Error propagation: Rcp = (yC / Ncent) / (yP / Nper)
        // σ² = Rcp² * [ (σC/yC)² + (σP/yP)² ]
        R_cp_Err[i] = R_cp[i] * sqrt(pow(eC / yC, 2) + pow(eP / yP, 2));
    }

    // Graphs with errors
    TGraphErrors* graph_central    = new TGraphErrors(n, P_t, Yields_Cent, P_t_Err, Yields_Cent_Err);
    TGraphErrors* graph_peripheral = new TGraphErrors(n, P_t, Yields_per, P_t_Err, Yields_per_Err);
    TGraphErrors* graph_rcp        = new TGraphErrors(n, P_t, R_cp, P_t_Err, R_cp_Err);

    // Canvases
    TCanvas *c_yields = new TCanvas("c_yields", "Central & Peripheral Yields", 800, 600);
    TCanvas *c_rcp    = new TCanvas("c_rcp", "Rcp Graph", 800, 600);

    // Draw graphs
    DrawCentralPeripheralYields(c_yields, graph_central, graph_peripheral);
    DrawRcpGraph(c_rcp, graph_rcp);

    // Save all to ROOT file
    TFile *Histo_data = new TFile("Run24_set1_RcpResults_WithErrors.root", "RECREATE");
    c_yields->Write();
    c_rcp->Write();
    Histo_data->Close();
}

