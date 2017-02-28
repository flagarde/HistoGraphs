#ifndef HistoGraphTH1_h
#define HistoGraphTH1_h
#include "THistoCommon.h"
template <typename T>
class is_TH1
{
  public :static const bool value =false;
};
template <> class is_TH1<TH1C>{ public :static const bool value =true ;};
template <> class is_TH1<TH1S>{ public :static const bool value =true ;};
template <> class is_TH1<TH1I>{ public :static const bool value =true ;};
template <> class is_TH1<TH1F>{ public :static const bool value =true ;};
template <> class is_TH1<TH1D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TH1<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin ,  Double_t x,  Double_t   y)
    {
      this->p_histograph=new T(name,title,bin,x,y);
      this->Detach();
    }
    void Fill( Double_t  x,  Double_t  w)
    {
      this->p_histograph->Fill(x,w);
    }
    void Fill( Double_t  x)
    {
      this->p_histograph->Fill(x);
    }
};
#endif  
