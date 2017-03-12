#include "THistoGraphBase.h"
#include "TError.h"
template <typename T> 
void THistoGraphBase<T>::Draw()
{
  if(p_histograph!=nullptr) p_histograph->Draw();
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
  const char *classname = "UnknownClass";
  if (TROOT::Initialized()) classname = ClassName();
  ::ErrorHandler(kError, Form("%s::%s", classname, method),msgfmt,ap);
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
  const char *classname = "UnknownClass";
  if (TROOT::Initialized()) classname = ClassName();
  ::ErrorHandler(kFatal, Form("%s::%s", classname, method),msgfmt,ap);
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
  const char *classname = "UnknownClass";
  if (TROOT::Initialized()) classname = ClassName();
  ::ErrorHandler(kInfo, Form("%s::%s", classname, method),msgfmt,ap);
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
  const char *classname = "UnknownClass";
  if (TROOT::Initialized()) classname = ClassName();
  ::ErrorHandler(kSysError,Form("%s::%s", classname, method),msgfmt,ap);
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
  const char *classname = "UnknownClass";
  if (TROOT::Initialized()) classname = ClassName();
  ::ErrorHandler(kWarning,Form("%s::%s", classname, method),msgfmt,ap);
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
template class THistoGraphBase<TGraphAuto>;
template class THistoGraphBase<TGraph2D>;
template class THistoGraphBase<TGraph2DAuto>;
template class THistoGraphBase<TGraphErrors>;
template class THistoGraphBase<TGraphErrorsAuto>;
template class THistoGraphBase<TGraph2DErrors>;
template class THistoGraphBase<TGraph2DErrorsAuto>;
template class THistoGraphBase<TGraphAsymmErrors>;
template class THistoGraphBase<TGraphAsymmErrorsAuto>;
template class THistoGraphBase<TGraphBentErrors>;
template class THistoGraphBase<TGraphBentErrorsAuto>;
template class THistoGraphBase<TGraphPolar>;
template class THistoGraphBase<TGraphPolarAuto>;
template class THistoGraphBase<TGraphQQ>;
template class THistoGraphBase<TGraphQQAuto>;
