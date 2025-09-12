#include <GetTChainMacro.C>
#include "/sphenix/user/plewis3323/MainMastersWork/src/calo_emc_pi0_tbt/CaloCalibEmc_eta.h"

void RunEta_B_2Loop(const int n_file = 1)
{
   
int nevents = -1;

	const std::string in_fname = "run24_ntuple_";
	const std::string macro_loc = "/sphenix/user/plewis3323/MainMastersWork/macro";


	// Input/output file definitions
	const std::string ifile = macro_loc + "/filelist/" + in_fname + std::to_string(n_file); 
        const std::string ofile= macro_loc + "/RESULTS/run24_loop_" + std::to_string(n_file) + ".root";  
	

	std::cout << " input file list  : " << ifile << std::endl;
	std::cout << " output file name : " << ofile << std::endl;

	R__LOAD_LIBRARY(libcalibCaloEmc_eta.so);

	CaloCalibEmc_eta calo_obj("CaloCalibEmc_eta", ofile.c_str());
	calo_obj.InitRun(0);

	// Build TTree from input filelist
	TTree *intree = GetTChainMacro(ifile.c_str());
	
        calo_obj.Loop_background_event_mixing(nevents, ifile.c_str(), intree); 
	// for creating background (using event mixing technique)

	calo_obj.End(0);
        std::cout << "All Done" << std::endl;
	gSystem->Exit(0);





}












