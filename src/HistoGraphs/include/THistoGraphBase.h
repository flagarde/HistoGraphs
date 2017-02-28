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
#include "TGraph2D.h"
#include "TGraphErrors.h"
#include "TGraph2DErrors.h"
#include "TGraphAsymmErrors.h"
#include "TGraphBentErrors.h"
#include "TGraphPolar.h"
#include "TGraphQQ.h"
#include "TGraphsAuto.h"

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
