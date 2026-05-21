// Macro to extract pT bins corresponding to Pi0 invariant mass peak (~0.12 to 0.16 GeV/c^2)

#include <TFile.h>
#include <TH3.h>
#include <TAxis.h>
#include <TH1.h>

void FindPtBins(const char *filename, const char *histname="pairInvMassPtEta")
{
    TFile *file = TFile::Open(filename, "READ");

    if (!file || file->IsZombie()){
        std::cout << "Could not open file: " << filename << std::endl;
        return;
    }

    TH3F *hist = (TH3F*)file->Get(histname);

    if (!hist){
        std::cout << "Could not find histogram: " << histname << std::endl;
        file->Close();
        return;
    }

    TAxis *ptAxis = hist->GetYaxis();
    int nBins = ptAxis->GetNbins();

    std::cout << "Identifying pT bins corresponding to Pi0 invariant mass peak (~0.12 to 0.16 GeV/c^2):" << std::endl;

    for(int i = 1; i <= nBins; i++){
        hist->GetYaxis()->SetRange(i, i);
        TH1D *massProjection = hist->ProjectionX(Form("mass_proj_bin%d", i));

        int peakBin_low = massProjection->FindBin(0.12);
        int peakBin_high = massProjection->FindBin(0.16);
        double peakContent = massProjection->Integral(peakBin_low, peakBin_high);

        if(peakContent > 0) {
            double bin_low_edge = ptAxis->GetBinLowEdge(i);
            double bin_high_edge = ptAxis->GetBinUpEdge(i);

            std::cout << "Pt Bin " << i << ": [" << bin_low_edge << ", " << bin_high_edge << "] GeV/c, Peak Count = " << peakContent << std::endl;
        }

        delete massProjection;
    }

    file->Close();
}

