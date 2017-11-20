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
template class TGraphCommon<TGraph2D>;
template class TGraphCommon<TGraphErrors>;
template class TGraphCommon<TGraph2DErrors>;
template class TGraphCommon<TGraphAsymmErrors>;
template class TGraphCommon<TGraphBentErrors>;
template class TGraphCommon<TGraphPolar>;
template class TGraphCommon<TGraphQQ>;
#endif 
