#ifndef HistoGraphTH3_h
#define HistoGraphTH3_h
#include "THistoCommon.h"
template <typename T>
class is_TH3
{
  public :static const bool value =false;
};
template <> class is_TH3<TH3C>{ public :static const bool value =true ;};
template <> class is_TH3<TH3S>{ public :static const bool value =true ;};
template <> class is_TH3<TH3I>{ public :static const bool value =true ;};
template <> class is_TH3<TH3F>{ public :static const bool value =true ;};
template <> class is_TH3<TH3D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TH3<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax,int binz,  Double_t  zmin,  Double_t  zmax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax,binz,zmin,zmax);
      this->Detach();
    }
    void Fill( Double_t  x,  Double_t  y,  Double_t  z)
    {
      this->p_histograph->Fill(x,y,z);
    }
        void Fill( Double_t  x,  Double_t  y,  Double_t  z, Double_t  w)
    {
      this->p_histograph->Fill(x,y,z,w);
    }
};
#endif  
