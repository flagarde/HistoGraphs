#ifndef THistoGraphBase_h
#define THistoGraphBase_h
#include "HistoGraphBase.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TProfile3D.h"
#include "TGraph.h"
#include "TGraphAuto.h"
template <typename T>
class THistoGraphBase : public HistoGraphBase
{
  public:
   THistoGraphBase();
   virtual ~THistoGraphBase();
   void Draw();
   void Write();
  protected:
    T* p_histograph;
}; 
template< typename T, typename debil=T>class THistoGraph;
#endif 
