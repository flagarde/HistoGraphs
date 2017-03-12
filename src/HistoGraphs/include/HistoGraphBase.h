#ifndef HistoGraphBase_h
#define HistoGraphBase_h
#include "TF1.h"
#include "TH1.h"
#include "TROOT.h"
class HistoGraphBase
{
  public:
    //TNamed
    virtual void Clear(Option_t *option="")=0;
    virtual Int_t Compare(const TObject *obj) const=0;
    virtual void FillBuffer(char *&buffer)=0;
    virtual const char *GetName() const=0;
    virtual const char *GetTitle() const=0;
    virtual ULong_t Hash() const=0;
    virtual Bool_t IsSortable() const=0;
    virtual void 	ls(Option_t *option="") const=0;
    virtual Int_t Sizeof()const=0;
    //TObject
    virtual void AbstractMethod(const char *method) const=0;
    virtual void AppendPad(Option_t *option="")=0;
    virtual const char * ClassName() const=0;
    virtual void Delete(Option_t *option="")=0;
    virtual void DrawClass() const=0;
 	  virtual TObject * DrawClone(Option_t *option="") const=0;
    virtual void Dump() const =0;
    virtual void Error(const char *method, const char *msgfmt,...) const=0;
    virtual void Execute(const char *method, const char *params, Int_t *error=0)=0;
    virtual void Execute(TMethod *method, TObjArray *params, Int_t *error=0)=0;
    virtual void Fatal(const char *method, const char *msgfmt,...) const =0;
    virtual Option_t * GetDrawOption() const=0;
    virtual const char * GetIconName() const =0;
    virtual UInt_t GetUniqueID() const=0;
    virtual Bool_t HandleTimer(TTimer *timer)=0;
    virtual void Info(const char *method, const char *msgfmt,...) const=0;
    virtual Bool_t InheritsFrom(const char *classname) const=0;
    virtual Bool_t InheritsFrom(const TClass *cl) const=0;
    virtual void Inspect() const=0;
    virtual void InvertBit(UInt_t f)=0;
    virtual Bool_t IsEqual(const TObject *obj) const=0;
    virtual Bool_t IsFolder() const=0;
    virtual Bool_t IsOnHeap() const=0;
    virtual Bool_t IsZombie() const=0;
    virtual void MayNotUse(const char *method) const=0;
    virtual Bool_t Notify()=0;
    virtual void Obsolete(const char *method, const char *asOfVers, const char *removedFromVers) const=0;
    virtual void Pop() =0;
    virtual Int_t Read(const char *name)=0;
    virtual void ResetBit(UInt_t f)=0;
    virtual void SaveAs(const char *filename="", Option_t *option="") const=0;
    virtual void SetBit(UInt_t f, Bool_t set)=0;
    virtual void SetBit(UInt_t f)=0;
    virtual void SetDrawOption(Option_t *option="")=0;
    virtual void SetUniqueID(UInt_t uid)=0;
    virtual void SysError(const char *method, const char *msgfmt,...) const=0;
    virtual Bool_t TestBit(UInt_t f) const=0;
    virtual Int_t TestBits(UInt_t f) const=0;
    virtual void Warning(const char *method, const char *msgfmt,...) const=0;
    virtual Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0)=0;
    virtual Int_t	Write(const char *name=0, Int_t option=0, Int_t bufsize=0) const=0;
    //
    virtual void Draw()=0;
    virtual Bool_t 	Add(TF1 *h1,Double_t c1=1,Option_t* option=""){ return false; };
    virtual Bool_t 	Add(const TH1 *h1, Double_t c1=1){ return false; };
    virtual Bool_t 	Add(const TH1 *h, const TH1 *h2, Double_t c1=1, Double_t c2=1){ return false; };
    virtual void 	AddBinContent(Int_t bin){};
    virtual void 	AddBinContent(Int_t bin, Double_t w){};
    virtual Double_t 	AndersonDarlingTest(const TH1 *h2, Option_t *option="") const { return -1; };
    virtual Double_t 	AndersonDarlingTest(const TH1 *h2, Double_t &advalue) const{ return -1; };
    virtual void SetPoint(int i,double x,double y){};
    virtual void Fill(double x){};
    virtual void Fill(double x,double w){};
    virtual void Fill(double x,double y,double w){};
    virtual void Fill(double x,double y,double z,double w){};
    virtual void Fill(double x,double y,double z,double t,double w){};
    virtual ~HistoGraphBase();
};
#endif
