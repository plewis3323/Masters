#include <calib_emc_pi0/CaloCalibEmc_Pi0.h>
void runLCELoop(int nevents = -1, const char *ifile=" run23_ntuple_11", const char *ofile="run23.root")
{
        gSystem->Load("libcalibCaloEmc_pi0.so");
	CaloCalibEmc_Pi0 obj_LCE("name_objLCE", ofile);
	obj_LCE.InitRun(0);
	obj_LCE.Loop(ifile, nevents);
	obj_LCE.End(0);
	obj_LCE.FittingHistos();
}
