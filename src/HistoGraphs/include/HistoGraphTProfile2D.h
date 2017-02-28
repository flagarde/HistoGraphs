#ifndef HistoGraphProfile2D_h
#define HistoGraphProfile2D_h
#include "THistoCommon.h"
template <typename T>
class is_TProfile2D
{
  public :static const bool value =false;
};
template <> class is_TProfile2D<TProfile2D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile2D<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax);
      this->Detach();
    }
    void Fill( Double_t  x,  Double_t  y, Double_t  z)
    {
      this->p_histograph->Fill(x,y,z);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  z,Double_t  w)
    {
      this->p_histograph->Fill(x,y,z,w);
    }
};
#endif  
