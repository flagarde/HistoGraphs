#include "TGraphAutoCommon.h" 
TGraphAutoCommon::TGraphAutoCommon()
{
  nbrPoints=-1;
}

TGraphAutoCommon::~TGraphAutoCommon(){}

int TGraphAutoCommon::getNbrPoints()
{
  return nbrPoints;
}

void TGraphAutoCommon::incrementNbrPoints()
{
  ++nbrPoints;
}
