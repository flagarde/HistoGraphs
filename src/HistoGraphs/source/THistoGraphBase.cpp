#include "THistoGraphBase.h"
template <typename T> 
void THistoGraphBase<T>::Draw()
{
  if(p_histograph!=nullptr) p_histograph->Draw();
}

template <typename T> 
void THistoGraphBase<T>::Write()
{
  if(p_histograph!=nullptr) p_histograph->Write();
}

template <typename T> 
THistoGraphBase<T>::THistoGraphBase()
{
  p_histograph=nullptr;
}

template <typename T> 
void THistoGraphBase<T>::Detach()
{
  p_histograph->SetDirectory(nullptr);
}

template <typename T> 
void THistoGraphBase<T>::Scale(double d)
{
  p_histograph->Scale(d);
}

template <typename T> 
THistoGraphBase<T>::~THistoGraphBase()
{
  delete p_histograph;
}

template class THistoGraphBase<TH1C>;
template class THistoGraphBase<TH1S>;
template class THistoGraphBase<TH1I>;
template class THistoGraphBase<TH1F>;
template class THistoGraphBase<TH1D>;
template class THistoGraphBase<TH2C>;
template class THistoGraphBase<TH2S>;
template class THistoGraphBase<TH2I>;
template class THistoGraphBase<TH2F>;
template class THistoGraphBase<TH2D>;
template class THistoGraphBase<TH3C>;
template class THistoGraphBase<TH3S>;
template class THistoGraphBase<TH3I>;
template class THistoGraphBase<TH3F>;
template class THistoGraphBase<TH3D>; 
template class THistoGraphBase<TProfile>; 
template class THistoGraphBase<TProfile2D>; 
template class THistoGraphBase<TProfile3D>; 
