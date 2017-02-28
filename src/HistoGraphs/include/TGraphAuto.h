#ifndef TGraphAuto_h
#define TGraphAuto_h
class TGraphAuto:public TGraph
{
  public:
  TGraphAuto():TGraph()
  {
    nbrPoints=-1;
  }
  int getNbrPoints(){return nbrPoints;};
  void incrementNbrPoints(){++nbrPoints;};
  protected:
    int nbrPoints;
};
#endif
