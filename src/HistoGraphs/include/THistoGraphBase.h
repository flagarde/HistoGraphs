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
#include "TMultiGraph.h"

template <typename T>
class THistoGraphBase: public HistoGraphBase
{
  public:
   THistoGraphBase();
   ~THistoGraphBase();
   T* operator->() const { return p_histograph; }
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
   //TAttLine
   Int_t DistancetoLine(Int_t px, Int_t py, Double_t xp1, Double_t yp1, Double_t xp2, Double_t yp2);
   Color_t GetLineColor() const;
   Style_t GetLineStyle() const;
   Width_t GetLineWidth() const;
   void ResetAttLine(Option_t *option="");
   void SaveLineAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t widdef=1);
   void SetLineAttributes();
   void SetLineColor(Color_t lcolor);
   void SetLineColorAlpha (Color_t lcolor, Float_t lalpha);
   void SetLineStyle(Style_t lstyle);
   void SetLineWidth(Width_t lwidth);
   //TAttFill
   Color_t GetFillColor() const;
   Style_t GetFillStyle() const;
   Bool_t IsTransparent() const;
   void ResetAttFill(Option_t *option="");
   void SaveFillAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1001);
   void SetFillAttributes();
   void SetFillColor(Color_t fcolor);
   void SetFillColorAlpha(Color_t fcolor, Float_t falpha);
   void SetFillStyle(Style_t fstyle);
   //TAttMaker
   Color_t GetMarkerColor() const;
   Size_t GetMarkerSize() const;
   Style_t GetMarkerStyle() const;
   void ResetAttMarker(Option_t *toption="");
   void SaveMarkerAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t sizdef=1);
   void SetMarkerAttributes();
   void SetMarkerColor(Color_t mcolor=1);
   void SetMarkerColorAlpha(Color_t mcolor, Float_t malpha);
   void SetMarkerSize(Size_t msize=1);
   void SetMarkerStyle(Style_t mstyle=1);
   //vitual TObject
   Long_t GetDtorOnly();
   Bool_t GetObjectStat();
   void SetDtorOnly(void *obj);
   void SetObjectStat(Bool_t stat); 
   void	Draw(Option_t* option = "");
   
   //Same in THs and Graphs
    void  Browse (TBrowser *b);

    Int_t	DistancetoPrimitive(Int_t px, Int_t py);
    void	ExecuteEvent(Int_t event, Int_t px, Int_t py);
    TObject*	FindObject(const char* name) const;
    TObject*	FindObject(const TObject* obj) const;
 

    void	FitPanel();
    TList*	GetListOfFunctions() const;
    virtual TAxis*	GetXaxis();
    const TAxis*	GetXaxis() const;
    TAxis*	GetYaxis();
    const TAxis*	GetYaxis() const;
    Long64_t	Merge(TCollection* list);
    void	Paint(Option_t* option = "");
    void	Print(Option_t* option = "") const;
    void	RecursiveRemove(TObject* obj);
    void	SavePrimitive(std::ostream& out, Option_t* option = "");
    void	SetMaximum(Double_t maximum = -1111);
    void	SetMinimum(Double_t minimum = -1111);
    void	SetTitle(const char* title);
    void	UseCurrentStyle();
  protected:
    T* p_histograph;
}; 
template< typename T, typename debil=T>class THistoGraph;
#endif 
