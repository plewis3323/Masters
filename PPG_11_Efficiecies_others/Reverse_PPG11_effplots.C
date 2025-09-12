#include <TGraphErrors.h>
#include <TF1.h>
#include <TCanvas.h>
#include <TAxis.h>
#include <TLegend.h>

void plot_pi0_efficiency()
{
    // Example data: replace with digitized points from the plot
    const int nPoints = 13;
    double pt[nPoints]      = {2.25, 2.50, 3.0, 3.50, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.75, 8.25};
    double eff[nPoints]     = {0.03, 0.13, 0.21, 0.29, 0.34, 0.39, 0.38, 0.36, 0.33, 0.27, 0.2, 0.16, 0.11};
    //double pt_err[nPoints]  = {0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25};
    //double eff_err[nPoints] = {0.01, 0.015, 0.02, 0.02, 0.02, 0.02, 0.02, 0.015, 0.01, 0.01, 0.005, 0.005};

    auto c = new TCanvas("c", "Acceptance x Efficiency", 800, 600);
    auto graph = new TGraphErrors(nPoints, pt, eff, 0, 0);
    graph->SetTitle("#pi^{0} Acceptance #times Efficiency; p_{T}^{reco} [GeV/c]");
    graph->SetMarkerStyle(21);
    graph->SetMarkerColor(kBlue+1);
    graph->SetLineColor(kBlue+1);
    graph->Draw("AP");

    // Optional: Fit with a Gaussian-like TF1 (very approximate)
    //TF1 *fitFunc = new TF1("fitFunc", "[0]*exp(-0.5*((x-[1])/[2])^2)", 1.5, 8.5);
   // fitFunc->SetParameters(0.4, 4.5, 1.2); // rough initial guesses
   // graph->Fit(fitFunc, "R");

    // Legend
    auto legend = new TLegend(0.6, 0.75, 0.88, 0.88);
    legend->AddEntry(graph, "Di-cluster reco, p_{T}^{leading} > 1 GeV", "p");
   // legend->AddEntry(fitFunc, "Gaussian Fit", "l");
    legend->Draw();

    c->SaveAs("PPG_11_pi0_efficiency.root");
}

