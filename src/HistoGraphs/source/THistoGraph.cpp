#include "THistoGraph.h"
template <typename T> 
void THistoGraph_base<T>::Draw()
{
  if(p_histograph!=nullptr) p_histograph->Draw();
}

template <typename T> 
void THistoGraph_base<T>::Write()
{
  if(p_histograph!=nullptr) p_histograph->Write();
}

template <typename T> 
THistoGraph_base<T>::THistoGraph_base()
{
  p_histograph=nullptr;
}

template <typename T> 
void THistoGraph_base<T>::Detach()
{
  p_histograph->SetDirectory(nullptr);
}

template <typename T> 
void THistoGraph_base<T>::Scale(double d)
{
  p_histograph->Scale(d);
}

template <typename T> 
THistoGraph_base<T>::~THistoGraph_base()
{
  delete p_histograph;
}

template class THistoGraph_base<TH1C>;
template class THistoGraph_base<TH1S>;
template class THistoGraph_base<TH1I>;
template class THistoGraph_base<TH1F>;
template class THistoGraph_base<TH1D>;
template class THistoGraph_base<TH2C>;
template class THistoGraph_base<TH2S>;
template class THistoGraph_base<TH2I>;
template class THistoGraph_base<TH2F>;
template class THistoGraph_base<TH2D>;
template class THistoGraph_base<TH3C>;
template class THistoGraph_base<TH3S>;
template class THistoGraph_base<TH3I>;
template class THistoGraph_base<TH3F>;
template class THistoGraph_base<TH3D>;
