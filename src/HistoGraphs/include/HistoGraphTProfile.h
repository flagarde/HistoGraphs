#ifndef HistoGraphProfile_h
#define HistoGraphProfile_h
#include "THistoGraph.h"
template <typename T>
class is_TProfile
{
  public :static const bool value =false;
};
template <> class is_TProfile<TProfile>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile<T>::value,T>::type>:public THistoGraphBase<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin ,  Double_t x,  Double_t   y)
    {
      this->p_histograph=new T(name,title,bin,x,y);
      this->Detach();
    }
    void Fill( Double_t  x,  Double_t  y)
    {
      this->p_histograph->Fill(x,y);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  w)
    {
      this->p_histograph->Fill(x,y,w);
    }
};
#endif  
