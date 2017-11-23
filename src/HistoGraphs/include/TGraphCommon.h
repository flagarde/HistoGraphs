#ifndef TGraphCommon_h
#define TGraphCommon_h 
#include "THistoGraphBase.h"

template <typename T> 
class TGraphCommon: public THistoGraphBase<T>
{
  public:
    TGraphCommon(){};
    virtual ~TGraphCommon(){};
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
   ///////FIXME
   /*
virtual void 	InsertPointBefore (Int_t ipoint, Double_t x, Double_t y){
       this->p_histograph->InsertPointBefore (ipoint,x,y);
   }*/
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


virtual Long64_t 	Merge (TCollection *list)
{
    return this->p_histograph->Merge(list);
}
virtual void 	Print (Option_t *chopt="") const
{
    this->p_histograph->Print(chopt);
    
}
virtual void 	SavePrimitive (std::ostream &out, Option_t *option="")
{
    this->p_histograph->SavePrimitive (out,option);
}
    
virtual void	DrawPanel()
{
  this->p_histograph->DrawPanel();
} 

virtual TFitResultPtr	Fit(const char* formula, Option_t* option, Option_t* goption, Double_t xmin, Double_t xmax)
{
  return this->p_histograph->Fit(formula,option,goption,xmin,xmax);
} 
    
 
virtual TFitResultPtr	Fit(TF1* f1, Option_t* option, Option_t* goption, Double_t xmin, Double_t xmax)
{
  return this->p_histograph->Fit(f1,option,goption,xmin,xmax);
}    

virtual Double_t	Chisquare(TF1* f1, Option_t* option) const
{
  return this->p_histograph->Chisquare(f1,option);
} 


virtual TF1*	GetFunction(const char* name) const
{
  return this->p_histograph->GetFunction(name);
} 
virtual Double_t	GetMean()
{
  return this->p_histograph->GetMean();
} 
virtual Double_t	GetRMS()
{
  return this->p_histograph->GetMean();
} 

};

template <typename T> 
class TGraphCommon2D: public THistoGraphBase<T>
{
  public:
    TGraphCommon2D(){};
    virtual ~TGraphCommon2D(){};
};
template class TGraphCommon<TGraph>;
template class TGraphCommon2D<TGraph2D>;
template class TGraphCommon<TGraphErrors>;
template class TGraphCommon2D<TGraph2DErrors>;
template class TGraphCommon<TGraphAsymmErrors>;
template class TGraphCommon<TGraphBentErrors>;
template class TGraphCommon<TGraphPolar>;
template class TGraphCommon<TGraphQQ>;
#endif 
