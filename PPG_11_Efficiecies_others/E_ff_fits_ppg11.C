#include <TFile.h>
#include <TCanvas.h>
#include <TGraphErrors.h>
#include <TF1.h>
#include <TMath.h>
#include <TObject.h>
#include <TIterator.h>
#include <TList.h>
#include <TVirtualFitter.h>
#include <TMatrixD.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstring>

// Numerical gradient + error propagation
double EvaluateEfficiencyError(TF1* fit, double x, const TMatrixD& cov) {
    const double* params = fit->GetParameters();
    int npar = fit->GetNpar();
    std::vector<double> grad(npar);
    const double dx = 1e-5;

    for (int i = 0; i < npar; ++i) {
        double p_up[npar], p_down[npar];
        memcpy(p_up, params, sizeof(double) * npar);
        memcpy(p_down, params, sizeof(double) * npar);
        p_up[i] += dx;
        p_down[i] -= dx;

        double f_up = fit->EvalPar(&x, p_up);
        double f_down = fit->EvalPar(&x, p_down);
        grad[i] = (f_up - f_down) / (2.0 * dx);
    }

    double err2 = 0;
    for (int i = 0; i < npar; ++i)
        for (int j = 0; j < npar; ++j)
            err2 += grad[i] * cov(i, j) * grad[j];

    return std::sqrt(err2);
}

void FitEfficiencyGraph(const char* filename = "PPG_11_pi0_efficiency.root", const char* canvasname = "c") {
    std::cout << "Opening ROOT file: " << filename << std::endl;
    TFile* file = TFile::Open(filename, "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Failed to open file!" << std::endl;
        return;
    }

    TCanvas* canvas = dynamic_cast<TCanvas*>(file->Get(canvasname));
    if (!canvas) {
        std::cerr << "Canvas not found: " << canvasname << std::endl;
        return;
    }

    TGraph* graph = nullptr;
    TIter next(canvas->GetListOfPrimitives());
    TObject* obj;
    while ((obj = next()) && !graph) {
        if (obj->InheritsFrom(TGraph::Class())) {
            graph = dynamic_cast<TGraph*>(obj);
        }
    }

    if (!graph) {
        std::cerr << "No TGraph found on canvas!" << std::endl;
        return;
    }

    graph->SetTitle("Efficiency Fit Test; p_{T}^{Reco} [GeV/c]; Acceptance #times Efficiency");
    graph->SetMarkerStyle(21);
    graph->Draw("AP");

    double xmin = graph->GetX()[0];
    double xmax = graph->GetX()[graph->GetN() - 1];

    TF1* f1 = new TF1("expo_decay", "[0]*exp(-[1]*x)", xmin, xmax);
    f1->SetParameters(0.5, 0.1);
    TF1* f2 = new TF1("gauss_like", "[0]*pow(x,[1])*exp(-[2]*x)", xmin, xmax);
    f2->SetParameters(0.1, 2, 0.3);
    TF1* f3 = new TF1("poly2", "[0] + [1]*x + [2]*x*x", xmin, xmax);
    f3->SetParameters(0.1, 0.1, -0.01);
    TF1* f4 = new TF1("sigmoid", "[0]/(1+exp(-[1]*(x-[2])))", xmin, xmax);
    f4->SetParameters(0.4, 1, 5);

    TF1* fit_funcs[] = {f1, f2, f3, f4};
    const char* fit_names[] = {"Exponential Decay", "Gaussian-Like", "Polynomial 2nd", "Sigmoid"};

    double best_chi2 = 1e9;
    TF1* best_fit = nullptr;
    int best_index = -1;

    for (int i = 0; i < 4; ++i) {
        graph->Fit(fit_funcs[i], "Q0");
        double chi2ndf = fit_funcs[i]->GetChisquare() / fit_funcs[i]->GetNDF();
        std::cout << fit_names[i] << " chi2/ndf: " << chi2ndf << std::endl;
        if (chi2ndf < best_chi2) {
            best_chi2 = chi2ndf;
            best_fit = fit_funcs[i];
            best_index = i;
        }
    }

    if (!best_fit) {
        std::cerr << "No fit succeeded!" << std::endl;
        return;
    }

    graph->Fit(best_fit, "R");
    std::ofstream fout("efficiency_fit_results.txt");
    fout << "Best Fit Function: " << fit_names[best_index] << "\n";
    fout << "Chi2/NDF: " << best_fit->GetChisquare() << " / " << best_fit->GetNDF() << "\n\n";
    fout << "Parameters:\n";
    for (int i = 0; i < best_fit->GetNpar(); ++i)
        fout << "  [" << i << "] = " << best_fit->GetParameter(i) << "\n";

    // Get covariance matrix from TVirtualFitter
    TMatrixD cov(best_fit->GetNpar(), best_fit->GetNpar());
    TVirtualFitter* fitter = TVirtualFitter::GetFitter();
    for (int i = 0; i < best_fit->GetNpar(); ++i)
        for (int j = 0; j < best_fit->GetNpar(); ++j)
            cov(i, j) = fitter->GetCovarianceMatrixElement(i, j);

    // Specific points
    double points[] = {3.65, 4.5, 5.5, 6.5, 7.5};
    fout << "\nEfficiencies at specific pT values (with propagated errors):\n";
    std::cout << "\nEfficiencies at selected points:\n";
    for (double pt : points) {
        double val = best_fit->Eval(pt);
        double err = EvaluateEfficiencyError(best_fit, pt, cov);
        fout << "  pT = " << pt << " GeV/c --> Efficiency = " << val << " ± " << err << "\n";
        std::cout << "  pT = " << pt << " GeV/c --> Efficiency = " << val << " ± " << err << std::endl;
    }

    // Bins
    std::vector<std::pair<double, double>> pt_bins = {
        {3.3, 4.0}, {4.0, 5.0}, {5.0, 6.0}, {6.0, 7.0}, {7.0, 8.0}
    };

    fout << "\nAverage Efficiencies in pT Bins (with propagated errors):\n";
    std::cout << "\nAverage Efficiencies in pT Bins:\n";
    const double* params = best_fit->GetParameters();

    for (const auto& bin : pt_bins) {
        double pmin = bin.first;
        double pmax = bin.second;
        double width = pmax - pmin;
        double integral = best_fit->Integral(pmin, pmax);
        double error = best_fit->IntegralError(pmin, pmax, params, cov.GetMatrixArray());
        double avg_eff = integral / width;
        double avg_err = error / width;

        fout << "  pT bin [" << pmin << ", " << pmax << "] --> Avg. Efficiency = " << avg_eff << " ± " << avg_err << "\n";
        std::cout << "  pT bin [" << pmin << ", " << pmax << "] --> Avg. Efficiency = " << avg_eff << " ± " << avg_err << std::endl;
    }

    fout.close();
    TFile* fout_root = new TFile("PPG_11_efficiency_fit_output.root", "RECREATE");
    graph->Write("EfficiencyGraph");
    best_fit->Write("BestFitFunction");
    fout_root->Close();

    std::cout << "\nResults saved to efficiency_fit_results.txt and PPG_11_efficiency_fit_output.root\n";
}
