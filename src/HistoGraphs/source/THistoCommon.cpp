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

