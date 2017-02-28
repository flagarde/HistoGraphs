#ifndef HistoGraphBase_h
#define HistoGraphBase_h
class HistoGraphBase
{
  public:
    virtual void Draw()=0;
    virtual void Write()=0;
    virtual void Scale(){};
    virtual void SetPoint(int i,double x,double y){}
    virtual void Fill(double x){};
    virtual void Fill(double x,double w){};
    virtual void Fill(double x,double y,double w){};
    virtual void Fill(double x,double y,double z,double w){};
    virtual void Fill(double x,double y,double z,double t,double w){};
    virtual ~HistoGraphBase();
};
#endif
