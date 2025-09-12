#include <iostream>
#include <fstream>
#include <iomanip>
#include <TFile.h>
#include <TCanvas.h>
#include <TH1.h>
#include <TF1.h>
#include <TObject.h>
#include <TMath.h>

// Background model functions
Double_t exponentialDecay(Double_t* x, Double_t* par) {
    return par[0] * exp(-par[1] * x[0]);
}

Double_t polynomialDecay(Double_t* x, Double_t* par) {
    return par[0] + par[1] * x[0] + par[2] * x[0] * x[0];
}

Double_t expPolyDecay(Double_t* x, Double_t* par) {
    return par[0] * exp(-par[1] * x[0]) + par[2] + par[3] * x[0];
}

Double_t expPol2Decay(Double_t* x, Double_t* par) {
    return par[0] * exp(-par[1] * x[0]) + par[2] + par[3] * x[0] + par[4] * x[0] * x[0];
}

Double_t expPol3Decay(Double_t* x, Double_t* par) {
    return par[0] * exp(-par[1] * x[0]) + par[2] + par[3] * x[0] + par[4] * x[0] * x[0] + par[5] * x[0] * x[0] * x[0];
}

Double_t pol1(Double_t* x, Double_t* par) {
    return par[0] + par[1] * x[0];
}

Double_t pol2(Double_t* x, Double_t* par) {
    return par[0] + par[1] * x[0] + par[2] * x[0] * x[0];
}

Double_t pol3(Double_t* x, Double_t* par) {
    return par[0] + par[1] * x[0] + par[2] * x[0] * x[0] + par[3] * x[0] * x[0] * x[0];
}

Double_t powerLaw(Double_t* x, Double_t* par) {
    if (x[0] <= 0) return 0;
    return par[0] * TMath::Power(x[0], par[1]);
}

Double_t Exp_powerLaw(Double_t* x, Double_t* par) {
    if (x[0] <= 0) return 0;
    return par[0] * TMath::Power(x[0], par[1]) + par[2] * exp(par[3] * x[0]);
}

// Main function
void BackgroundFits(
    const char* inputFileName = "scaled_output_New_R24_0-30_CT_6-7_ptbin_photon_prob_Bkgrd_prep.root",
    const char* canvasName = "histo_w_o_data_points",
    const char* modelName = "exp+pol3",
    double fitMin = 0.09,
    double fitMax = 0.35
) {
    std::cout << "Loading ROOT file: " << inputFileName << std::endl;
    TFile* inputFile = TFile::Open(inputFileName, "READ");
    if (!inputFile || inputFile->IsZombie()) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return;
    }

    std::cout << "Accessing canvas: " << canvasName << std::endl;
    TCanvas* originalCanvas = dynamic_cast<TCanvas*>(inputFile->Get(canvasName));
    if (!originalCanvas) {
        std::cerr << "Error: Canvas '" << canvasName << "' not found." << std::endl;
        inputFile->Close();
        return;
    }

    // Get the first histogram
    TH1* hist = nullptr;
    TIter next(originalCanvas->GetListOfPrimitives());
    TObject* obj;
    while ((obj = next())) {
        if (obj->InheritsFrom("TH1")) {
            hist = (TH1*)obj;
            break;
        }
    }

    if (!hist) {
        std::cerr << "Error: No histogram found on canvas." << std::endl;
        inputFile->Close();
        return;
    }

    // Select background model
    TF1* fitFunc = nullptr;
    if (strcmp(modelName, "exp") == 0) {
        fitFunc = new TF1("fitFunc", exponentialDecay, fitMin, fitMax, 2);
    } else if (strcmp(modelName, "polynomial") == 0) {
        fitFunc = new TF1("fitFunc", polynomialDecay, fitMin, fitMax, 3);
    } else if (strcmp(modelName, "exp+pol") == 0) {
        fitFunc = new TF1("fitFunc", expPolyDecay, fitMin, fitMax, 4);
    } else if (strcmp(modelName, "exp+pol2") == 0) {
        fitFunc = new TF1("fitFunc", expPol2Decay, fitMin, fitMax, 5);
    } else if (strcmp(modelName, "exp+pol3") == 0) {
        fitFunc = new TF1("fitFunc", expPol3Decay, fitMin, fitMax, 6);
    } else if (strcmp(modelName, "pol1") == 0) {
        fitFunc = new TF1("fitFunc", pol1, fitMin, fitMax, 2);
    } else if (strcmp(modelName, "pol2") == 0) {
        fitFunc = new TF1("fitFunc", pol2, fitMin, fitMax, 3);
    } else if (strcmp(modelName, "pol3") == 0) {
        fitFunc = new TF1("fitFunc", pol3, fitMin, fitMax, 4);
    } else if (strcmp(modelName, "powerlaw") == 0) {
        fitFunc = new TF1("fitFunc", powerLaw, fitMin, fitMax, 2);
    } else if (strcmp(modelName, "exp+pow") == 0) {
        fitFunc = new TF1("fitFunc", Exp_powerLaw, fitMin, fitMax, 4);
    } else {
        std::cerr << "Unknown model name: " << modelName << std::endl;
        inputFile->Close();
        return;
    }

    std::cout << "Fitting histogram using model: " << modelName << std::endl;
    hist->Fit(fitFunc, "R");

    // Draw the fit
    TCanvas* cFit = new TCanvas("background_fit", "Background Fit", 800, 600);
    hist->Draw("E1");
    fitFunc->SetLineColor(kRed);
    fitFunc->Draw("SAME");

    // Save output ROOT file
    std::string outputFileName = inputFileName;
    size_t pos = outputFileName.find(".root");
    if (pos != std::string::npos)
        outputFileName.replace(pos, 5, "_BackgroundFits.root");
    else
        outputFileName += "_BackgroundFits.root";

    TFile* outFile = new TFile(outputFileName.c_str(), "RECREATE");
    cFit->Write();
    fitFunc->Write("fit_model");
    outFile->Close();

    // Save fit parameters to .txt
    std::string txtFileName = outputFileName;
    pos = txtFileName.find(".root");
    if (pos != std::string::npos)
        txtFileName.replace(pos, 5, "_fit_parameters.txt");
    else
        txtFileName += "_fit_parameters.txt";

    std::ofstream paramOut(txtFileName);
    paramOut << std::fixed << std::setprecision(6);

    double chi2 = fitFunc->GetChisquare();
    int ndf = fitFunc->GetNDF();
    double prob = fitFunc->GetProb();

    paramOut << "Fit Model Used: " << modelName << std::endl;
    paramOut << "Fit Range: [" << fitMin << ", " << fitMax << "]" << std::endl;
    paramOut << "Number of Fit Parameters: " << fitFunc->GetNpar() << std::endl;
    paramOut << "Chi2 / NDF: " << chi2 << " / " << ndf << std::endl;
    paramOut << "Fit Probability: " << prob << std::endl;
    paramOut << "Fit Parameters (with uncertainties):" << std::endl;

    for (int i = 0; i < fitFunc->GetNpar(); ++i) {
        double val = fitFunc->GetParameter(i);
        double err = fitFunc->GetParError(i);
        paramOut << "par[" << i << "] = " << std::setw(12) << val << " ± " << std::setw(12) << err << std::endl;
    }
    paramOut.close();

    std::cout << "Fit parameters saved to: " << txtFileName << std::endl;
    std::cout << "Fit results saved to: " << outputFileName << std::endl;
    inputFile->Close();
}










