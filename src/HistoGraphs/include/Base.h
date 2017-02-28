#ifndef Base_h
#define Base_h
class Base 
{
  public:
    virtual void Draw()=0;
    virtual void Write()=0;
    virtual void Scale(){};
    virtual void Fill(double x){};
    virtual void Fill(double x,double w){};
    virtual void Fill(double x,double y,double w){};
    virtual void Fill(double x,double y,double z,double w){};
    virtual ~Base();
};
#endif
