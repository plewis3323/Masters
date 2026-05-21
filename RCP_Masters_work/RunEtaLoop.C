
#include <GetTChainMacro.C>
#include "/sphenix/user/plewis3323/MainMastersWork/src/calo_emc_pi0_tbt/CaloCalibEmc_eta.h"


void RunEtaLoop(const int n_file = 55)
{
	int nevents = -1;
	
	const std::string in_fname = "run24_ntuple_";

	const std::string macro_loc = "/sphenix/user/plewis3323/MainMastersWork/macro";
	
	// check this and down than this to confirm input filelist
	const std::string ifile= macro_loc + "/filelist/" + in_fname + std::to_string(n_file); // input file-list
	const std::string ofile= macro_loc + "/RESULTS/run24_loop_" + std::to_string(n_file) + ".root";  
	
	std::cout << " input file list " << ifile << std::endl;
	std::cout << " output file list " << ofile << std::endl;
	
	R__LOAD_LIBRARY(libcalibCaloEmc_eta.so);

	CaloCalibEmc_eta calo_obj("CaloCalibEmc_eta", ofile.c_str());
        calo_obj.InitRun(0);
	TTree * intree1 =  GetTChainMacro(ifile.c_str());
  
	calo_obj.Loop(nevents, ifile.c_str(), intree1); // creates foreground
  
	calo_obj.End(0);
	gSystem->Exit(0);
	std::cout << "All Done" << std::endl;

}
