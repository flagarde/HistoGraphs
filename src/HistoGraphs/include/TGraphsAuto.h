#ifndef TGraphsAuto_h
#define TGraphsAuto_h 
#include "TGraphAutoCommon.h"
class TGraphAuto: public TGraph, public TGraphAutoCommon
{
  public:
  TGraphAuto():TGraph(),TGraphAutoCommon(){};
  ~TGraphAuto(){};
};

class TGraph2DAuto: public TGraph2D, public TGraphAutoCommon
{
  public:
  TGraph2DAuto():TGraph2D(),TGraphAutoCommon(){};
  ~TGraph2DAuto(){};
};

class TGraphErrorsAuto: public TGraphErrors, public TGraphAutoCommon
{
  public:
  TGraphErrorsAuto():TGraphErrors(),TGraphAutoCommon(){};
  ~TGraphErrorsAuto(){};
};

class TGraph2DErrorsAuto: public TGraph2DErrors, public TGraphAutoCommon
{
  public:
  TGraph2DErrorsAuto():TGraph2DErrors(),TGraphAutoCommon(){};
  ~TGraph2DErrorsAuto(){};
};

class TGraphAsymmErrorsAuto: public TGraphAsymmErrors, public TGraphAutoCommon
{
  public:
  TGraphAsymmErrorsAuto():TGraphAsymmErrors(),TGraphAutoCommon(){};
  ~TGraphAsymmErrorsAuto(){};
};

class TGraphBentErrorsAuto: public TGraphBentErrors, public TGraphAutoCommon
{
  public:
  TGraphBentErrorsAuto():TGraphBentErrors(),TGraphAutoCommon(){};
  ~TGraphBentErrorsAuto(){};
};

class TGraphPolarAuto: public TGraphPolar, public TGraphAutoCommon
{
  public:
  TGraphPolarAuto():TGraphPolar(),TGraphAutoCommon(){};
  ~TGraphPolarAuto(){};
};

class TGraphQQAuto: public TGraphQQ, public TGraphAutoCommon
{
  public:
  TGraphQQAuto():TGraphQQ(),TGraphAutoCommon(){};
  ~TGraphQQAuto(){};
};
#endif
