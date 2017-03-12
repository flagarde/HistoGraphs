#include "THistoCommon.h"

template <typename T>
void THistoCommon<T>::Detach()
{
  this->p_histograph->SetDirectory(nullptr);
}

template <typename T>
Bool_t THistoCommon<T>::Add(TF1 *h1,Double_t c1,Option_t* option)
{
  return this->p_histograph->Add(h1,c1,option);
} 

template <typename T>
Bool_t THistoCommon<T>::Add(const TH1 *h1, Double_t c1)
{
  return this->p_histograph->Add(h1,c1);
} 

template <typename T>
Bool_t THistoCommon<T>::Add(const TH1 *h, const TH1 *h2, Double_t c1, Double_t c2)
{
  return this->p_histograph->Add(h,h2,c1,c2);
} 

template <typename T>
void 	THistoCommon<T>::AddBinContent(Int_t bin)
{
  this->p_histograph->AddBinContent(bin);
} 

template <typename T>
void 	THistoCommon<T>::AddBinContent(Int_t bin, Double_t w)
{
  this->p_histograph->AddBinContent(bin,w);
} 

template <typename T>
Double_t 	THistoCommon<T>::AndersonDarlingTest(const TH1 *h2, Option_t *option) const
{
  return this->p_histograph->AndersonDarlingTest(h2,option);
} 

template <typename T>
Double_t 	THistoCommon<T>::AndersonDarlingTest(const TH1 *h2, Double_t &advalue) const
{
  return this->p_histograph->AndersonDarlingTest(h2,advalue);
} 
