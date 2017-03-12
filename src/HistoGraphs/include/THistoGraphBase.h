#ifndef THistoGraphBase_h
#define THistoGraphBase_h
#include <cstdarg>
#include "HistoGraphBase.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TProfile3D.h"
#include "TGraph.h"
#include "TGraph2D.h"
#include "TGraphErrors.h"
#include "TGraph2DErrors.h"
#include "TGraphAsymmErrors.h"
#include "TGraphBentErrors.h"
#include "TGraphPolar.h"
#include "TGraphQQ.h"
#include "TGraphsAuto.h"

template <typename T>
class THistoGraphBase : public HistoGraphBase
{
  public:
   THistoGraphBase();
   ~THistoGraphBase();
   //TNamed
   void Clear(Option_t *option="");
   Int_t Compare(const TObject *obj) const;
   void FillBuffer(char *&buffer);
   const char *GetName() const;
   const char *GetTitle() const;
   ULong_t Hash() const;
   Bool_t IsSortable() const;
   void 	ls(Option_t *option="") const;
   Int_t Sizeof()const;
   //TObject
   void AbstractMethod(const char *method) const;
   void AppendPad(Option_t *option="");
   const char * ClassName() const;
   void Delete(Option_t *option="");
   void DrawClass() const;
 	 TObject * DrawClone(Option_t *option="") const;
   void Dump() const ;
   void Error(const char *method, const char *msgfmt,...) const;
   void Execute(const char *method, const char *params, Int_t *error=0);
   void Execute(TMethod *method, TObjArray *params, Int_t *error=0);
   void Fatal(const char *method, const char *msgfmt,...) const ;
   Option_t * GetDrawOption() const;
   const char * GetIconName() const ;
   UInt_t GetUniqueID() const;
   Bool_t HandleTimer(TTimer *timer);
   void Info(const char *method, const char *msgfmt,...) const;
   Bool_t InheritsFrom(const char *classname) const;
   Bool_t InheritsFrom(const TClass *cl) const;
   void	Inspect() const;
   void InvertBit(UInt_t f);
   Bool_t IsEqual(const TObject *obj) const;
   Bool_t IsFolder() const;
   Bool_t IsOnHeap() const;
   Bool_t IsZombie() const;
   void MayNotUse(const char *method) const;
   Bool_t Notify();
   void Obsolete (const char *method, const char *asOfVers, const char *removedFromVers) const;
   void Pop() ;
   Int_t Read(const char *name);
   void ResetBit(UInt_t f);
   void SaveAs(const char *filename="", Option_t *option="") const;
   void SetBit(UInt_t f, Bool_t set);
   void SetBit(UInt_t f);
   void SetDrawOption(Option_t *option="");
   void SetUniqueID(UInt_t uid);
   void SysError(const char *method, const char *msgfmt,...) const;
   Bool_t TestBit(UInt_t f) const;
   Int_t TestBits(UInt_t f) const;
   void Warning(const char *method, const char *msgfmt,...) const;
   Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0);
   Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0) const;
   //
   void Draw();
  protected:
    T* p_histograph;
}; 
template< typename T, typename debil=T>class THistoGraph;
#endif 
