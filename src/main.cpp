#include <vector>
#include "TFile.h"
#include <map>
#include "TObjectTable.h"
#include "Handler.h"
#include "TF2.h"
using namespace std;

int main(int argc, char *argv[])
{ 
 /* Handler k;
  //k.setNbrItemInSection(25,300,5000000.);
  k.setName(1,"Toto");
  k.setName(2,"Titi");
  k.add(new THistoGraph<TH1C>("TH1C","TH1C",100,0,100));
  k.ListHierarchy();*/
  TFile a("r.root","CREATE");
  std::map<int,HistoGraphBase*> n;
  n[1]= new THistoGraph<TH1C>("TH1C","TH1C",100,0,100);
  n[2]= new THistoGraph<TH2C>("TH2S","TH2S",100,0,100,100,0,100);
  n[3]= new THistoGraph<TH1I>("Titi","Toto",100,0,100);
  //n[3]->Warning("rrrr","kkkk","lllll");
  n[3]->Fill(1.0);
  TF1 *mygaus = new TF1("mygaus","TMath::Gaus(x,3,.5)",0,6);
  n[3]->FillRandom("mygaus",10000);
  n[3]->GetBinError(0);
  n[3]->SetLineColor(kRed);
  n[3]->SetFillColor(kRed);
  n[3]->SetMarkerStyle(kCircle);
  TF2 *mygaus2 = new TF2("mygaus2","TMath::Gaus(x,3,.5)*TMath::Gaus(y,3,.5)",0,6,0,6);
  n[2]->FillRandom("mygaus2",10000);
  n[2]->GetBinError(0);
  n[2]->SetLineColor(kRed);
  n[2]->SetFillColor(kRed);
  n[2]->SetMarkerStyle(kCircle);
  //std::cout<<n[3]->GetTitle()<<" "<<n[3]->GetName();
  /*n[4]= new THistoGraph<TH1F>("TH1F","TH1F",100,0,100);
  n[5]= new THistoGraph<TH1D>("TH1D","TH1D",100,0,100);
  n[6]= new THistoGraph<TH2C>("TH2C","TH2C",100,0,100,100,0,100);
  n[7]= new THistoGraph<TH2S>("TH2S","TH2S",100,0,100,100,0,100);
  n[8]= new THistoGraph<TH2I>("TH2I","TH2I",100,0,100,100,0,100);
  n[9]= new THistoGraph<TH2F>("TH2F","TH2F",100,0,100,100,0,100);
  n[10]= new THistoGraph<TH2D>("TH2D","TH2D",100,0,100,100,0,100);
  n[11]= new THistoGraph<TH3C>("TH3C","TH3C",100,0,100,100,0,100,100,0,100);
  n[12]= new THistoGraph<TH3S>("TH3S","TH3S",100,0,100,100,0,100,100,0,100);
  n[13]= new THistoGraph<TH3I>("TH3I","TH3I",100,0,100,100,0,100,100,0,100);
  n[14]= new THistoGraph<TH3F>("TH3F","TH3F",100,0,100,100,0,100,100,0,100);
  n[15]= new THistoGraph<TH3D>("TH3D","TH3D",100,0,100,100,0,100,100,0,100);
  n[16]= new THistoGraph<TProfile>("TProfile","TProfile",100,0,100);
  n[17]= new THistoGraph<TProfile2D>("TProfile2D","TProfile2D",100,0,100,100,0,100);
  n[18]= new THistoGraph<TProfile3D>("TProfile3D","TProfile3D",100,0,100,100,0,100,100,0,100);
  n[19]= new THistoGraph<TGraph>("TGraph","TGraph");
  n[20]= new THistoGraph<TGraphAuto>("TGraphAuto","TGraphAuto");
  n[1]->FillRandom("gaus", 10000);
  n[2]->FillRandom("gaus", 10000);
  n[3]->FillRandom("gaus", 10000);
  n[4]->FillRandom("gaus", 10000);
  n[5]->FillRandom("gaus", 10000);
  n[6]->FillRandom("x+y", 10000);
  n[7]->FillRandom("x+y", 10000);
  n[8]->FillRandom("x+y", 10000);
  n[9]->FillRandom("x+y", 10000);
  n[10]->FillRandom("x+y", 10000);
  n[11]->FillRandom("x+y+z*z", 10000);
  n[12]->FillRandom("x+y+z*z", 10000);
  n[13]->FillRandom("x+y+z*z", 10000);
  n[14]->FillRandom("x+y+z*z", 10000);
  n[15]->FillRandom("x+y+z*z", 10000);
  n[16]->FillRandom("gaus", 10000);
  n[17]->FillRandom("x+y", 10000);
  n[18]->FillRandom("x+y+z*z", 10000);*/
  for(std::map<int,HistoGraphBase*>::iterator it=n.begin();it!=n.end();++it)
  {
   it->second->Write();
   delete it->second;
  }
  return 0;
}

