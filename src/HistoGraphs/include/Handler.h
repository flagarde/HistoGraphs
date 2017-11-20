#ifndef HISTO_PLANE
#define HISTO_PLANE
#include "HistoGraphs.h"
#include "TFile.h"
#include <string>
#include <map>
#include <cstdarg> 
#include <iostream>
#include <vector>
#include <cmath>
class THandler
{
  public:
    THandler(){};
    ~THandler(){};
};


class Handler
{
  public:
    ~Handler()
    {
      outFile_->Close();
    };
    Handler()
    {
      std::string name="DEfault.root";
      setOutputFile(name);
      i=0;
      locked=false;
    };
    template <typename Arg, typename std::enable_if<std::numeric_limits<Arg>::is_integer>::type * = nullptr>
    void setNbrItemInSection(Arg f) 
    { 
      NbrNecessary.push_back(std::ceil(std::log10(f)));
      NbrItem.push_back({"",f}); 
    }
    template <typename Arg, typename... Ts/*, typename std::enable_if<std::is_integral<Arg>::value>::type * = nullptr*/>
    void setNbrItemInSection(Arg f, Ts... rest) 
    {
      setNbrItemInSection(f);
      setNbrItemInSection(rest...);
    }
    void ListHierarchy()
    {
      for(unsigned int i=0;i!=NbrItem.size();++i)
      {
        for(unsigned int j=0;j!=i;++j) std::cout<<"  ";
        std::cout<<i<<":->"<<NbrItem[i].first<<" Number Elements : "<<NbrItem[i].second<<"  "<<NbrNecessary[i]<<std::endl;
      }
      for(std::map<int,HistoGraphBase*>::iterator it=HG.begin();it!=HG.end();++it)
      {
        std::cout<<"ee"<<std::endl;
        outFile_->cd();
        it->second->Write();
        //it->second->Write();
        //delete it->second;
      }
    }
    void setName(int Item,const char* name)
    {
      if((unsigned int)Item>=NbrItem.size())
      {
        std::cout<<"Error!!! Trying to name "<<Item<<"th element but I have only "<<NbrItem.size()<<" elements"<<std::endl;
      }
      else NbrItem[Item].first=name;
    }
    void add(HistoGraphBase* hg)
    {
      i++;
      HG[i]=hg;
    }
    bool setOutputFile(std::string& outputFileName)
    {
      outFile_ = new TFile(outputFileName.c_str(),"UPDATE");
      if(!outFile_) return false;
      isOutFile_ = true;
      return true;
    }
  private:
    std::string _outputFileName;
    bool isOutFile_;
    TFile* outFile_;
    std::map<int,HistoGraphBase*> HG;
    int i;
    THandler hand;
    std::vector<std::pair<std::string,int>> NbrItem;
    std::vector<int> NbrNecessary;
    bool locked;
};
#endif
