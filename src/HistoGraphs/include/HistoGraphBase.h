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
    //TAttLine
    virtual Int_t DistancetoLine(Int_t px, Int_t py, Double_t xp1, Double_t yp1, Double_t xp2, Double_t yp2)=0;
    virtual Color_t GetLineColor() const=0;
    virtual Style_t GetLineStyle() const=0;
    virtual Width_t GetLineWidth() const=0;
    virtual void ResetAttLine(Option_t *option="")=0;
    virtual void SaveLineAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t widdef=1)=0;
    virtual void SetLineAttributes()=0;
    virtual void SetLineColor(Color_t lcolor)=0;
    virtual void SetLineColorAlpha (Color_t lcolor, Float_t lalpha)=0;
    virtual void SetLineStyle(Style_t lstyle)=0;
    virtual void SetLineWidth(Width_t lwidth)=0;
    //TAttFill
    virtual Color_t GetFillColor() const=0;
    virtual Style_t GetFillStyle() const=0;
    virtual Bool_t IsTransparent() const=0;
    virtual void ResetAttFill(Option_t *option="")=0;
    virtual void SaveFillAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1001)=0;
    virtual void SetFillAttributes()=0;
    virtual void SetFillColor(Color_t fcolor)=0;
    virtual void SetFillColorAlpha(Color_t fcolor, Float_t falpha)=0;
    virtual void SetFillStyle(Style_t fstyle)=0;
    //TAttMaker
    virtual Color_t GetMarkerColor() const=0;
    virtual Size_t GetMarkerSize() const=0;
    virtual Style_t GetMarkerStyle() const=0;
    virtual void ResetAttMarker(Option_t *toption="")=0;
    virtual void SaveMarkerAttributes(std::ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t sizdef=1)=0;
    virtual void SetMarkerAttributes()=0;
    virtual void SetMarkerColor(Color_t mcolor=1)=0;
    virtual void SetMarkerColorAlpha(Color_t mcolor, Float_t malpha)=0;
    virtual void SetMarkerSize(Size_t msize=1)=0;
    virtual void SetMarkerStyle(Style_t mstyle=1)=0;
    //vitual TObject
    virtual Long_t GetDtorOnly()=0;
    virtual Bool_t GetObjectStat()=0;
    virtual void SetDtorOnly(void *obj)=0;
    virtual void SetObjectStat(Bool_t stat)=0; 
    bool isTH1F(){return true;};
    //TH1  
    /*virtual Bool_t 	Add (TF1 *h1, Double_t c1=1, Option_t *option="")
    virtual Bool_t 	Add (const TH1 *h1, Double_t c1=1)
    virtual Bool_t 	Add (const TH1 *h, const TH1 *h2, Double_t c1=1, Double_t c2=1)
    virtual void 	AddBinContent (Int_t bin)
    virtual void 	AddBinContent (Int_t bin, Double_t w)
    virtual Double_t 	AndersonDarlingTest (const TH1 *h2, Option_t *option="") const
    virtual Double_t 	AndersonDarlingTest (const TH1 *h2, Double_t &advalue) const
    virtual void 	Browse (TBrowser *b) 
    virtual Int_t 	BufferEmpty (Int_t action=0)
    virtual Bool_t 	CanExtendAllAxes () const
    virtual Double_t 	Chi2Test (const TH1 *h2, Option_t *option="UU", Double_t *res=0) const
    virtual Double_t 	Chi2TestX (const TH1 *h2, Double_t &chi2, Int_t &ndf, Int_t &igood, Option_t *option="UU", Double_t *res=0) const
    virtual Double_t 	Chisquare (TF1 *f1, Option_t *option="") const
    virtual void 	ClearUnderflowAndOverflow ()
    TObject * 	Clone (const char *newname=0) const
    virtual Double_t 	ComputeIntegral (Bool_t onlyPositive=false)
    virtual void 	Copy (TObject &hnew) const
    virtual void 	DirectoryAutoAdd (TDirectory *)
    virtual Int_t 	DistancetoPrimitive (Int_t px, Int_t py)
    virtual Bool_t 	Divide (TF1 *f1, Double_t c1=1)
    virtual Bool_t 	Divide (const TH1 *h1)
    virtual Bool_t 	Divide (const TH1 *h1, const TH1 *h2, Double_t c1=1, Double_t c2=1, Option_t *option="")
    virtual void 	Draw (Option_t *option="")
    virtual TH1 * 	DrawCopy (Option_t *option="", const char *name_postfix="_copy") const
    virtual TH1 * 	DrawNormalized (Option_t *option="", Double_t norm=1) const
    virtual void 	DrawPanel ()
    virtual void 	Eval (TF1 *f1, Option_t *option="")
    virtual void 	ExecuteEvent (Int_t event, Int_t px, Int_t py)
    virtual void 	ExtendAxis (Double_t x, TAxis *axis)
    virtual TH1 * 	FFT (TH1 *h_output, Option_t *option)
    virtual Int_t 	Fill (Double_t x)
    virtual Int_t 	Fill (Double_t x, Double_t w)
    virtual Int_t 	Fill (const char *name, Double_t w)
    virtual void 	FillN (Int_t ntimes, const Double_t *x, const Double_t *w, Int_t stride=1)
    virtual void 	FillN (Int_t, const Double_t *, const Double_t *, const Double_t *, Int_t)
    virtual void 	FillRandom (const char *fname, Int_t ntimes=5000)
    virtual void 	FillRandom (TH1 *h, Int_t ntimes=5000)
    virtual Int_t 	FindBin (Double_t x, Double_t y=0, Double_t z=0)
    virtual Int_t 	FindFirstBinAbove (Double_t threshold=0, Int_t axis=1) const
    virtual Int_t 	FindFixBin (Double_t x, Double_t y=0, Double_t z=0) const
    virtual Int_t 	FindLastBinAbove (Double_t threshold=0, Int_t axis=1) const
    virtual TObject * 	FindObject (const char *name) const 
    virtual TObject * 	FindObject (const TObject *obj) const
    virtual TFitResultPtr 	Fit (const char *formula, Option_t *option="", Option_t *goption="", Double_t xmin=0, Double_t xmax=0)
    virtual TFitResultPtr 	Fit (TF1 *f1, Option_t *option="", Option_t *goption="", Double_t xmin=0, Double_t xmax=0)
    virtual void 	FitPanel ()
    TH1 * 	GetAsymmetry (TH1 *h2, Double_t c2=1, Double_t dc2=0)
    virtual Color_t 	GetAxisColor (Option_t *axis="X") const
    virtual Float_t 	GetBarOffset () const
    virtual Float_t 	GetBarWidth () const
    virtual Int_t 	GetBin (Int_t binx, Int_t biny=0, Int_t binz=0) const
    virtual Double_t 	GetBinCenter (Int_t bin) const
    virtual Double_t 	GetBinContent (Int_t bin) const
    virtual Double_t 	GetBinContent (Int_t bin, Int_t) const
    virtual Double_t 	GetBinContent (Int_t bin, Int_t, Int_t) const
    virtual Double_t 	GetBinError (Int_t bin) const
    virtual Double_t 	GetBinError (Int_t binx, Int_t biny) const
    virtual Double_t 	GetBinError (Int_t binx, Int_t biny, Int_t binz) const
    virtual Double_t 	GetBinErrorLow (Int_t bin) const
    virtual EBinErrorOpt 	GetBinErrorOption () const
    virtual Double_t 	GetBinErrorUp (Int_t bin) const
    virtual Double_t 	GetBinLowEdge (Int_t bin) const
    virtual Double_t 	GetBinWidth (Int_t bin) const
    virtual Double_t 	GetBinWithContent (Double_t c, Int_t &binx, Int_t firstx=0, Int_t lastx=0, Double_t maxdiff=0) const
    virtual void 	GetBinXYZ (Int_t binglobal, Int_t &binx, Int_t &biny, Int_t &binz) const
    const Double_t * 	GetBuffer () const
    Int_t 	GetBufferLength () const
    Int_t 	GetBufferSize () const
    virtual Double_t 	GetCellContent (Int_t binx, Int_t biny) const
    virtual Double_t 	GetCellError (Int_t binx, Int_t biny) const
    virtual void 	GetCenter (Double_t *center) const
    virtual Int_t 	GetContour (Double_t *levels=0)
    virtual Double_t 	GetContourLevel (Int_t level) const
    virtual Double_t 	GetContourLevelPad (Int_t level) const
    TH1 * 	GetCumulative (Bool_t forward=kTRUE, const char *suffix="_cumulative") const
    virtual Int_t 	GetDimension () const
    TDirectory * 	GetDirectory () const
    virtual Double_t 	GetEffectiveEntries () const
    virtual Double_t 	GetEntries () const
    virtual TF1 * 	GetFunction (const char *name) const
    virtual Double_t * 	GetIntegral ()
    virtual Double_t 	GetKurtosis (Int_t axis=1) const
    virtual Color_t 	GetLabelColor (Option_t *axis="X") const
    virtual Style_t 	GetLabelFont (Option_t *axis="X") const
    virtual Float_t 	GetLabelOffset (Option_t *axis="X") const
    virtual Float_t 	GetLabelSize (Option_t *axis="X") const
    TList * 	GetListOfFunctions () const
    virtual void 	GetLowEdge (Double_t *edge) const
    virtual Double_t 	GetMaximum (Double_t maxval=FLT_MAX) const
    virtual Int_t 	GetMaximumBin () const
    virtual Int_t 	GetMaximumBin (Int_t &locmax, Int_t &locmay, Int_t &locmaz) const
    virtual Double_t 	GetMaximumStored () const
    virtual Double_t 	GetMean (Int_t axis=1) const
    virtual Double_t 	GetMeanError (Int_t axis=1) const
    virtual Double_t 	GetMinimum (Double_t minval=-FLT_MAX) const
    virtual void 	GetMinimumAndMaximum (Double_t &min, Double_t &max) const
    virtual Int_t 	GetMinimumBin () const
    virtual Int_t 	GetMinimumBin (Int_t &locmix, Int_t &locmiy, Int_t &locmiz) const
    virtual Double_t 	GetMinimumStored () const
    virtual Int_t 	GetNbinsX () const
    virtual Int_t 	GetNbinsY () const
    virtual Int_t 	GetNbinsZ () const
    virtual Int_t 	GetNcells () const
    virtual Int_t 	GetNdivisions (Option_t *axis="X") const
    virtual Double_t 	GetNormFactor () const
    virtual char * 	GetObjectInfo (Int_t px, Int_t py) const
    Option_t * 	GetOption () const
    TVirtualHistPainter * 	GetPainter (Option_t *option="")
    virtual Int_t 	GetQuantiles (Int_t nprobSum, Double_t *q, const Double_t *probSum=0)
    virtual Double_t 	GetRandom () const
    Double_t 	GetRMS (Int_t axis=1) const
    Double_t 	GetRMSError (Int_t axis=1) const
    virtual Double_t 	GetSkewness (Int_t axis=1) const
    virtual void 	GetStats (Double_t *stats) const
    virtual Double_t 	GetStdDev (Int_t axis=1) const
    virtual Double_t 	GetStdDevError (Int_t axis=1) const
    virtual Double_t 	GetSumOfWeights () const
    virtual TArrayD * 	GetSumw2 ()
    virtual const TArrayD * 	GetSumw2 () const
    virtual Int_t 	GetSumw2N () const
    virtual Float_t 	GetTickLength (Option_t *axis="X") const
    virtual Style_t 	GetTitleFont (Option_t *axis="X") const
    virtual Float_t 	GetTitleOffset (Option_t *axis="X") const
    virtual Float_t 	GetTitleSize (Option_t *axis="X") const
    TAxis * 	GetXaxis ()
    const TAxis * 	GetXaxis () const
    TAxis * 	GetYaxis ()
    const TAxis * 	GetYaxis () const
    TAxis * 	GetZaxis ()
    const TAxis * 	GetZaxis () const
    virtual Double_t 	Integral (Option_t *option="") const
virtual Double_t 	Integral (Int_t binx1, Int_t binx2, Option_t *option="") const
virtual Double_t 	IntegralAndError (Int_t binx1, Int_t binx2, Double_t &err, Option_t *option="") const
virtual Double_t 	Interpolate (Double_t x)
virtual Double_t 	Interpolate (Double_t x, Double_t y)
virtual Double_t 	Interpolate (Double_t x, Double_t y, Double_t z)
Bool_t 	IsBinOverflow (Int_t bin, Int_t axis=0) const
Bool_t 	IsBinUnderflow (Int_t bin, Int_t axis=0) const
virtual Double_t 	KolmogorovTest (const TH1 *h2, Option_t *option="") const
virtual void 	LabelsDeflate (Option_t *axis="X")
virtual void 	LabelsInflate (Option_t *axis="X")
virtual void 	LabelsOption (Option_t *option="h", Option_t *axis="X")
virtual Long64_t 	Merge (TCollection *list)
virtual Bool_t 	Multiply (TF1 *h1, Double_t c1=1)
virtual Bool_t 	Multiply (const TH1 *h1)
virtual Bool_t 	Multiply (const TH1 *h1, const TH1 *h2, Double_t c1=1, Double_t c2=1, Option_t *option="")
virtual void 	Paint (Option_t *option="")
virtual void 	Print (Option_t *option="") const
virtual void 	PutStats (Double_t *stats)
virtual TH1 * 	Rebin (Int_t ngroup=2, const char *newname="", const Double_t *xbins=0)
virtual void 	RebinAxis (Double_t x, TAxis *axis)
virtual TH1 * 	RebinX (Int_t ngroup=2, const char *newname="")
virtual void 	Rebuild (Option_t *option="")
virtual void 	RecursiveRemove (TObject *obj)
virtual void 	Reset (Option_t *option="")
virtual void 	ResetStats ()
virtual void 	SavePrimitive (std::ostream &out, Option_t *option="")
virtual void 	Scale (Double_t c1=1, Option_t *option="")
virtual void 	SetAxisColor (Color_t color=1, Option_t *axis="X")
virtual void 	SetAxisRange (Double_t xmin, Double_t xmax, Option_t *axis="X")
virtual void 	SetBarOffset (Float_t offset=0.25)
virtual void 	SetBarWidth (Float_t width=0.5)
virtual void 	SetBinContent (Int_t bin, Double_t content)
virtual void 	SetBinContent (Int_t bin, Int_t, Double_t content)
virtual void 	SetBinContent (Int_t bin, Int_t, Int_t, Double_t content)
virtual void 	SetBinError (Int_t bin, Double_t error)
virtual void 	SetBinError (Int_t binx, Int_t biny, Double_t error)
virtual void 	SetBinError (Int_t binx, Int_t biny, Int_t binz, Double_t error)
virtual void 	SetBinErrorOption (EBinErrorOpt type)
virtual void 	SetBins (Int_t nx, Double_t xmin, Double_t xmax)
virtual void 	SetBins (Int_t nx, const Double_t *xBins)
virtual void 	SetBins (Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax)
virtual void 	SetBins (Int_t nx, const Double_t *xBins, Int_t ny, const Double_t *yBins)
virtual void 	SetBins (Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax)
virtual void 	SetBins (Int_t nx, const Double_t *xBins, Int_t ny, const Double_t *yBins, Int_t nz, const Double_t *zBins)
virtual void 	SetBinsLength (Int_t=-1)
virtual void 	SetBuffer (Int_t buffersize, Option_t *option="")
virtual UInt_t 	SetCanExtend (UInt_t extendBitMask)
virtual void 	SetCellContent (Int_t binx, Int_t biny, Double_t content)
virtual void 	SetCellError (Int_t binx, Int_t biny, Double_t content)
virtual void 	SetContent (const Double_t *content)
virtual void 	SetContour (Int_t nlevels, const Double_t *levels=0)
virtual void 	SetContourLevel (Int_t level, Double_t value)
virtual void 	SetDirectory (TDirectory *dir)
virtual void 	SetEntries (Double_t n)
virtual void 	SetError (const Double_t *error)
virtual void 	SetLabelColor (Color_t color=1, Option_t *axis="X")
virtual void 	SetLabelFont (Style_t font=62, Option_t *axis="X")
virtual void 	SetLabelOffset (Float_t offset=0.005, Option_t *axis="X")
virtual void 	SetLabelSize (Float_t size=0.02, Option_t *axis="X")
virtual void 	SetMaximum (Double_t maximum=-1111)
virtual void 	SetMinimum (Double_t minimum=-1111)
virtual void 	SetName (const char *name)
virtual void 	SetNameTitle (const char *name, const char *title)
virtual void 	SetNdivisions (Int_t n=510, Option_t *axis="X")
virtual void 	SetNormFactor (Double_t factor=1)
virtual void 	SetOption (Option_t *option=" ")
virtual void 	SetStats (Bool_t stats=kTRUE)
virtual void 	SetTickLength (Float_t length=0.02, Option_t *axis="X")
virtual void 	SetTitle (const char *title)
virtual void 	SetTitleFont (Style_t font=62, Option_t *axis="X")
virtual void 	SetTitleOffset (Float_t offset=1, Option_t *axis="X")
virtual void 	SetTitleSize (Float_t size=0.02, Option_t *axis="X")
virtual void 	SetXTitle (const char *title)
virtual void 	SetYTitle (const char *title)
virtual void 	SetZTitle (const char *title)
virtual TH1 * 	ShowBackground (Int_t niter=20, Option_t *option="same")
virtual Int_t 	ShowPeaks (Double_t sigma=2, Option_t *option="", Double_t threshold=0.05)
virtual void 	Smooth (Int_t ntimes=1, Option_t *option="")
virtual void 	Sumw2 (Bool_t flag=kTRUE)
void 	UseCurrentStyle ()*/
    
    
    
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
