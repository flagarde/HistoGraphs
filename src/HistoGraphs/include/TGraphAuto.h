#ifndef TGraphAuto_h
#define TGraphAuto_h
#include "TGraphAutoCommon.h" 
class TGraphAuto: public TGraph, public TGraphAutoCommon
{
  public:
  TGraphAuto():TGraph(),TGraphAutoCommon(){};
  ~TGraphAuto(){};
};
#endif
