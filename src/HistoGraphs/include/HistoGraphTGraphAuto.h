#ifndef HistoGraphTGraphAuto_h
#define HistoGraphTGraphAuto_h
#include "TGraphCommon.h"
template <typename T>
class is_TGraphAuto
{
  public :static const bool value =false;
};
template <> class is_TGraphAuto<TGraphAuto>{ public :static const bool value =true ;};

template<typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphAuto<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title)
    {
      this->p_histograph=new TGraphAuto();
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
    void Fill(double x,double y)
    {
      this->p_histograph->incrementNbrPoints();
      this->p_histograph->SetPoint(this->p_histograph->getNbrPoints(),x,y);
    }
};
#endif  
