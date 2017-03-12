#ifndef THistoCommon_h
#define THistoCommon_h 
#include "THistoGraphBase.h"
template <typename T> 
class THistoCommon: public THistoGraphBase<T>
{
  public:
    THistoCommon(){};
    virtual ~THistoCommon(){};
    Bool_t 	Add(TF1 *h1,Double_t c1=1,Option_t* option="");
    Bool_t 	Add(const TH1 *h1, Double_t c1=1);
    Bool_t 	Add(const TH1 *h, const TH1 *h2, Double_t c1=1, Double_t c2=1);
    void 	AddBinContent(Int_t bin);
    void 	AddBinContent(Int_t bin, Double_t w);
    Double_t 	AndersonDarlingTest(const TH1 *h2, Option_t *option="") const;
    Double_t 	AndersonDarlingTest(const TH1 *h2, Double_t &advalue) const;
    void Detach();
};
template class THistoCommon<TH1C>;
template class THistoCommon<TH1S>;
template class THistoCommon<TH1I>;
template class THistoCommon<TH1F>;
template class THistoCommon<TH1D>;
template class THistoCommon<TH2C>;
template class THistoCommon<TH2S>;
template class THistoCommon<TH2I>;
template class THistoCommon<TH2F>;
template class THistoCommon<TH2D>;
template class THistoCommon<TH3C>;
template class THistoCommon<TH3S>;
template class THistoCommon<TH3I>;
template class THistoCommon<TH3F>;
template class THistoCommon<TH3D>; 
template class THistoCommon<TProfile>; 
template class THistoCommon<TProfile2D>; 
template class THistoCommon<TProfile3D>;
#endif
