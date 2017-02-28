#include "THistoCommon.h"
template <typename T>
void THistoCommon<T>::Detach()
{
  this->p_histograph->SetDirectory(nullptr);
}
template <typename T>
void THistoCommon<T>::Scale(double d)
{
  this->p_histograph->Scale(d);
} 
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
