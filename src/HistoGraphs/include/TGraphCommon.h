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
#endif 
