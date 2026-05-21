// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef CALOCALIBEMC_ETA_H
#define CALOCALIBEMC_ETA_H

#include <fun4all/SubsysReco.h>

#include <string>

class PHCompositeNode;
class TFile;
class TH1F;
class TH2F;
class TH3F;
class TF1;
class TH1;
class TNtuple;
class TTree;
class TString;
class TCanvas;

class CaloCalibEmc_eta : public SubsysReco
{
 public:
  CaloCalibEmc_eta(const std::string &name = "CaloCalibEmc_eta",\
	 const std::string &fnm = "outJF");

  virtual ~CaloCalibEmc_eta() {}

  int InitRun(PHCompositeNode *topNode) override;

  int process_event(PHCompositeNode *topNode) override;

  int End(PHCompositeNode *topNode) override;

	void Loop(int nevts, TString _filename, TTree * intree);

	void Loop_background_event_mixing(int nevts, TString _filename, TTree * intree);

  void Fit_Histos(const char * infilent = "");

  //void set_centrality_nclusters_cut(int n){m_cent_nclus_cut=n;}
  
  void Get_Histos(const char * infile, const char * outfile);

 private:
  int m_ievent = 0;
  std::string m_Filename;
  TFile *cal_output = nullptr;
  std::string _caloname = "CEMC";

  bool m_UseTowerInfo; // decide whether to use "TowerInfo" (expt_data) or "RawTower" (sim_data)

  //int m_cent_nclus_cut = 0;

  // histos lists
  //TH1 *cemc_hist_eta_phi[144][48];
  //TH2F *fitp1_eta_phi2d = nullptr;
  TH1F *pairInvMassTotal = nullptr;
	TH1F *pairInvMassTotal_bkgd = nullptr;
	//TH1F *fitmean_1dhist = nullptr;
	//TH2F *chi2Ndf_2dhist = nullptr;
	//TH1F *chi2Ndf_1dhist = nullptr;

  TTree *_eventTree = nullptr; // initializing Ttree to store data
  // TTree variables
  int _eventNumber = -1;
  int _nClusters = -1;
	int _nCentrality = -1;
  float _clusterIDs[10000] = {0};
  float _clusterEnergies[10000] = {0};
  float _clusterPts[10000] = {0};
  float _clusterEtas[10000] = {0};
  float _clusterPhis[10000] = {0};
	float _clusterChi2[10000] = {0};

  int maxTowerEta = -1;
  int maxTowerPhi = -1;

  int _maxTowerEtas[10000] = {0};
  int _maxTowerPhis[10000] = {0};

  float alphaCut = -1.;
	int m_cent_nclus_cut;
  
  TFile * f_temp;
};

#endif  //   CALOCALIBEMC_ETA_H
