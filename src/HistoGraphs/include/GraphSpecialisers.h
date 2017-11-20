#ifndef GraphSpecialisers_h
#define GraphSpecialisers_h
#include "TGraphCommon.h" 

template <typename T>
class is_TGraph
{
  public :static const bool value =false;
};
template <> class is_TGraph<TGraph>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraph<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title)
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
    void SetPoint(int i,double x,double y)
    {
      this->p_histograph->SetPoint(i,x,y);
    }
};
#endif
