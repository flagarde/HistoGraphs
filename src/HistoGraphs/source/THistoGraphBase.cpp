#include "THistoGraphBase.h"
#include "TError.h"
#include <typeinfo>
#include "TypesDemangler.h"
template <typename T> 
void THistoGraphBase<T>::Draw(Option_t* option)
{
  if(p_histograph!=nullptr) p_histograph->Draw(option);
}

//TNamed
template <typename T> 
THistoGraphBase<T>::THistoGraphBase()
{
  p_histograph=nullptr;
}

template <typename T> 
THistoGraphBase<T>::~THistoGraphBase()
{
  delete p_histograph;
}

template <typename T> 
void THistoGraphBase<T>::Clear(Option_t *option)
{
  p_histograph->Clear(option);
}

template <typename T> 
Int_t THistoGraphBase<T>::Compare(const TObject *obj) const
{
  return p_histograph->Compare(obj);
}

template <typename T> 
void THistoGraphBase<T>::FillBuffer(char *&buffer)
{
  p_histograph->FillBuffer(buffer);
}

template <typename T> 
const char *THistoGraphBase<T>::GetName() const
{
  return p_histograph->GetName();
}

template <typename T> 
const char *THistoGraphBase<T>::GetTitle() const
{
  return p_histograph->GetTitle();
}

template <typename T> 
ULong_t THistoGraphBase<T>::Hash() const
{
  return p_histograph->Hash();
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsSortable() const
{
  return p_histograph->IsSortable();
}

template <typename T> 
void 	THistoGraphBase<T>::ls(Option_t *option) const
{
  p_histograph->ls(option);
}

template <typename T> 
Int_t THistoGraphBase<T>::Sizeof()const
{
  return p_histograph->Sizeof();
}

//TObject
template <typename T> 
void THistoGraphBase<T>::AbstractMethod(const char *method) const
{
  p_histograph->AbstractMethod(method);
}

template <typename T> 
void THistoGraphBase<T>::AppendPad(Option_t *option)
{
  p_histograph->AppendPad(option);
}

template <typename T> 
const char * THistoGraphBase<T>::ClassName() const
{
  return p_histograph->ClassName();
}

template <typename T> 
void THistoGraphBase<T>::Delete(Option_t *option)
{
  p_histograph->Delete(option);
}

template <typename T> 
void THistoGraphBase<T>::DrawClass() const
{
  p_histograph->DrawClass();
}

template <typename T> 
TObject * THistoGraphBase<T>::DrawClone(Option_t *option) const
{
  return p_histograph->DrawClone(option);
}

template <typename T> 
void THistoGraphBase<T>::Dump() const
{
  p_histograph->Dump();
}

template <typename T> 
void THistoGraphBase<T>::Error(const char *method, const char *msgfmt,...) const
{
  va_list ap;
  va_start(ap,msgfmt);
  std::string classname = type(this);
  ::ErrorHandler(kError, Form("%s::%s", classname.c_str(), method),msgfmt,ap);
  va_end(ap);
  if (TROOT::Initialized()) gROOT->Message(1002,p_histograph);
}

template <typename T> 
void THistoGraphBase<T>::Execute(const char *method, const char *params, Int_t *error)
{
  p_histograph->Execute(method,params,error);
}

template <typename T> 
void THistoGraphBase<T>::Execute(TMethod *method, TObjArray *params, Int_t *error)
{
  p_histograph->Execute(method,params,error);
}

template <typename T> 
void THistoGraphBase<T>::Fatal(const char *method, const char *msgfmt,...) const
{
  va_list ap;
  va_start(ap,msgfmt);
  std::string classname = type(this);
  ::ErrorHandler(kFatal, Form("%s::%s",classname.c_str(), method),msgfmt,ap);
  va_end(ap);
  if (TROOT::Initialized()) gROOT->Message(1004,p_histograph);
}

template <typename T> 
Option_t * THistoGraphBase<T>::GetDrawOption() const
{
  return p_histograph->GetDrawOption();
}

template <typename T> 
const char * THistoGraphBase<T>::GetIconName() const
{
  return p_histograph->GetIconName();
}

template <typename T> 
UInt_t THistoGraphBase<T>::GetUniqueID() const
{
  return p_histograph->GetUniqueID();
}

template <typename T> 
Bool_t THistoGraphBase<T>::HandleTimer(TTimer *timer) 
{
  return p_histograph->HandleTimer(timer) ;
}

template <typename T> 
void THistoGraphBase<T>::Info(const char *method, const char *msgfmt,...) const
{
  va_list ap;
  va_start(ap,msgfmt);
  std::string classname = type(this);
  ::ErrorHandler(kInfo, Form("%s::%s",classname.c_str(), method),msgfmt,ap);
  va_end(ap);
}

template <typename T> 
Bool_t THistoGraphBase<T>::InheritsFrom(const char *classname) const
{
  return p_histograph->InheritsFrom(classname);
}

template <typename T> 
Bool_t THistoGraphBase<T>::InheritsFrom(const TClass *cl) const
{
  return p_histograph->InheritsFrom(cl);
}

template <typename T> 
void	THistoGraphBase<T>::Inspect() const
{
  p_histograph->Inspect();
}

template <typename T> 
void THistoGraphBase<T>::InvertBit(UInt_t f)
{
  p_histograph->InvertBit(f);
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsEqual(const TObject *obj) const
{
  return p_histograph->IsEqual(obj);
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsFolder() const
{
  return p_histograph->IsFolder();
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsOnHeap() const
{
  return p_histograph->IsOnHeap();
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsZombie() const
{
  return p_histograph->IsZombie();
}

template <typename T> 
void THistoGraphBase<T>::MayNotUse(const char *method) const
{
  p_histograph->MayNotUse(method);
}

template <typename T> 
Bool_t THistoGraphBase<T>::Notify()
{
  return p_histograph->Notify();
}

template <typename T> 
void THistoGraphBase<T>::Obsolete(const char *method, const char *asOfVers, const char *removedFromVers) const
{
  p_histograph->Obsolete(method,asOfVers,removedFromVers);
}

template <typename T> 
void THistoGraphBase<T>::Pop()
{
  p_histograph->Pop();
}

template <typename T> 
Int_t THistoGraphBase<T>::Read(const char *name)
{
  return p_histograph->Read(name);
}

template <typename T> 
void THistoGraphBase<T>::ResetBit(UInt_t f)
{
  p_histograph->ResetBit(f);
}

template <typename T> 
void THistoGraphBase<T>::SaveAs(const char *filename, Option_t *option) const
{
  p_histograph->SaveAs(filename,option);
}

template <typename T> 
void THistoGraphBase<T>::SetBit(UInt_t f, Bool_t set)
{
  p_histograph->SetBit(f,set);
}

template <typename T> 
void THistoGraphBase<T>::SetBit(UInt_t f)
{
  p_histograph->SetBit(f);
}

template <typename T> 
void THistoGraphBase<T>::SetDrawOption(Option_t *option)
{
  p_histograph->SetDrawOption(option);
}

template <typename T> 
void THistoGraphBase<T>::SetUniqueID(UInt_t uid)
{
  p_histograph->SetUniqueID(uid);
}

template <typename T> 
void THistoGraphBase<T>::SysError(const char *method, const char *msgfmt,...) const
{
  va_list ap;
  va_start(ap,msgfmt);
  std::string classname = type(this);
  ::ErrorHandler(kSysError,Form("%s::%s",classname.c_str(), method),msgfmt,ap);
  va_end(ap);
  if (TROOT::Initialized()) gROOT->Message(1003,p_histograph);
}

template <typename T> 
Bool_t THistoGraphBase<T>::TestBit(UInt_t f) const
{
  return p_histograph->TestBit(f);
}

template <typename T> 
Int_t THistoGraphBase<T>::TestBits(UInt_t f) const
{
  return p_histograph->TestBits(f);
}

template <typename T> 
void THistoGraphBase<T>::Warning(const char *method, const char *msgfmt,...) const
{
  va_list ap;
  va_start(ap,msgfmt);
  std::string classname = type(this);
  ::ErrorHandler(kWarning,Form("%s::%s",classname.c_str(), method),msgfmt,ap);
  va_end(ap);
  if (TROOT::Initialized()) gROOT->Message(1001,p_histograph);
}

template <typename T> 
Int_t THistoGraphBase<T>::Write(const char *name, Int_t option, Int_t bufsize)
{
  return p_histograph->Write(name,option,bufsize);
}

template <typename T> 
Int_t THistoGraphBase<T>::Write(const char *name, Int_t option, Int_t bufsize) const
{
  return p_histograph->Write(name,option,bufsize);
}
//TAttLine
template <typename T> 
Int_t THistoGraphBase<T>::DistancetoLine(Int_t px, Int_t py, Double_t xp1, Double_t yp1, Double_t xp2, Double_t yp2)
{
  return p_histograph->DistancetoLine(px,py,xp1,yp1,xp2,yp2);
}

template <typename T> 
Color_t THistoGraphBase<T>::GetLineColor() const
{
  return p_histograph->GetLineColor();
}

template <typename T> 
Style_t THistoGraphBase<T>::GetLineStyle() const 
{
  return p_histograph->GetLineStyle();
}

template <typename T> 
Width_t THistoGraphBase<T>::GetLineWidth() const 
{
  return p_histograph->GetLineWidth();
}

template <typename T> 
void THistoGraphBase<T>::ResetAttLine(Option_t *option)
{
  p_histograph->ResetAttLine(option);
}

template <typename T> 
void THistoGraphBase<T>::SaveLineAttributes(std::ostream &out, const char *name, Int_t coldef, Int_t stydef, Int_t widdef)
{
  p_histograph->SaveLineAttributes(out,name,coldef,stydef,widdef);
}

template <typename T> 
void THistoGraphBase<T>::SetLineAttributes()
{
  p_histograph->SetLineAttributes();
}

template <typename T> 
void THistoGraphBase<T>::SetLineColor(Color_t lcolor)
{
  p_histograph->SetLineColor(lcolor);
}

template <typename T> 
void THistoGraphBase<T>::SetLineColorAlpha (Color_t lcolor, Float_t lalpha)
{
  p_histograph->SetLineColorAlpha (lcolor,lalpha);
}

template <typename T> 
void THistoGraphBase<T>::SetLineStyle(Style_t lstyle)
{
  p_histograph->SetLineStyle(lstyle);
}

template <typename T> 
void THistoGraphBase<T>::SetLineWidth(Width_t lwidth)
{
  p_histograph->SetLineWidth(lwidth);
}

//TAttFill
template <typename T> 
Color_t THistoGraphBase<T>::GetFillColor() const
{
  return p_histograph->GetFillColor();
}

template <typename T> 
Style_t THistoGraphBase<T>::GetFillStyle() const
{
  return p_histograph->GetFillStyle();
}

template <typename T> 
Bool_t THistoGraphBase<T>::IsTransparent() const
{
  return p_histograph->IsTransparent();
}

template <typename T> 
void THistoGraphBase<T>::ResetAttFill(Option_t *option)
{
  p_histograph->ResetAttFill(option);
}

template <typename T> 
void THistoGraphBase<T>::SaveFillAttributes(std::ostream &out, const char *name, Int_t coldef, Int_t stydef)
{
  p_histograph->SaveFillAttributes(out,name,coldef,stydef);
}

template <typename T> 
void THistoGraphBase<T>::SetFillAttributes()
{
  p_histograph->SetFillAttributes();
}

template <typename T> 
void THistoGraphBase<T>::SetFillColor(Color_t fcolor)
{
  p_histograph->SetFillColor(fcolor);
}

template <typename T> 
void THistoGraphBase<T>::SetFillColorAlpha(Color_t fcolor, Float_t falpha)
{
  p_histograph->SetFillColorAlpha(fcolor,falpha);
}

template <typename T> 
void THistoGraphBase<T>::SetFillStyle(Style_t fstyle)
{
  p_histograph->SetFillStyle(fstyle);
}
//TAttMaker
template <typename T> 
Color_t THistoGraphBase<T>::GetMarkerColor() const
{
  return p_histograph->GetMarkerColor();
}

template <typename T> 
Size_t THistoGraphBase<T>::GetMarkerSize() const
{
  return p_histograph->GetMarkerSize();
}

template <typename T> 
Style_t THistoGraphBase<T>::GetMarkerStyle() const
{
  return p_histograph->GetMarkerStyle();
}   
   
template <typename T> 
void THistoGraphBase<T>::ResetAttMarker(Option_t *toption)
{
  p_histograph->ResetAttMarker(toption);
}   
   
template <typename T> 
void THistoGraphBase<T>::SaveMarkerAttributes(std::ostream &out, const char *name, Int_t coldef, Int_t stydef, Int_t sizdef)
{
  p_histograph->SaveMarkerAttributes(out,name,coldef,stydef,sizdef);
}   
   
template <typename T> 
void THistoGraphBase<T>::SetMarkerAttributes()
{
  p_histograph->SetMarkerAttributes();
}   
   
template <typename T> 
void THistoGraphBase<T>::SetMarkerColor(Color_t mcolor)
{
  p_histograph->SetMarkerColor(mcolor);
}   
   
template <typename T> 
void THistoGraphBase<T>::SetMarkerColorAlpha(Color_t mcolor, Float_t malpha)
{
  p_histograph->SetMarkerColorAlpha(mcolor,malpha);
}   
   
template <typename T> 
void THistoGraphBase<T>::SetMarkerSize(Size_t msize)
{
  p_histograph->SetMarkerSize(msize);
}   
   
template <typename T> 
void THistoGraphBase<T>::SetMarkerStyle(Style_t mstyle)
{
  p_histograph->SetMarkerStyle(mstyle);
}    
//vitual TObject
template <typename T> 
Long_t THistoGraphBase<T>::GetDtorOnly()
{
  return p_histograph->GetDtorOnly();
}  

template <typename T> 
Bool_t THistoGraphBase<T>::GetObjectStat()
{
  return p_histograph->GetObjectStat();
}  

template <typename T> 
void THistoGraphBase<T>::SetDtorOnly(void *obj)
{
  p_histograph->SetDtorOnly(obj);
}  

template <typename T> 
void THistoGraphBase<T>::SetObjectStat(Bool_t stat)
{
  p_histograph->SetObjectStat(stat);
}  

template <typename T> 
void  THistoGraphBase<T>::Browse(TBrowser *b)
{
  p_histograph->Browse(b);
}  



template <typename T>
Int_t	THistoGraphBase<T>::DistancetoPrimitive(Int_t px, Int_t py)
{
  return this->p_histograph->DistancetoPrimitive(px,py);
} 




template <typename T>
void	THistoGraphBase<T>::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
  this->p_histograph->ExecuteEvent(event,px,py);
} 


template <typename T>
TObject*	THistoGraphBase<T>::FindObject(const char* name) const
{
  return this->p_histograph->FindObject(name);
} 
template <typename T>
TObject*	THistoGraphBase<T>::FindObject(const TObject* obj) const
{
  return this->p_histograph->FindObject(obj);
} 


template <typename T>
void	THistoGraphBase<T>::FitPanel()
{
  this->p_histograph->FitPanel();
} 

template <typename T>
TList*	THistoGraphBase<T>::GetListOfFunctions() const
{
  return this->p_histograph->GetListOfFunctions();
} 


template <typename T>
TAxis*	THistoGraphBase<T>::GetXaxis()
{
  return this->p_histograph->GetXaxis();
} 
template <typename T>
const TAxis*	THistoGraphBase<T>::GetXaxis() const
{
  return this->p_histograph->GetXaxis();
} 
template <typename T>
TAxis*	THistoGraphBase<T>::GetYaxis()
{
  return this->p_histograph->GetYaxis();
} 
template <typename T>
const TAxis*	THistoGraphBase<T>::GetYaxis() const
{
  return this->p_histograph->GetYaxis();
} 
template <typename T>
Long64_t	THistoGraphBase<T>::Merge(TCollection* list)
{
  return this->Merge(list);
} 
template <typename T>
void	THistoGraphBase<T>::Paint(Option_t* option)
{
  this->p_histograph->Paint(option);
} 
template <typename T>
void	THistoGraphBase<T>::Print(Option_t* option) const
{
  this->p_histograph->Print(option);
} 
template <typename T>
void	THistoGraphBase<T>::RecursiveRemove(TObject* obj)
{
  this->p_histograph->RecursiveRemove(obj);
} 
template <typename T>
void	THistoGraphBase<T>::SavePrimitive(std::ostream& out, Option_t* option)
{
  this->p_histograph->SavePrimitive(out,option);
} 
template <typename T>
void	THistoGraphBase<T>::SetMaximum(Double_t maximum)
{
  this->p_histograph->SetMaximum(maximum);
} 
template <typename T>
void	THistoGraphBase<T>::SetMinimum(Double_t minimum)
{
  this->p_histograph->SetMinimum(minimum);
} 
template <typename T>
void	THistoGraphBase<T>::SetTitle(const char* title)
{
  this->p_histograph->SetTitle(title);
} 
template <typename T>
void	THistoGraphBase<T>::UseCurrentStyle()
{
  this->p_histograph->UseCurrentStyle();
} 


template class THistoGraphBase<TH1C>;
template class THistoGraphBase<TH1S>;
template class THistoGraphBase<TH1I>;
template class THistoGraphBase<TH1F>;
template class THistoGraphBase<TH1D>;
template class THistoGraphBase<TH2C>;
template class THistoGraphBase<TH2S>;
template class THistoGraphBase<TH2I>;
template class THistoGraphBase<TH2F>;
template class THistoGraphBase<TH2D>;
template class THistoGraphBase<TH3C>;
template class THistoGraphBase<TH3S>;
template class THistoGraphBase<TH3I>;
template class THistoGraphBase<TH3F>;
template class THistoGraphBase<TH3D>; 
template class THistoGraphBase<TProfile>; 
template class THistoGraphBase<TProfile2D>; 
template class THistoGraphBase<TProfile3D>; 
template class THistoGraphBase<TGraph>;
template class THistoGraphBase<TGraph2D>;
template class THistoGraphBase<TGraphErrors>;
template class THistoGraphBase<TGraph2DErrors>;
template class THistoGraphBase<TGraphAsymmErrors>;
template class THistoGraphBase<TGraphBentErrors>;
template class THistoGraphBase<TGraphPolar>;
template class THistoGraphBase<TGraphQQ>;
