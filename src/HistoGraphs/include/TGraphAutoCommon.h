#ifndef TGraphAutoCommon_h
#define TGraphAutoCommon_h
class TGraphAutoCommon
{
  public:
    TGraphAutoCommon();
    ~TGraphAutoCommon();
    int getNbrPoints();
    void incrementNbrPoints();
  protected:
    int nbrPoints;
};
#endif
