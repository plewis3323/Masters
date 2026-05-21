#include <iostream>
#include <TFile.h>
#include <TCanvas.h>
#include <TGraphErrors.h>
#include <TBox.h>
#include <TLegend.h>
#include <TLine.h>
#include <TPaveText.h>
#include <TStyle.h>
#include <cmath>

// Include sPHENIX style
//#include "sPhenixStyle.h"
//#include "sPhenixStyle.C"

using namespace std;

void Run1_Rcp_WithStyledSystematics() {
    //SetsPhenixStyle(); // Apply sPHENIX style

    const int n = 5;
    Double_t P_t[n] = {3.65, 4.5, 5.5, 6.5, 7.5};
    Double_t bin_width_half[n] = {0.35, 0.5, 0.5, 0.5, 0.5};

    // Raw yields
    Double_t Yields_Cent[n]     = {332270.0, 338604.0, 56743.2, 9857.4, 2657.04};
    Double_t Yields_Cent_Err[n] = {1877.6, 684.819, 261.822, 129.693, 67.2195};
    Double_t Yields_per[n]      = {77710.2, 24498.8, 5577.43, 1279.38, 336.907};
    Double_t Yields_per_Err[n]  = {354.603, 170.389, 85.5614, 40.4009, 18.3957};

    // Bin width correction
    double scale_factor = 1.0 / 0.7;
    Yields_Cent[0]     *= scale_factor;
    Yields_Cent_Err[0] *= scale_factor;
    Yields_per[0]      *= scale_factor;
    Yields_per_Err[0]  *= scale_factor;

    // Efficiencies
    double eff[n] = {0.304646, 0.383983, 0.363144, 0.269687, 0.168590};

    // Ncoll
    double Ncoll_cent = (1067.0 + 857.8 + 680.2 + 538.7 + 424.4 + 330.9) / 6.0;
    double Ncoll_per  = (35.67 + 23.77 + 15.37 + 9.686 + 5.875 + 3.395 + 2.065) / 7.0;

    Double_t Rcp[n], Rcp_Err[n];
    Double_t Rcp_4_3[n], Rcp_4_3_Err[n];

    for (int i = 0; i < n; ++i) {
        double yC_corr = Yields_Cent[i] / eff[i];
        double yP_corr = Yields_per[i] / eff[i];
        double normC = yC_corr / Ncoll_cent;
        double normP = yP_corr / Ncoll_per;

        Rcp[i] = normC / normP;

        double err_yC_corr = sqrt(yC_corr);
        double err_yP_corr = sqrt(yP_corr);
        Rcp_Err[i] = Rcp[i] * sqrt(pow(err_yC_corr / yC_corr, 2) + pow(err_yP_corr / yP_corr, 2));

        Rcp_4_3[i] = (4.0 / 3.0) * Rcp[i];
        Rcp_4_3_Err[i] = (4.0 / 3.0) * Rcp_Err[i];
    }

    // Create styled graph
    TGraphErrors* g_4_3 = new TGraphErrors(n, P_t, Rcp_4_3, 0, Rcp_4_3_Err);
    g_4_3->SetName("Rcp_4over3");
    g_4_3->SetMarkerStyle(21);
    g_4_3->SetMarkerColor(kRed+1);
    g_4_3->SetLineColor(kRed+1);

    // Canvas and axis frame
    TCanvas* c = new TCanvas("c_rcp", "Rcp Final with Styled Sys", 900, 700);
    TH1F* frame = c->DrawFrame(3.0, 0, 8.5, 1.5, "Run24 Au+Au #pi^{0} R_{CP}");
    frame->GetXaxis()->SetTitle("p_{T} (GeV/c)");
    frame->GetYaxis()->SetTitle("R_{CP}");
    frame->GetYaxis()->SetTitleOffset(1.3);

    // Draw systematics boxes
    TBox* systBoxes[n];
    for (int i = 0; i < n; ++i) {
        double x1 = P_t[i] - bin_width_half[i];
        double x2 = P_t[i] + bin_width_half[i];
        double y = Rcp_4_3[i];
        double y1 = y * (1 - 0.33);
        double y2 = y * (1 + 0.33);

        systBoxes[i] = new TBox(x1, y1, x2, y2);
        systBoxes[i]->SetLineColor(kRed + 1);
        systBoxes[i]->SetFillStyle(0); // transparent
        systBoxes[i]->SetLineWidth(2);
        systBoxes[i]->Draw();
    }

    // Draw statistical points
    g_4_3->Draw("P SAME");

    // Reference line at R=1
    TLine* line = new TLine(3.0, 1.0, 8.5, 1.0);
    line->SetLineStyle(2);
    line->SetLineColor(kGray + 2);
    line->SetLineWidth(2);
    line->Draw();

    /*
    // Styled legend
    TLegend* leg = new TLegend(0.15, 0.70, 0.55, 0.88);
    leg->AddEntry(g_4_3, "R_{CP} #times 4/3 (stat)", "lp");
    leg->AddEntry(systBoxes[0], "Syst. error (33%)", "l");
    leg->SetTextFont(42);
    leg->SetTextSize(0.035);
    leg->SetBorderSize(0);
    leg->SetFillStyle(0);
    leg->Draw();
    */

  

// Informational annotation block (no sPHENIX style)
TPaveText* info = new TPaveText(6.0, 1.05, 8.2, 1.38, "brc"); // Normalized coordinates
info->SetTextAlign(12);  // Left-center
info->SetTextFont(42);   // Helvetica
info->SetTextSize(0.035);
info->SetFillColor(0);   // Transparent background
info->SetFillStyle(0);   // Fully transparent
info->SetBorderSize(0);  // No border

info->AddText("sPHENIX EMCal-only");
info->AddText("#pi^{0} #rightarrow 2#gamma Analysis");
info->AddText("130M MB Run24 Au+Au Events");
info->AddText("Not Occupancy Corrected");

info->Draw();
   
    // Save to ROOT file
    TFile* fout = new TFile("Run24_Rcp_Styled_Systematics_Final.root", "RECREATE");
    g_4_3->Write();
    c->Write();
    fout->Close();

    std::cout << "Saved styled Rcp plot to Run24_Rcp_Styled_Systematics_Final.root" << std::endl;
}

