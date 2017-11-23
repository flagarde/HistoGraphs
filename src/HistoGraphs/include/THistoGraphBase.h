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
   /*//TH1
    Bool_t	Add(const TH1* h1, Double_t c1 = 1);
    Bool_t	Add(TF1* h1, Double_t c1 = 1, Option_t* option = "");
    Bool_t	Add(const TH1* h, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1);
    void	AddBinContent(Int_t bin);
    void	AddBinContent(Int_t bin, Double_t w);
     void	AddDirectory(Bool_t add = kTRUE);
     Bool_t	AddDirectoryStatus();
    Double_t	AndersonDarlingTest(const TH1* h2, Option_t* option = "") const;
    Double_t	AndersonDarlingTest(const TH1* h2, Double_t& advalue) const;
    void	Browse(TBrowser* b);
    Int_t	BufferEmpty(Int_t action = 0);
    Bool_t	CanExtendAllAxes() const;
    Double_t	Chi2Test(const TH1* h2, Option_t* option = "UU", Double_t* res = 0) const;
    Double_t	Chi2TestX(const TH1* h2, Double_t& chi2, Int_t& ndf, Int_t& igood, Option_t* option = "UU", Double_t* res = 0) const;
    Double_t	Chisquare(TF1* f1, Option_t* option = "") const;
     TClass*	Class();
    void	ClearUnderflowAndOverflow();
    TObject*	Clone(const char* newname = 0) const;
    Double_t	ComputeIntegral(Bool_t onlyPositive = false);
    void	Copy(TObject& hnew) const;
    void	DirectoryAutoAdd(TDirectory*);
    Int_t	DistancetoPrimitive(Int_t px, Int_t py);
    Bool_t	Divide(const TH1* h1);
    Bool_t	Divide(TF1* f1, Double_t c1 = 1);
    Bool_t	Divide(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = "");*/
    void	Draw(Option_t* option = "");
   /* TH1*	DrawCopy(Option_t* option = "", const char* name_postfix = "_copy") const;
    TH1*	DrawNormalized(Option_t* option = "", Double_t norm = 1) const;
    void	DrawPanel();
    void	Eval(TF1* f1, Option_t* option = "");
    void	ExecuteEvent(Int_t event, Int_t px, Int_t py);
    void	ExtendAxis(Double_t x, TAxis* axis);
    TH1*	FFT(TH1* h_output, Option_t* option);*/
    /*Int_t	Fill(Double_t x);
    Int_t	Fill(Double_t x, Double_t w);
    Int_t	Fill(const char* name, Double_t w);
    void	FillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride = 1);
    void	FillN(Int_t, const Double_t*, const Double_t*, const Double_t*, Int_t);*/
    /*void	FillRandom(const char* fname, Int_t ntimes = 5000);
    void	FillRandom(TH1* h, Int_t ntimes = 5000);
    Int_t	FindBin(Double_t x, Double_t y = 0, Double_t z = 0);
    Int_t	FindFirstBinAbove(Double_t threshold = 0, Int_t axis = 1) const;
    Int_t	FindFixBin(Double_t x, Double_t y = 0, Double_t z = 0) const;
    Int_t	FindLastBinAbove(Double_t threshold = 0, Int_t axis = 1) const;
    TObject*	FindObject(const char* name) const;
    TObject*	FindObject(const TObject* obj) const;
    TFitResultPtr	Fit(const char* formula, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0);
    TFitResultPtr	Fit(TF1* f1, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0);
    Int_t	FitOptionsMake(Option_t* option, Foption_t& Foption);
    void	FitPanel();
    TH1*	GetAsymmetry(TH1* h2, Double_t c2 = 1, Double_t dc2 = 0);
     Color_t	GetAxisColor(Option_t* axis = "X") const;
     Float_t	GetBarOffset() const;
     Float_t	GetBarWidth() const;
     Int_t	GetBin(Int_t binx, Int_t biny = 0, Int_t binz = 0) const;
     Double_t	GetBinCenter(Int_t bin) const;
     Double_t	GetBinContent(Int_t bin) const;
     Double_t	GetBinContent(Int_t bin, Int_t) const;
     Double_t	GetBinContent(Int_t bin, Int_t, Int_t) const;
     Double_t	GetBinError(Int_t bin) const;
     Double_t	GetBinError(Int_t binx, Int_t biny) const;
     Double_t	GetBinError(Int_t binx, Int_t biny, Int_t binz) const;
     Double_t	GetBinErrorLow(Int_t bin) const;
     TH1::EBinErrorOpt	GetBinErrorOption() const;
     Double_t	GetBinErrorUp(Int_t bin) const;
     Double_t	GetBinLowEdge(Int_t bin) const;
     Double_t	GetBinWidth(Int_t bin) const;
     Double_t	GetBinWithContent(Double_t c, Int_t& binx, Int_t firstx = 0, Int_t lastx = 0, Double_t maxdiff = 0) const;
     void	GetBinXYZ(Int_t binglobal, Int_t& binx, Int_t& biny, Int_t& binz) const;
const Double_t*	GetBuffer() const;
Int_t	GetBufferLength() const;
Int_t	GetBufferSize() const;
     Double_t	GetCellContent(Int_t binx, Int_t biny) const;
     Double_t	GetCellError(Int_t binx, Int_t biny) const;
     void	GetCenter(Double_t* center) const;
     Int_t	GetContour(Double_t* levels = 0);
     Double_t	GetContourLevel(Int_t level) const;
     Double_t	GetContourLevelPad(Int_t level) const;
TH1*	GetCumulative(Bool_t forward = kTRUE, const char* suffix = "_cumulative") const;
 Int_t	GetDefaultBufferSize();
 Bool_t	GetDefaultSumw2();
     Int_t	GetDimension() const;
TDirectory*	GetDirectory() const;
     Double_t	GetEffectiveEntries() const;
     Double_t	GetEntries() const;
     TF1*	GetFunction(const char* name) const;
     Double_t*	GetIntegral();
     Double_t	GetKurtosis(Int_t axis = 1) const;
     Color_t	GetLabelColor(Option_t* axis = "X") const;
     Style_t	GetLabelFont(Option_t* axis = "X") const;
     Float_t	GetLabelOffset(Option_t* axis = "X") const;
     Float_t	GetLabelSize(Option_t* axis = "X") const;
TList*	GetListOfFunctions() const;
     void	GetLowEdge(Double_t* edge) const;
     Double_t	GetMaximum(Double_t maxval = 3.40282347E+38F) const;
     Int_t	GetMaximumBin() const;
     Int_t	GetMaximumBin(Int_t& locmax, Int_t& locmay, Int_t& locmaz) const;
     Double_t	GetMaximumStored() const;
     Double_t	GetMean(Int_t axis = 1) const;
     Double_t	GetMeanError(Int_t axis = 1) const;
     Double_t	GetMinimum(Double_t minval = -3.40282347E+38F) const;
     Int_t	GetMinimumBin() const;
     Int_t	GetMinimumBin(Int_t& locmix, Int_t& locmiy, Int_t& locmiz) const;
     Double_t	GetMinimumStored() const;
     Int_t	GetNbinsX() const;
     Int_t	GetNbinsY() const;
     Int_t	GetNbinsZ() const;
     Int_t	GetNcells() const;
     Int_t	GetNdivisions(Option_t* axis = "X") const;
     Double_t	GetNormFactor() const;
     char*	GetObjectInfo(Int_t px, Int_t py) const;
     Option_t*	GetOption() const;
TVirtualHistPainter*	GetPainter(Option_t* option = "");
     Int_t	GetQuantiles(Int_t nprobSum, Double_t* q, const Double_t* probSum = 0);
     Double_t	GetRandom() const;
Double_t	GetRMS(Int_t axis = 1) const;
Double_t	GetRMSError(Int_t axis = 1) const;
     Double_t	GetSkewness(Int_t axis = 1) const;
     void	GetStats(Double_t* stats) const;
     Double_t	GetStdDev(Int_t axis = 1) const;
     Double_t	GetStdDevError(Int_t axis = 1) const;
     Double_t	GetSumOfWeights() const;
     TArrayD*	GetSumw2();
     const TArrayD*	GetSumw2() const;
     Int_t	GetSumw2N() const;
     Float_t	GetTickLength(Option_t* axis = "X") const;
     Style_t	GetTitleFont(Option_t* axis = "X") const;
     Float_t	GetTitleOffset(Option_t* axis = "X") const;
     Float_t	GetTitleSize(Option_t* axis = "X") const;
TAxis*	GetXaxis();
const TAxis*	GetXaxis() const;
TAxis*	GetYaxis();
const TAxis*	GetYaxis() const;
TAxis*	GetZaxis();
const TAxis*	GetZaxis() const;
     Double_t	Integral(Option_t* option = "") const;
     Double_t	Integral(Int_t binx1, Int_t binx2, Option_t* option = "") const;
     Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Double_t& err, Option_t* option = "") const;
     Double_t	Interpolate(Double_t x);
     Double_t	Interpolate(Double_t x, Double_t y);
     Double_t	Interpolate(Double_t x, Double_t y, Double_t z);
     TClass*	IsA() const;
Bool_t	IsBinOverflow(Int_t bin) const;
Bool_t	IsBinUnderflow(Int_t bin) const;
     Double_t	KolmogorovTest(const TH1* h2, Option_t* option = "") const;
     void	LabelsDeflate(Option_t* axis = "X");
     void	LabelsInflate(Option_t* axis = "X");
     void	LabelsOption(Option_t* option = "h", Option_t* axis = "X");
     Long64_t	Merge(TCollection* list);
     Bool_t	Multiply(const TH1* h1);
     Bool_t	Multiply(TF1* h1, Double_t c1 = 1);
     Bool_t	Multiply(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = "");
     void	Paint(Option_t* option = "");
     void	Print(Option_t* option = "") const;
     void	PutStats(Double_t* stats);
     TH1*	Rebin(Int_t ngroup = 2, const char* newname = "", const Double_t* xbins = 0);
     void	RebinAxis(Double_t x, TAxis* axis);
     TH1*	RebinX(Int_t ngroup = 2, const char* newname = "");
     void	Rebuild(Option_t* option = "");
     void	RecursiveRemove(TObject* obj);
     void	Reset(Option_t* option = "");
     void	ResetStats();
     void	SavePrimitive(std::ostream& out, Option_t* option = "");
     void	Scale(Double_t c1 = 1, Option_t* option = "");
     void	SetAxisColor(Color_t color = 1, Option_t* axis = "X");
     void	SetAxisRange(Double_t xmin, Double_t xmax, Option_t* axis = "X");
     void	SetBarOffset(Float_t offset = 0.25);
     void	SetBarWidth(Float_t width = 0.5);
     void	SetBinContent(Int_t bin, Double_t content);
     void	SetBinContent(Int_t bin, Int_t, Double_t content);
     void	SetBinContent(Int_t bin, Int_t, Int_t, Double_t content);
     void	SetBinError(Int_t bin, Double_t error);
     void	SetBinError(Int_t binx, Int_t biny, Double_t error);
     void	SetBinError(Int_t binx, Int_t biny, Int_t binz, Double_t error);
     void	SetBinErrorOption(TH1::EBinErrorOpt type);*/
     /*void	SetBins(Int_t nx, const Double_t* xBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax);
     void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax);
     void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax);*/
     /*void	SetBinsLength(Int_t = -1);
     void	SetBuffer(Int_t buffersize, Option_t* option = "");
     UInt_t	SetCanExtend(UInt_t extendBitMask);
     void	SetCellContent(Int_t binx, Int_t biny, Double_t content);
     void	SetCellError(Int_t binx, Int_t biny, Double_t content);
     void	SetContent(const Double_t* content);
     void	SetContour(Int_t nlevels, const Double_t* levels = 0);
     void	SetContourLevel(Int_t level, Double_t value);
 void	SetDefaultBufferSize(Int_t buffersize = 1000);
 void	SetDefaultSumw2(Bool_t sumw2 = kTRUE);
     void	SetDirectory(TDirectory* dir);
     void	SetEntries(Double_t n);
     void	SetError(const Double_t* error);
     void	SetLabelColor(Color_t color = 1, Option_t* axis = "X");
     void	SetLabelFont(Style_t font = 62, Option_t* axis = "X");
     void	SetLabelOffset(Float_t offset = 0.0050000000000000001, Option_t* axis = "X");
     void	SetLabelSize(Float_t size = 0.02, Option_t* axis = "X");
     void	SetMaximum(Double_t maximum = -1111);
     void	SetMinimum(Double_t minimum = -1111);
     void	SetName(const char* name);
     void	SetNameTitle(const char* name, const char* title);
     void	SetNdivisions(Int_t n = 510, Option_t* axis = "X");
     void	SetNormFactor(Double_t factor = 1);
     void	SetOption(Option_t* option = " ");
     void	SetStats(Bool_t stats = kTRUE);
     void	SetTickLength(Float_t length = 0.02, Option_t* axis = "X");
     void	SetTitle(const char* title);
     void	SetTitleFont(Style_t font = 62, Option_t* axis = "X");
     void	SetTitleOffset(Float_t offset = 1, Option_t* axis = "X");
     void	SetTitleSize(Float_t size = 0.02, Option_t* axis = "X");
     void	SetXTitle(const char* title);
     void	SetYTitle(const char* title);
     void	SetZTitle(const char* title);
     TH1*	ShowBackground(Int_t niter = 20, Option_t* option = "same");
     void	ShowMembers(TMemberInspector& insp) const;
     Int_t	ShowPeaks(Double_t sigma = 2, Option_t* option = "", Double_t threshold = 0.050000000000000003);
     void	Smooth(Int_t ntimes = 1, Option_t* option = "");
 void	SmoothArray(Int_t NN, Double_t* XX, Int_t ntimes = 1);
 void	StatOverflows(Bool_t flag = kTRUE);
     void	Streamer(TBuffer&);
void	StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b);
     void	Sumw2(Bool_t flag = kTRUE);
 TH1*	TransformHisto(TVirtualFFT* fft, TH1* h_output, Option_t* option);
     void	UseCurrentStyle();
     Int_t	BufferFill(Double_t x, Double_t w);
bool	CheckAxisLimits(const TAxis* a1, const TAxis* a2);
bool	CheckBinLabels(const TAxis* a1, const TAxis* a2);
 bool	CheckBinLimits(const TAxis* a1, const TAxis* a2);
bool	CheckConsistency(const TH1* h1, const TH1* h2);
 bool	CheckConsistentSubAxes(const TAxis* a1, Int_t firstBin1, Int_t lastBin1, const TAxis* a2, Int_t firstBin2 = 0, Int_t lastBin2 = 0);
 bool	CheckEqualAxes(const TAxis* a1, const TAxis* a2);
     void	DoFillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride = 1);
     Double_t	DoIntegral(Int_t ix1, Int_t ix2, Int_t iy1, Int_t iy2, Int_t iz1, Int_t iz2, Double_t& err, Option_t* opt, Bool_t doerr = kFALSE) const;
     Bool_t	FindNewAxisLimits(const TAxis* axis, const Double_t point, Double_t& newMin, Double_t& newMax);
     Double_t	GetBinErrorSqUnchecked(Int_t bin) const;
 Bool_t	RecomputeAxisLimits(TAxis& destAxis, const TAxis& anAxis);
     Double_t	RetrieveBinContent(Int_t bin) const;
Bool_t	SameLimitsAndNBins(const TAxis& axis1, const TAxis& axis2);
     void	SavePrimitiveHelp(std::ostream& out, const char* hname, Option_t* option = "");*/
  protected:
    T* p_histograph;
}; 
template< typename T, typename debil=T>class THistoGraph;
#endif 
