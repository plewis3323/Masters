#include <fstream>
#include <string>
#include "TChain.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include <iostream>

TTree* GetTChainMacro(const char* ifile)
{
	ifstream inFile;
	inFile.open(ifile, ios::in); // open to read
	if (!inFile)
	{
		cerr << "Unable to open file:\n ";
		exit(1);
	}

	TChain *etatree = new TChain("_eventTree");
	string root_file;
	int lines=0;
	while (std::getline(inFile, root_file))
	{
		etatree->Add(root_file.c_str());
		lines += 1;
	}
	printf("total lines: %d\n",lines);
	inFile.close();
	
	return (TTree *) etatree;
}
