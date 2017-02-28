#ifndef TGraphCommon_h
#define TGraphCommon_h 
#include "THistoGraphBase.h"

template <typename T> 
class TGraphCommon: public THistoGraphBase<T>
{
  public:
    TGraphCommon(){};
    virtual ~TGraphCommon(){};
};
template class TGraphCommon<TGraph>;
template class TGraphCommon<TGraphAuto>;
template class TGraphCommon<TGraph2D>;
template class TGraphCommon<TGraph2DAuto>;
template class TGraphCommon<TGraphErrors>;
template class TGraphCommon<TGraphErrorsAuto>;
template class TGraphCommon<TGraph2DErrors>;
template class TGraphCommon<TGraph2DErrorsAuto>;
template class TGraphCommon<TGraphAsymmErrors>;
template class TGraphCommon<TGraphAsymmErrorsAuto>;
template class TGraphCommon<TGraphBentErrors>;
template class TGraphCommon<TGraphBentErrorsAuto>;
template class TGraphCommon<TGraphPolar>;
template class TGraphCommon<TGraphPolarAuto>;
template class TGraphCommon<TGraphQQ>;
template class TGraphCommon<TGraphQQAuto>;
#endif 
