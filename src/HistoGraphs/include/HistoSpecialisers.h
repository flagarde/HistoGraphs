#ifndef HistoSpecialisers_h
#define HistoSpecialisers_h
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
      this->SetObjectStat(false);
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
class THistoGraph<T, typename std::enable_if<is_TH2<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax);
      this->Detach();
      this->SetObjectStat(false);
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
      this->SetObjectStat(false);
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

template <typename T>
class is_TProfile
{
  public :static const bool value =false;
};
template <> class is_TProfile<TProfile>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin ,  Double_t x,  Double_t   y)
    {
      this->p_histograph=new T(name,title,bin,x,y);
      this->Detach();
      this->SetObjectStat(false);
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
      this->SetObjectStat(false);
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

template <typename T>
class is_TProfile3D
{
  public :static const bool value =false;
};
template <> class is_TProfile3D<TProfile3D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile3D<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax,int binz,  Double_t  zmin,  Double_t  zmax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax,binz,zmin,zmax);
      this->Detach();
      this->SetObjectStat(false);
    }
    void Fill( Double_t  x,  Double_t  y, Double_t  z,  Double_t  t)
    {
      this->p_histograph->Fill(x,y,z,t);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  z, Double_t  t, Double_t  w)
    {
      this->p_histograph->Fill(x,y,z,t,w);
    }
};
#endif  
