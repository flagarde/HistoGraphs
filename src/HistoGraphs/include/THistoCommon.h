#ifndef THistoCommon_h
#define THistoCommon_h 
#include "THistoGraphBase.h"
template <typename T> 
class THistoCommon: public THistoGraphBase<T>
{
  public:
    THistoCommon(){};
    virtual ~THistoCommon(){};
    void Detach();
    void Scale(double);
};
#endif
