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

    

virtual void 	Apply (TF1 *f){
       this->p_histograph->Apply(f);
   }
virtual void 	ComputeRange (Double_t &xmin, Double_t &ymin, Double_t &xmax, Double_t &ymax) const{
       this->p_histograph->ComputeRange (xmin,ymin,xmax,ymax);
   }
virtual void 	DrawGraph (Int_t n, const Int_t *x, const Int_t *y, Option_t *option=""){
       this->p_histograph->DrawGraph(n,x,y,option);
   }
virtual void 	DrawGraph (Int_t n, const Float_t *x, const Float_t *y, Option_t *option=""){
       this->p_histograph->DrawGraph(n,x,y,option);
   }
virtual void 	DrawGraph (Int_t n, const Double_t *x=0, const Double_t *y=0, Option_t *option=""){
       this->p_histograph->DrawGraph(n,x,y,option);
   }
virtual Double_t 	Eval (Double_t x, TSpline *spline=0, Option_t *option="") const{
      return   this->p_histograph->Eval(x,spline,option);
   }
virtual void 	Expand (Int_t newsize){
       this->p_histograph->Expand(newsize);
   }
virtual void 	Expand (Int_t newsize, Int_t step){
       this->p_histograph->Expand (newsize,step);
   }
virtual Double_t 	GetCorrelationFactor () const{
     return    this->p_histograph->GetCorrelationFactor ();
   }
virtual Double_t 	GetCovariance () const{
     return    this->p_histograph->GetCovariance ();
   }
virtual Bool_t 	GetEditable () const{
    return     this->p_histograph->GetEditable ();
   }
virtual Double_t 	GetErrorX (Int_t bin) const{
     return    this->p_histograph->GetErrorX (bin);
   }
virtual Double_t 	GetErrorXhigh (Int_t bin) const {
    return     this->p_histograph->GetErrorXhigh (bin);
   }
virtual Double_t 	GetErrorXlow (Int_t bin) const{
     return    this->p_histograph->GetErrorXlow (bin);
   }
virtual Double_t 	GetErrorY (Int_t bin) const{
     return    this->p_histograph->GetErrorY (bin);
   }
virtual Double_t 	GetErrorYhigh (Int_t bin) const{
     return    this->p_histograph->GetErrorYhigh (bin);
   }
virtual Double_t 	GetErrorYlow (Int_t bin) const{
      return   this->p_histograph->GetErrorYlow (bin);
   }
virtual Double_t * 	GetEX () const{
      return   this->p_histograph->GetEX ();
   }
virtual Double_t * 	GetEXhigh () const{
    return     this->p_histograph->GetEXhigh ();
   }
virtual Double_t * 	GetEXhighd () const{
     return   this->p_histograph->GetEXhighd () ;
   }
virtual Double_t * 	GetEXlow () const{
    return     this->p_histograph->GetEXlow ();
   }
virtual Double_t * 	GetEXlowd () const{
    return     this->p_histograph->GetEXlowd ();
   }
virtual Double_t * 	GetEY () const{
     return    this->p_histograph->GetEY ();
   }
virtual Double_t * 	GetEYhigh () const{
     return    this->p_histograph->GetEYhigh ();
   }
virtual Double_t * 	GetEYhighd () const{
     return    this->p_histograph->GetEYhighd ();
   }
virtual Double_t * 	GetEYlow () const{
      return   this->p_histograph->GetEYlow ();
   }
virtual Double_t * 	GetEYlowd () const{
      return   this->p_histograph->GetEYlowd ();
   }
virtual TH1F * 	GetHistogram () const{
      return   this->p_histograph->GetHistogram ();
   }
virtual Double_t 	GetMaximum () const{
       return  this->p_histograph->GetMaximum () ;
   }
virtual Int_t 	GetMaxSize () const{
     return    this->p_histograph->GetMaxSize ();
   }
virtual Double_t 	GetMinimum () const{
     return    this->p_histograph->GetMinimum ();
   }
virtual Int_t 	GetN () const{
      return   this->p_histograph->GetN ();
   }
virtual Int_t 	GetPoint (Int_t i, Double_t &x, Double_t &y) const{
    return     this->p_histograph->GetPoint (i,x,y);
   }
virtual Double_t * 	GetX () const{
      return   this->p_histograph->GetX ();
   }
virtual Double_t * 	GetY () const{
      return   this->p_histograph->GetY ();
   }
virtual void 	InitExpo (Double_t xmin=0, Double_t xmax=0){
       this->p_histograph->InitExpo(xmin,xmax);
   }
virtual void 	InitGaus (Double_t xmin=0, Double_t xmax=0){
       this->p_histograph->InitGaus (xmin,xmax);
   }
virtual void 	InitPolynom (Double_t xmin=0, Double_t xmax=0){
       this->p_histograph->InitPolynom (xmin,xmax);
   }
virtual Int_t 	InsertPoint (){
     return    this->p_histograph->InsertPoint ();
   }
virtual void 	InsertPointBefore (Int_t ipoint, Double_t x, Double_t y){
       this->p_histograph->InsertPointBefore (ipoint,x,y);
   }
virtual Double_t 	Integral (Int_t first=0, Int_t last=-1) const{
     return    this->p_histograph->Integral (first,last);
   }
virtual Bool_t 	IsEditable () const{
     return    this->p_histograph->IsEditable ();
   }
virtual Int_t 	IsInside (Double_t x, Double_t y) const{
     return    this->p_histograph->IsInside (x,y);
   }
virtual void 	LeastSquareFit (Int_t m, Double_t *a, Double_t xmin=0, Double_t xmax=0){
       this->p_histograph->LeastSquareFit (m,a,xmin,xmax);
   }
virtual void 	LeastSquareLinearFit (Int_t n, Double_t &a0, Double_t &a1, Int_t &ifail, Double_t xmin=0, Double_t xmax=0){
       this->p_histograph->LeastSquareLinearFit (n,a0,a1,ifail,xmin,xmax);
   }
virtual void 	PaintGraph (Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt){
       this->p_histograph->PaintGraph (npoints,x,y,chopt);
   }
virtual void 	PaintGrapHist (Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt){
       this->p_histograph->PaintGrapHist (npoints,x,y,chopt);
   }
virtual void 	PaintStats (TF1 *fit){
       this->p_histograph->PaintStats (fit);
   }
virtual Int_t 	RemovePoint (){
     return    this->p_histograph->RemovePoint ();
   }
virtual Int_t 	RemovePoint (Int_t ipoint){
      return   this->p_histograph->RemovePoint (ipoint);
   }
virtual void 	Set (Int_t n){
       this->p_histograph->Set (n);
   }
virtual void 	SetEditable (Bool_t editable=kTRUE){
       this->p_histograph->SetEditable (editable);
   }
virtual void 	SetHistogram (TH1F *h){
       this->p_histograph->SetHistogram (h);
   }
virtual void 	SetPoint (Int_t i, Double_t x, Double_t y){
       this->p_histograph->SetPoint (i,x,y);
   }
virtual void 	Sort (Bool_t(*greater)(const TGraph *, Int_t, Int_t)=&TGraph::CompareX, Bool_t ascending=kTRUE, Int_t low=0, Int_t high=-1111){
       this->p_histograph->Sort (greater,ascending,low,high);
   }
virtual void 	Zero (Int_t &k, Double_t AZ, Double_t BZ, Double_t E2, Double_t &X, Double_t &Y, Int_t maxiterations){
     this->p_histograph->Zero (k,AZ,BZ,E2,X,Y,maxiterations);
   }
virtual Bool_t 	CompareArg (const TGraph *gr, Int_t left, Int_t right){
     return    TGraph::CompareArg (gr,left,right);
   }
virtual Bool_t 	CompareRadius (const TGraph *gr, Int_t left, Int_t right){
     return    TGraph::CompareRadius(gr,left,right);
   }
virtual Bool_t 	CompareX (const TGraph *gr, Int_t left, Int_t right){
    return     TGraph::CompareX (gr,left,right);
   }
virtual Bool_t 	CompareY (const TGraph *gr, Int_t left, Int_t right){
     return  TGraph::CompareY (gr,left,right);
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
class THistoGraph<T, typename std::enable_if<is_TGraph2D<T>::value,T>::type>:public TGraphCommon<T>
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
class THistoGraph<T, typename std::enable_if<is_TGraph2DErrors<T>::value,T>::type>:public TGraphCommon<T>
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
