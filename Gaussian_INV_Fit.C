/*#include <TFile.h>
#include <TH1.h>
#include <TF1.h>
#include <iostream>
#include <string>

// Function to fit a specific histogram from a ROOT file
void fitHistogram(const std::string& dir, const char* filename, const char* histName, double fitMin, double fitMax) {
    // Construct full file path - MODIFY THIS TO YOUR DIRECTORY
    std::string filePath = dir + "/" + filename;
    
    // Open the ROOT file
    TFile *file = TFile::Open(filePath.c_str(), "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return;
    }
    
    // Retrieve the histogram - MODIFY HISTOGRAM NAME AS NEEDED
    TH1 *hist = nullptr;
    file->GetObject(histName, hist);
    if (!hist) {
        std::cerr << "Error: Histogram " << histName << " not found in file." << std::endl;
        file->Close();
        return;
    }
    
    // Fit the histogram with a Gaussian in the specified region
    TF1 *fitFunc = new TF1("fitFunc", "gaus", fitMin, fitMax);
    hist->Fit(fitFunc, "RQ");
    
    // Print fit parameters
    std::cout << "Histogram " << hist->GetName() << " fitted: "
              << " Mean = " << fitFunc->GetParameter(1)
              << " Sigma = " << fitFunc->GetParameter(2) << std::endl;
    
    // Close the file
    file->Close();
}

// Main function to call fitHistogram with user-specified values
void runFits() {
    std::string directory;
    std::string filename;
    std::string histName;
    double fitMin, fitMax;
    
    // User inputs for directory, file, histogram, and fit range
    std::cout << "Enter directory path: ";
    std::cin >> directory;
    std::cout << "Enter ROOT filename: ";
    std::cin >> filename;
    std::cout << "Enter histogram name: ";
    std::cin >> histName;
    std::cout << "Enter fit range minimum: ";
    std::cin >> fitMin;
    std::cout << "Enter fit range maximum: ";
    std::cin >> fitMax;
    
    // Call function with user-specified values
    fitHistogram(directory, filename.c_str(), histName.c_str(), fitMin, fitMax);
}
*/


#include <TFile.h>
#include <TH1.h>
#include <TF1.h>
#include <TCanvas.h>
#include <iostream>
#include <string>

// Function to fit a specific histogram from a ROOT file and save the canvas to a new ROOT file
void fitHistogram(const std::string& dir, const char* filename, const char* histName, double fitMin, double fitMax) {
    // Construct full file path - MODIFY THIS TO YOUR DIRECTORY
    std::string filePath = dir + "/" + filename;
    
    // Open the ROOT file
    TFile *file = TFile::Open(filePath.c_str(), "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return;
    }
    
    // Retrieve the histogram - MODIFY HISTOGRAM NAME AS NEEDED
    TH1 *hist = nullptr;
    file->GetObject(histName, hist);
    if (!hist) {
        std::cerr << "Error: Histogram " << histName << " not found in file." << std::endl;
        file->Close();
        return;
    }
    
    // Fit the histogram with a Gaussian in the specified region
    TF1 *fitFunc = new TF1("fitFunc", "gaus", fitMin, fitMax);
    hist->Fit(fitFunc, "RQ");
    
    // Print fit parameters
    std::cout << "Histogram " << hist->GetName() << " fitted: "
              << " Mean = " << fitFunc->GetParameter(1)
              << " Sigma = " << fitFunc->GetParameter(2) << std::endl;

    // Create a canvas to draw the histogram and fit
    TCanvas *canvas = new TCanvas("canvas", "Fitted Histogram", 800, 600);
    hist->Draw();
    fitFunc->Draw("same");  // Overlay the fit function on the histogram

    // Create a new ROOT file to save the canvas
    TFile *outputFile = TFile::Open("output_with_fitted_histogram.root", "RECREATE");
    if (!outputFile || outputFile->IsZombie()) {
        std::cerr << "Error: Could not create output file." << std::endl;
        file->Close();
        return;
    }

    // Save the canvas to the new file
    canvas->Write("canvas_with_fit");

    // Close the files
    outputFile->Close();
    file->Close();
}

// Main function to call fitHistogram with user-specified values
void runFits() {
    std::string directory;
    std::string filename;
    std::string histName;
    double fitMin, fitMax;
    
    // User inputs for directory, file, histogram, and fit range
    std::cout << "Enter directory path: ";
    std::cin >> directory;
    std::cout << "Enter ROOT filename: ";
    std::cin >> filename;
    std::cout << "Enter histogram name: ";
    std::cin >> histName;
    std::cout << "Enter fit range minimum: ";
    std::cin >> fitMin;
    std::cout << "Enter fit range maximum: ";
    std::cin >> fitMax;

    
    // Call function with user-specified values
    fitHistogram(directory, filename.c_str(), histName.c_str(), fitMin, fitMax);
}




// Sp
