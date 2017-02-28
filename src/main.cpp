#include <vector>
#include "TFile.h"
#include "THistoGraph.h"
#include <map>
using namespace std;

int main(int argc, char *argv[])
{ 
  TFile a("r.root","CREATE");
  std::map<int,Base*> n;
  n[1]= new THistoGraph<TH1C>("test","test",3,0,3);
  n[2]= new THistoGraph<TH2F>("test2","test",3,0,3,5,0,5);
  n[3]= new THistoGraph<TH3I>("test2","test",3,0,3,5,0,5,6,0,6);
  n[1]->Fill(1,2.0);
  n[2]->Fill(1.0,2.0,3.0);
  n[3]->Fill(1.0,2.0,3.0);
  n[1]->Write();
  n[2]->Write();
  n[3]->Write();
  for(std::map<int,Base*>::iterator it=n.begin();it!=n.end();++it) delete it->second;
  return 0;
}

