/*
// these include guards are not really needed, but if we ever include this
// file somewhere they would be missed and we will have to refurbish all macros
#ifndef MACRO_FUN4ALLG4SLOPECAL_C
#define MACRO_FUN4ALLG4SLOPECAL_C

#include <fun4all/Fun4AllDstInputManager.h>
#include <fun4all/Fun4AllInputManager.h>
#include <fun4all/Fun4AllServer.h>
#include <CaloCalibEmc_eta.h>  //Edit here 

// cppcheck-suppress unknownMacro
R__LOAD_LIBRARY(libfun4all.so)

void Fun4All_G4_Pi0_Tbt(
    const int nEvents = 10,
    const string &inputClustersFileList = "/sphenix/user/plewis3323/practice/xaa", //Edit here
    const string &outputFile = "test1")
{
  // this convenience library knows all our i/o objects so you don't
  // have to figure out what is in each dst type
  gSystem->Load("libg4dst.so");
  gSystem->Load("libcalibCaloEmc_eta.so"); //Edit here 

  Fun4AllServer *se = Fun4AllServer::instance();
  se->Verbosity();  // set it to 1 if you want event printouts

  Fun4AllInputManager *in = new Fun4AllDstInputManager("DSTClusters");
  in->AddListFile(inputClustersFileList);
  se->registerInputManager(in);

  string outputfile = outputFile + "_g4cemc_eval.root";

  CaloCalibEmc_eta *eval = new CaloCalibEmc_eta("CEMC_CALIB_PI0", outputfile);  //Edit here 
  //  eval->Verbosity(verbosity);
  se->registerSubsystem(eval);

  se->run(nEvents);
  se->End();
  delete se;
  gSystem->Exit(0);
}

#endif  //MACRO_FUN4ALLG4SLOPECAL_C
*/

#ifndef MACRO_FUN4ALLG4SLOPECAL_C
#define MACRO_FUN4ALLG4SLOPECAL_C

#include <fun4all/Fun4AllDstInputManager.h>
#include <fun4all/Fun4AllInputManager.h>
#include <fun4all/Fun4AllServer.h>
#include <CaloCalibEmc_eta.h>  // Correct class header

// Load necessary shared libraries
R__LOAD_LIBRARY(libfun4all.so)

void Fun4All_G4_Pi0_Tbt(
    const int nEvents = 10,
    const std::string &inputClustersFileList = "/sphenix/user/plewis3323/practice/xaa", // Ensure correct path
    const std::string &outputFile = "test1")
{
  // Explicitly load the necessary libraries
  gSystem->Load("/gpfs/mnt/gpfs02/sphenix/user/plewis3323/install/lib/libg4dst.so");
  gSystem->Load("/gpfs/mnt/gpfs02/sphenix/user/plewis3323/install/lib/libcalibCaloEmc_eta.so.0.0.0"); // Ensure correct library

  // Create Fun4AllServer instance
  Fun4AllServer *se = Fun4AllServer::instance();
  se->Verbosity();  // Set to 1 if you want event printouts

  // Configure input manager
  Fun4AllInputManager *in = new Fun4AllDstInputManager("DSTClusters");
  in->AddListFile(inputClustersFileList);
  se->registerInputManager(in);

  // Define output filename
  std::string outputfile = outputFile + "_g4cemc_eval.root";

  // Create and register the calibration subsystem
  CaloCalibEmc_eta *eval = new CaloCalibEmc_eta("CEMC_CALIB_PI0", outputfile);  // Ensure correct class
  se->registerSubsystem(eval);

  // Run simulation
  se->run(nEvents);
  se->End();

  // Cleanup
  delete se;
  gSystem->Exit(0);
}

#endif  // MACRO_FUN4ALLG4SLOPECAL_C

