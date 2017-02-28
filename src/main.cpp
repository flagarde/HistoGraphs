#include <vector>
#include "TFile.h"
#include "HistoGraphs.h"
#include <map>
using namespace std;

int main(int argc, char *argv[])
{ 
  TFile a("r.root","CREATE");
  std::map<int,HistoGraphBase*> n;
  n[1]= new THistoGraph<TH1C>("test","test",3,0,3);
  n[2]= new THistoGraph<TH2F>("test2","test",3,0,3,5,0,5);
  n[3]= new THistoGraph<TH3I>("test2","test",3,0,3,5,0,5,6,0,6);
  n[4]= new THistoGraph<TProfile>("test2","test",3,0,3);
  n[5]= new THistoGraph<TProfile2D>("test2","test",3,0,3,5,0,5);
  n[6]= new THistoGraph<TProfile3D>("test2","test",3,0,3,5,0,5,6,0,6);
  n[1]->Fill(1,2.0);
  n[2]->Fill(1.0,2.0,3.0);
  n[3]->Fill(1.0,2.0,3.0);
  n[4]->Fill(1,2.0,3.0);
  n[5]->Fill(1.0,2.0,3.0,4.5);
  n[6]->Fill(1.0,2.0,3.0,6.5);
  for(std::map<int,HistoGraphBase*>::iterator it=n.begin();it!=n.end();++it)
  {
   it->second->Write();
   delete it->second;
  }
  return 0;
}

