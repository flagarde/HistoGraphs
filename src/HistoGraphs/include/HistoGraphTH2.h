#ifndef HistoGraphTH2_h
#define HistoGraphTH2_h
#include "THistoGraph.h"
template <typename T>
class is_TH2
{
  public :static const bool value =false;
};
template <> class is_TH2<TH2C>{ public :static const bool value =true ;};
template <> class is_TH2<TH2S>{ public :static const bool value =true ;};
template <> class is_TH2<TH2I>{ public :static const bool value =true ;};
template <> class is_TH2<TH2F>{ public :static const bool value =true ;};
template <> class is_TH2<TH2D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TH2<T>::value,T>::type>:public THistoGraphBase<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax);
      this->Detach();
    }
    void Fill( Double_t  x,  Double_t  w)
    {
      this->p_histograph->Fill(x,w);
    }
    void Fill( Double_t  x,  Double_t  y,  Double_t  w)
    {
      this->p_histograph->Fill(x,y,w);
    }
};
#endif  
