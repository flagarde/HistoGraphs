#ifndef GraphSpecialisers_h
#define GraphSpecialisers_h
#include "TGraphCommon.h" 

template <typename T> class is_TGraph { public :static const bool value =false;};
template <> class is_TGraph<TGraph>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraph<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph ()
    {
      this->p_histograph=new T();this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n)
{
      this->p_histograph=new T(n);this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n, const Int_t *x, const Int_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n, const Float_t *x, const Float_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n, const Double_t *x, const Double_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
    }
 	THistoGraph (const THistoGraph &gr)
{
      this->p_histograph=new T(gr);this->SetObjectStat(false);

    }
 	THistoGraph (const TVectorF &vx, const TVectorF &vy)
{
      this->p_histograph=new T(vx,vy);this->SetObjectStat(false);

    }
 	THistoGraph (const TVectorD &vx, const TVectorD &vy)
{
      this->p_histograph=new T(vx,vy);this->SetObjectStat(false);
    }
 	THistoGraph (const TH1 *h)
{
      this->p_histograph=new T(h);this->SetObjectStat(false);
    }
 	THistoGraph (const TF1 *f, Option_t *option="")
 {
      this->p_histograph=new T(f,option);this->SetObjectStat(false);

    }
 	THistoGraph (const char *filename, const char *format="%lg %lg", Option_t *option="")
{
      this->p_histograph=new T(filename,format,option);this->SetObjectStat(false);
    }

    THistoGraph (const char * name,const char * title)
{
      this->p_histograph=new T();this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
     	THistoGraph (const char * name,const char * title,Int_t n)
{
      this->p_histograph=new T(n);this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,Int_t n, const Int_t *x, const Int_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,Int_t n, const Float_t *x, const Float_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,Int_t n, const Double_t *x, const Double_t *y)
{
      this->p_histograph=new T(n,x,y);this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TGraph &gr)
{
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TVectorF &vx, const TVectorF &vy)
{
      this->p_histograph=new T(vx,vy);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TVectorD &vx, const TVectorD &vy)
{
      this->p_histograph=new T(vx,vy);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TH1 *h)
{
      this->p_histograph=new T(h);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TF1 *f, Option_t *option="")
 {
      this->p_histograph=new T(f,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const char *filename, const char *format="%lg %lg", Option_t *option="")
{
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }

};


template <typename T> class is_TGraphErrors { public :static const bool value =false;};
template <> class is_TGraphErrors<TGraphErrors>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphErrors<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph ()
 	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }
 
 	THistoGraph (Int_t n)
 	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
    }
 
 	THistoGraph (Int_t n, const Float_t *x, const Float_t *y, const Float_t *ex=0, const Float_t *ey=0)
 	{
      this->p_histograph=new T(n,x,y,ex,ey);
      this->SetObjectStat(false);
    }
 
 	THistoGraph (Int_t n, const Double_t *x, const Double_t *y, const Double_t *ex=0, const Double_t *ey=0)
 	{
      this->p_histograph=new T(n,x,y,ex,ey);
      this->SetObjectStat(false);
    }
 
 	THistoGraph (const TVectorF &vx, const TVectorF &vy, const TVectorF &vex, const TVectorF &vey)
 	{
      this->p_histograph=new T(vx,vy,vex,vey);
      this->SetObjectStat(false);
    }
 	THistoGraph (const TVectorD &vx, const TVectorD &vy, const TVectorD &vex, const TVectorD &vey)
  	{
      this->p_histograph=new T(vx,vy,vex,vey);
      this->SetObjectStat(false);
    }
 	THistoGraph (const TGraphErrors &gr)
 	{
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
    }
 	THistoGraph (const TH1 *h)
  	{
      this->p_histograph=new T(h);
      this->SetObjectStat(false);
    }
 	THistoGraph (const char *filename, const char *format="%lg %lg %lg %lg", Option_t *option="")
  	{
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
    }
     THistoGraph (const char * name,const char * title)
 	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph (const char * name,const char * title,Int_t n)
 	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph (const char * name,const char * title,Int_t n, const Float_t *x, const Float_t *y, const Float_t *ex=0, const Float_t *ey=0)
 	{
      this->p_histograph=new T(n,x,y,ex,ey);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph (const char * name,const char * title,Int_t n, const Double_t *x, const Double_t *y, const Double_t *ex=0, const Double_t *ey=0)
 	{
      this->p_histograph=new T(n,x,y,ex,ey);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph (const char * name,const char * title,const TVectorF &vx, const TVectorF &vy, const TVectorF &vex, const TVectorF &vey)
 	{
      this->p_histograph=new T(vx,vy,vex,vey);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TVectorD &vx, const TVectorD &vy, const TVectorD &vex, const TVectorD &vey)
  	{
      this->p_histograph=new T(vx,vy,vex,vey);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TGraphErrors &gr)
 	{
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const TH1 *h)
  	{
      this->p_histograph=new T(h);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph (const char * name,const char * title,const char *filename, const char *format="%lg %lg %lg %lg", Option_t *option="")
  	{
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
    virtual void 	SetPointError (Double_t ex, Double_t ey)
    {
        this->p_histograph->SetPointError(ex,ey);
    }
    
virtual void 	SetPointError (Int_t i, Double_t ex, Double_t ey)
{
     this->p_histograph->SetPointError(i,ex,ey);
}

};



template <typename T> class is_TGraphAsymmErrors { public :static const bool value =false;};
template <> class is_TGraphAsymmErrors<TGraphAsymmErrors>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphAsymmErrors<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph ()
  	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n)
  	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
    }
 
 	THistoGraph (Int_t n, const Float_t *x, const Float_t *y, const Float_t *exl=0, const Float_t *exh=0, const Float_t *eyl=0, const Float_t *eyh=0)
  	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh);
      this->SetObjectStat(false);
    }
 	THistoGraph (Int_t n, const Double_t *x, const Double_t *y, const Double_t *exl=0, const Double_t *exh=0, const Double_t *eyl=0, const Double_t *eyh=0)
    {
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TVectorF &vx, const TVectorF &vy, const TVectorF &vexl, const TVectorF &vexh, const TVectorF &veyl, const TVectorF &veyh)
  	{
      this->p_histograph=new T(vx,vy,vexl,vexh,veyl,veyh);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TVectorD &vx, const TVectorD &vy, const TVectorD &vexl, const TVectorD &vexh, const TVectorD &veyl, const TVectorD &veyh)
   	{
      this->p_histograph=new T(vx,vy,vexl,vexh,veyl,veyh);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TGraphAsymmErrors &gr)
    {
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TH1 *h)
    {
      this->p_histograph=new T(h);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TH1 *pass, const TH1 *total, Option_t *option="")
    {
      this->p_histograph=new T(pass,total,option);
      this->SetObjectStat(false);
    }
 	THistoGraph(const char *filename, const char *format="%lg %lg %lg %lg %lg %lg", Option_t *option="")
    {
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
    }
    
    
    
    
    
    
    THistoGraph(const char * name,const char * title)
  	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,Int_t n)
  	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,Int_t n, const Float_t *x, const Float_t *y, const Float_t *exl=0, const Float_t *exh=0, const Float_t *eyl=0, const Float_t *eyh=0)
  	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, const Double_t *x, const Double_t *y, const Double_t *exl=0, const Double_t *exh=0, const Double_t *eyl=0, const Double_t *eyh=0)
    {
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,const TVectorF &vx, const TVectorF &vy, const TVectorF &vexl, const TVectorF &vexh, const TVectorF &veyl, const TVectorF &veyh)
  	{
      this->p_histograph=new T(vx,vy,vexl,vexh,veyl,veyh);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,const TVectorD &vx, const TVectorD &vy, const TVectorD &vexl, const TVectorD &vexh, const TVectorD &veyl, const TVectorD &veyh)
   	{
      this->p_histograph=new T(vx,vy,vexl,vexh,veyl,veyh);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,const TGraphAsymmErrors &gr)
 	  	{
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,const TH1 *h)
 	  	{
      this->p_histograph=new T(h);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,const TH1 *pass, const TH1 *total, Option_t *option="")
 	  	{
      this->p_histograph=new T(pass,total,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 
 	THistoGraph(const char * name,const char * title,const char *filename, const char *format="%lg %lg %lg %lg %lg %lg", Option_t *option="")
 	  	{
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
    virtual void 	Divide (const TH1 *pass, const TH1 *total, Option_t *opt="cp")
    {
        this->p_histograph->Divide(pass,total,opt);
    }
    virtual void 	BayesDivide (const TH1 *pass, const TH1 *total, Option_t *opt="")
    {
        this->p_histograph->BayesDivide(pass,total,opt);
    }
virtual void 	SetPointError (Double_t exl, Double_t exh, Double_t eyl, Double_t eyh)
{
        this->p_histograph->SetPointError (exl,exh,eyl,eyh);
    }
virtual void 	SetPointError (Int_t i, Double_t exl, Double_t exh, Double_t eyl, Double_t eyh)
{
        this->p_histograph->SetPointError (i,exl,exh,eyl,eyh);
    }
virtual void 	SetPointEXhigh (Int_t i, Double_t exh)
{
        this->p_histograph->SetPointEXhigh (i,exh);;
    }
virtual void 	SetPointEXlow (Int_t i, Double_t exl)
{
        this->p_histograph->SetPointEXlow(i,exl);
    }
virtual void 	SetPointEYhigh (Int_t i, Double_t eyh)
{
        this->p_histograph->SetPointEYhigh (i,eyh);
    }
virtual void 	SetPointEYlow (Int_t i, Double_t eyl)
{
        this->p_histograph->SetPointEYlow (i,eyl);
    }
    
};



template <typename T> class is_TGraphBentErrors { public :static const bool value =false;};
template <> class is_TGraphBentErrors<TGraphBentErrors>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphBentErrors<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n)
    {
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n, const Float_t *x, const Float_t *y, const Float_t *exl=0, const Float_t *exh=0, const Float_t *eyl=0, const Float_t *eyh=0, const Float_t *exld=0, const Float_t *exhd=0, const Float_t *eyld=0, const Float_t *eyhd=0)
 	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh,exld,exhd,eyld,eyhd);
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n, const Double_t *x, const Double_t *y, const Double_t *exl=0, const Double_t *exh=0, const Double_t *eyl=0, const Double_t *eyh=0, const Double_t *exld=0, const Double_t *exhd=0, const Double_t *eyld=0, const Double_t *eyhd=0)
 	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh,exld,exhd,eyld,eyhd);
      this->SetObjectStat(false);
    }
 	THistoGraph(const TGraphBentErrors &gr)
    {
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
    }
    
    THistoGraph(const char * name,const char * title)
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n)
    {
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, const Float_t *x, const Float_t *y, const Float_t *exl=0, const Float_t *exh=0, const Float_t *eyl=0, const Float_t *eyh=0, const Float_t *exld=0, const Float_t *exhd=0, const Float_t *eyld=0, const Float_t *eyhd=0)
 	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh,exld,exhd,eyld,eyhd);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, const Double_t *x, const Double_t *y, const Double_t *exl=0, const Double_t *exh=0, const Double_t *eyl=0, const Double_t *eyh=0, const Double_t *exld=0, const Double_t *exhd=0, const Double_t *eyld=0, const Double_t *eyhd=0)
 	{
      this->p_histograph=new T(n,x,y,exl,exh,eyl,eyh,exld,exhd,eyld,eyhd);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,const TGraphBentErrors &gr)
    {
      this->p_histograph=new T(gr);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    } 

};


template <typename T> class is_TGraphPolar{ public :static const bool value =false;};
template <> class is_TGraphPolar<TGraphPolar>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphPolar<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n, const Double_t *theta=0, const Double_t *r=0, const Double_t *etheta=0, const Double_t *er=0)
    {
      this->p_histograph=new T(n,theta,r,etheta,er);
      this->SetObjectStat(false);
    }
    THistoGraph(const char * name,const char * title)
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, const Double_t *theta=0, const Double_t *r=0, const Double_t *etheta=0, const Double_t *er=0)
    {
      this->p_histograph=new T(n,theta,r,etheta,er);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
};

template <typename T> class is_TGraphQQ { public :static const bool value =false;};
template <> class is_TGraphQQ<TGraphQQ>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraphQQ<T>::value,T>::type>:public TGraphCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n, Double_t *x)
 	{
      this->p_histograph=new T(n,x);
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t n, Double_t *x, TF1 *f)
    {
      this->p_histograph=new T(n,x,f);
      this->SetObjectStat(false);
    }
 	THistoGraph(Int_t nx, Double_t *x, Int_t ny, Double_t *y)
    {
      this->p_histograph=new T(nx,x,ny,y);
      this->SetObjectStat(false);
    }
     THistoGraph(const char * name,const char * title)
    {
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, Double_t *x)
 	{
      this->p_histograph=new T(n,x);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t n, Double_t *x, TF1 *f)
    {
      this->p_histograph=new T(n,x,f);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }
 	THistoGraph(const char * name,const char * title,Int_t nx, Double_t *x, Int_t ny, Double_t *y)
    {
      this->p_histograph=new T(nx,x,ny,y);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
};

template <typename T> class is_TGraph2D { public :static const bool value =false;};
template <> class is_TGraph2D<TGraph2D>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraph2D<T>::value,T>::type>:public TGraphCommon2D<T>
{
  public:
    THistoGraph()
 	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(Int_t n)
 	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(Int_t n, Int_t *x, Int_t *y, Int_t *z)
 	{
      this->p_histograph=new T(n,x,y,z);
      this->SetObjectStat(false);
    }  
 	THistoGraph(Int_t n, Float_t *x, Float_t *y, Float_t *z)
 	{
      this->p_histograph=new T(n,x,y,z);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(Int_t n, Double_t *x, Double_t *y, Double_t *z)
 	{
      this->p_histograph=new T(n,x,y,z);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(TH2 *h2)
 		{
      this->p_histograph=new T(h2);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(const char *name, const char *title, Int_t n, Double_t *x, Double_t *y, Double_t *z)
    {
      this->p_histograph=new T(name,title,n,x,y,z);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(const char *filename, const char *format="%lg %lg %lg", Option_t *option="")
    {
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(const TGraph2D & a)
    	{
      this->p_histograph=new T(a);
      this->SetObjectStat(false);
    }  
    

    
    THistoGraph(const char * name,const char * title)
 	{
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,Int_t n)
 	{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,Int_t n, Int_t *x, Int_t *y, Int_t *z)
 	{
      this->p_histograph=new T(n,x,y,z);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 	THistoGraph(const char * name,const char * title,Int_t n, Float_t *x, Float_t *y, Float_t *z)
 	{
      this->p_histograph=new T(n,x,y,z);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,TH2 *h2)
 		{
      this->p_histograph=new T(h2);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 
 	THistoGraph(const char * name,const char * title,const char *filename, const char *format="%lg %lg %lg", Option_t *option="")
    {
      this->p_histograph=new T(filename,format,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,const TGraph2D & a)
    	{
      this->p_histograph=new T(a);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
};

template <typename T> class is_TGraph2DErrors { public :static const bool value =false;};
template <> class is_TGraph2DErrors<TGraph2DErrors>{ public :static const bool value =true ;};
template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TGraph2DErrors<T>::value,T>::type>:public TGraphCommon2D<T>
{
  public:
    THistoGraph()
 {
      this->p_histograph=new T();
      this->SetObjectStat(false);
    }  
 	THistoGraph(Int_t n)
{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(Int_t n, Double_t *x, Double_t *y, Double_t *z, Double_t *ex=0, Double_t *ey=0, Double_t *ez=0, Option_t *option="")
{
      this->p_histograph=new T(n,x,y,z,ex,ey,ez,option);
      this->SetObjectStat(false);
    }  
 
 	THistoGraph(const TGraph2DErrors & a)
{
      this->p_histograph=new T(a);
      this->SetObjectStat(false);
    }  
    
    
       THistoGraph(const char * name,const char * title)
 {
      this->p_histograph=new T();
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 	THistoGraph(const char * name,const char * title,Int_t n)
{
      this->p_histograph=new T(n);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,Int_t n, Double_t *x, Double_t *y, Double_t *z, Double_t *ex=0, Double_t *ey=0, Double_t *ez=0, Option_t *option="")
{
      this->p_histograph=new T(n,x,y,z,ex,ey,ez,option);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
 
 	THistoGraph(const char * name,const char * title,const TGraph2DErrors & a)
{
      this->p_histograph=new T(a);
      this->SetObjectStat(false);
      this->p_histograph->SetName(name);
      this->p_histograph->SetTitle(title);
    }  
    
    
    
    
    
};
#endif
