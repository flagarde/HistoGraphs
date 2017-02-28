#ifndef THistoGraph_h
#define THistoGraph_h
#include "THistoGraphBase.h"
template <typename T, typename K>
class THistoGraph: public THistoGraphBase<T>
{
  public:
   THistoGraph();
   virtual ~THistoGraph();
}; 
#endif 
