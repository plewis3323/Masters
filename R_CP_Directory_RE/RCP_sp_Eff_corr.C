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
    graph->SetTitle("Run24 Au + Au #pi^{0}'s R_{CP}");
    graph->SetMarkerStyle(20);
    graph->SetMarkerSize(1.2);
    graph->SetMarkerColor(kBlack);
    graph->SetLineColor(kBlack);
    graph->SetLineWidth(2);
    graph->Draw("AP");

    graph->GetXaxis()->SetTitle("p_{T} (GeV/c)");
    graph->GetYaxis()->SetTitle("R_{CP}");
    graph->GetYaxis()->SetRangeUser(0, 2);

    double xmin = graph->GetX()[0];
    double xmax = graph->GetX()[graph->GetN() - 1];
    TLine* line = new TLine(xmin, 1.0, xmax, 1.0);
    line->SetLineStyle(2);
    line->SetLineColor(kGray + 2);
    line->SetLineWidth(2);
    line->Draw("SAME");
}

void Run1() {
    const int n = 5;
    Double_t P_t[n] = {3.65, 4.5, 5.5, 6.5, 7.5};

    // Yields and errors
    Double_t Yields_Cent[n] = {332270.0, 338604.0, 56743.2, 9857.4, 2657.04};
    Double_t Yields_Cent_Err[n] = {1877.6, 684.819, 261.822, 129.693, 67.2195};

    Double_t Yields_per[n] =  {77710.2,  24498.8, 5577.43, 1279.38,  336.907};
    Double_t Yields_per_Err[n] = {354.603, 170.389, 85.5614, 40.4009, 18.3957};

    // Rescale first bin (width = 0.7)
    double scale_factor = 1.0 / 0.7;
    Yields_Cent[0] *= scale_factor;
    Yields_Cent_Err[0] *= scale_factor;
    Yields_per[0] *= scale_factor;
    Yields_per_Err[0] *= scale_factor;

    // Efficiency and errors
    double eff[n]     = {0.304646, 0.383983, 0.363144, 0.269687, 0.168590};
    double eff_err[n] = {0.00857803, 0.00801237, 0.00762325, 0.00785996, 0.00713614};

    // Ncoll
    double Ncoll_cent = (1067.0 + 857.8 + 680.2 + 538.7 + 424.4 + 330.9) / 6.0;
    double Ncoll_per  = (35.67 + 23.77 + 15.37 + 9.686 + 5.875 + 3.395 + 2.065) / 7.0;

    Double_t R_cp[n], R_cp_Err[n], Y_Cent_errc[n], Y_Per_errc[n];

    for (int i = 0; i < n; ++i) {
        double yC = Yields_Cent[i];
        double eC = Yields_Cent_Err[i];
        double yP = Yields_per[i];
        double eP = Yields_per_Err[i];

        double effC = eff[i];
        double eff_errC = eff_err[i];
        double effP = eff[i];            // Same for both
        double eff_errP = eff_err[i];

        double yC_corr = yC / effC;
        double yP_corr = yP / effP;

	Y_Cent_errc[i] = sqrt(yC_corr); 
	Y_Per_errc[i] = sqrt(yP_corr); 

        double normC = yC_corr / Ncoll_cent;
        double normP = yP_corr / Ncoll_per;
        R_cp[i] = normC / normP;

        // Error propagation
        //double frac_errC = sqrt(pow(eC / yC, 2) + pow(eff_errC / effC, 2));
        //double frac_errP = sqrt(pow(eP / yP, 2) + pow(eff_errP / effP, 2));
        R_cp_Err[i] = R_cp[i] * sqrt(pow(Y_Cent_errc[i]/yC_corr, 2)  + pow(Y_Per_errc[i]/yP_corr, 2));
    }

    // Create Rcp graph
    TGraphErrors* graph_rcp = new TGraphErrors(n, P_t, R_cp, 0, R_cp_Err);
    TCanvas* c_rcp = new TCanvas("c_rcp", "RCP with Eff. Corr.", 800, 600);
    DrawRcpGraph(c_rcp, graph_rcp);

    // Save output
    TFile* fout = new TFile("Run24_RCP_EffCorrected_2.root", "RECREATE");
    c_rcp->Write();
    graph_rcp->Write("RcpGraph_EffCorrected");
    fout->Close();

    std::cout << "\nCorrected Rcp values:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "  pT = " << P_t[i]
                  << " GeV/c --> Rcp = " << R_cp[i]
                  << " ± " << R_cp_Err[i] << std::endl;
    }
}
