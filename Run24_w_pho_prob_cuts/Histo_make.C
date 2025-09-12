#include <TFile.h>
#include <TCanvas.h>
#include <TH1.h>
#include <TKey.h>
#include <TList.h>
#include <TSystem.h>
#include <TString.h>
#include <iostream>
#include <vector>

void extract_and_rename_histograms() {
    // List of input files
    std::vector<const char*> input_files = {
   "New_R24_60-100_CT_4-5_ptbin_B.root",
   "New_R24_0-30_CT_3-4_ptbin.root"  
      };
    for (const char* input_file : input_files) {
        std::cout << "Processing file: " << input_file << std::endl;

        TFile* infile = TFile::Open(input_file, "READ");
        if (!infile || infile->IsZombie()) {
            std::cerr << "Cannot open file: " << input_file << std::endl;
            continue;
        }

        TString in_filename = gSystem->BaseName(input_file);  // Strip path
        TString base_name = in_filename;
        base_name.ReplaceAll(".root", "");

        std::vector<TH1*> histos;

        TIter next(infile->GetListOfKeys());
        TKey* key;
        while ((key = (TKey*)next())) {
            TObject* obj = key->ReadObj();
            if (!obj) continue;

            if (obj->InheritsFrom("TCanvas")) {
                TCanvas* canvas = dynamic_cast<TCanvas*>(obj);
                if (!canvas) continue;

                TList* prims = canvas->GetListOfPrimitives();
                if (!prims) continue;

                for (int i = 0; i < prims->GetSize(); ++i) {
                    TObject* prim = prims->At(i);
                    if (!prim) continue;

                    if (prim->InheritsFrom("TH1")) {
                        TH1* h = dynamic_cast<TH1*>(prim);
                        if (!h) continue;

                        TH1* hclone = (TH1*)h->Clone();
                        if (!hclone) continue;

                        TString new_name = TString(h->GetName()) + "_" + base_name;
                        hclone->SetName(new_name);
                        hclone->SetDirectory(nullptr); // Detach from any file
                        histos.push_back(hclone);
                    }
                }
            }
        }

        infile->Close();

        if (histos.empty()) {
            std::cout << "No histograms found in: " << input_file << std::endl;
            continue;
        }

        TString out_filename = base_name + "_hist.root";
        TFile* outfile = new TFile(out_filename, "RECREATE");
        if (!outfile || outfile->IsZombie()) {
            std::cerr << "Cannot create output file: " << out_filename << std::endl;
            continue;
        }

        for (auto h : histos) {
            h->Write();
        }

        outfile->Close();
        std::cout << "Saved " << histos.size() << " histogram(s) to: " << out_filename << std::endl;
    }
}

