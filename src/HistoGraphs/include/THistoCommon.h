#ifndef THistoCommon_h
#define THistoCommon_h 
#include "THistoGraphBase.h"
template <typename T> 
class THistoCommon: public THistoGraphBase<T>
{
  public:
    THistoCommon(){};
    virtual ~THistoCommon(){};
    
    //My ADDING
    void Detach();
    
    ///////////////
    virtual Bool_t	Add(const TH1* h1, Double_t c1 = 1);
   virtual  Bool_t	Add(TF1* h1, Double_t c1 = 1, Option_t* option = "");
    virtual Bool_t	Add(const TH1* h, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1);
    virtual void	AddBinContent(Int_t bin);
    virtual void	AddBinContent(Int_t bin, Double_t w);
    virtual  void	AddDirectory(Bool_t add = kTRUE);
    virtual  Bool_t	AddDirectoryStatus();
    virtual Double_t	AndersonDarlingTest(const TH1* h2, Option_t* option = "") const;
    virtual Double_t	AndersonDarlingTest(const TH1* h2, Double_t& advalue) const;
    virtual Int_t	BufferEmpty(Int_t action = 0);
    virtual Bool_t	CanExtendAllAxes() const;
    virtual Double_t	Chi2Test(const TH1* h2, Option_t* option = "UU", Double_t* res = 0) const;
    virtual Double_t	Chi2TestX(const TH1* h2, Double_t& chi2, Int_t& ndf, Int_t& igood, Option_t* option = "UU", Double_t* res = 0) const;
    virtual  TClass*	Class();
    virtual void	ClearUnderflowAndOverflow();
    virtual TObject*	Clone(const char* newname = 0) const;
    virtual Double_t	ComputeIntegral(Bool_t onlyPositive = false);
    virtual void	Copy(TObject& hnew) const;
    virtual void	DirectoryAutoAdd(TDirectory*);
    virtual Bool_t	Divide(const TH1* h1);
    virtual Bool_t	Divide(TF1* f1, Double_t c1 = 1);
    virtual Bool_t	Divide(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = "");
    virtual TH1*	DrawCopy(Option_t* option = "", const char* name_postfix = "_copy") const;
    virtual TH1*	DrawNormalized(Option_t* option = "", Double_t norm = 1) const;
    virtual void	Eval(TF1* f1, Option_t* option = "");
    virtual void	ExtendAxis(Double_t x, TAxis* axis);
    virtual TH1*	FFT(TH1* h_output, Option_t* option);
    //Int_t	Fill(Double_t x);
   //Int_t	Fill(Double_t x, Double_t w);
    //Int_t	Fill(const char* name, Double_t w);
    //void	FillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride = 1);
    //void	FillN(Int_t, const Double_t*, const Double_t*, const Double_t*, Int_t);
    virtual void	FillRandom(const char* fname, Int_t ntimes = 5000);
    virtual void	FillRandom(TH1* h, Int_t ntimes = 5000);
    virtual Int_t	FindBin(Double_t x, Double_t y = 0, Double_t z = 0);
    virtual Int_t	FindFirstBinAbove(Double_t threshold = 0, Int_t axis = 1) const;
    virtual Int_t	FindFixBin(Double_t x, Double_t y = 0, Double_t z = 0) const;
    virtual Int_t	FindLastBinAbove(Double_t threshold = 0, Int_t axis = 1) const;
    virtual Int_t	FitOptionsMake(Option_t* option, Foption_t& Foption);
    virtual TH1*	GetAsymmetry(TH1* h2, Double_t c2 = 1, Double_t dc2 = 0);
     virtual Color_t	GetAxisColor(Option_t* axis = "X") const;
    virtual  Float_t	GetBarOffset() const;
     virtual Float_t	GetBarWidth() const;
     virtual Int_t	GetBin(Int_t binx, Int_t biny = 0, Int_t binz = 0) const;
    virtual  Double_t	GetBinCenter(Int_t bin) const;
    virtual  Double_t	GetBinContent(Int_t bin) const;
     virtual Double_t	GetBinContent(Int_t bin, Int_t) const;
    virtual  Double_t	GetBinContent(Int_t bin, Int_t, Int_t) const;
    virtual  Double_t	GetBinError(Int_t bin) const;
    virtual  Double_t	GetBinError(Int_t binx, Int_t biny) const;
    virtual  Double_t	GetBinError(Int_t binx, Int_t biny, Int_t binz) const;
    virtual  Double_t	GetBinErrorLow(Int_t bin) const;
    virtual  TH1::EBinErrorOpt	GetBinErrorOption() const;
    virtual  Double_t	GetBinErrorUp(Int_t bin) const;
    virtual  Double_t	GetBinLowEdge(Int_t bin) const;
    virtual  Double_t	GetBinWidth(Int_t bin) const;
    virtual  Double_t	GetBinWithContent(Double_t c, Int_t& binx, Int_t firstx = 0, Int_t lastx = 0, Double_t maxdiff = 0) const;
   virtual   void	GetBinXYZ(Int_t binglobal, Int_t& binx, Int_t& biny, Int_t& binz) const;
virtual const Double_t*	GetBuffer() const;
virtual Int_t	GetBufferLength() const;
virtual Int_t	GetBufferSize() const;
     virtual Double_t	GetCellContent(Int_t binx, Int_t biny) const;
   virtual   Double_t	GetCellError(Int_t binx, Int_t biny) const;
   virtual   void	GetCenter(Double_t* center) const;
   virtual   Int_t	GetContour(Double_t* levels = 0);
   virtual   Double_t	GetContourLevel(Int_t level) const;
   virtual   Double_t	GetContourLevelPad(Int_t level) const;
virtual TH1*	GetCumulative(Bool_t forward = kTRUE, const char* suffix = "_cumulative") const;
virtual  Int_t	GetDefaultBufferSize();
virtual  Bool_t	GetDefaultSumw2();
  virtual    Int_t	GetDimension() const;
virtual TDirectory*	GetDirectory() const;
   virtual   Double_t	GetEffectiveEntries() const;
    virtual  Double_t	GetEntries() const;
   
   virtual   Double_t*	GetIntegral();
    virtual  Double_t	GetKurtosis(Int_t axis = 1) const;
   virtual   Color_t	GetLabelColor(Option_t* axis = "X") const;
   virtual   Style_t	GetLabelFont(Option_t* axis = "X") const;
   virtual   Float_t	GetLabelOffset(Option_t* axis = "X") const;
   virtual   Float_t	GetLabelSize(Option_t* axis = "X") const;

   virtual  void	GetLowEdge(Double_t* edge) const;
   virtual   Double_t	GetMaximum(Double_t maxval = 3.40282347E+38F) const;
  virtual    Int_t	GetMaximumBin() const;
  virtual    Int_t	GetMaximumBin(Int_t& locmax, Int_t& locmay, Int_t& locmaz) const;
  virtual    Double_t	GetMaximumStored() const;
  
  virtual    Double_t	GetMeanError(Int_t axis = 1) const;
  virtual    Double_t	GetMinimum(Double_t minval = -3.40282347E+38F) const;
   virtual   Int_t	GetMinimumBin() const;
  virtual    Int_t	GetMinimumBin(Int_t& locmix, Int_t& locmiy, Int_t& locmiz) const;
  virtual    Double_t	GetMinimumStored() const;
  virtual    Int_t	GetNbinsX() const;
  virtual    Int_t	GetNbinsY() const;
  virtual    Int_t	GetNbinsZ() const;
  virtual    Int_t	GetNcells() const;
   virtual   Int_t	GetNdivisions(Option_t* axis = "X") const;
   virtual   Double_t	GetNormFactor() const;
   virtual   char*	GetObjectInfo(Int_t px, Int_t py) const;
    virtual  Option_t*	GetOption() const;
virtual TVirtualHistPainter*	GetPainter(Option_t* option = "");
   virtual   Int_t	GetQuantiles(Int_t nprobSum, Double_t* q, const Double_t* probSum = 0);
   virtual   Double_t	GetRandom() const;

virtual Double_t	GetRMSError(Int_t axis = 1) const;
   virtual   Double_t	GetSkewness(Int_t axis = 1) const;
   virtual   void	GetStats(Double_t* stats) const;
   virtual   Double_t	GetStdDev(Int_t axis = 1) const;
   virtual   Double_t	GetStdDevError(Int_t axis = 1) const;
   virtual   Double_t	GetSumOfWeights() const;
   virtual   TArrayD*	GetSumw2();
    virtual  const TArrayD*	GetSumw2() const;
    virtual  Int_t	GetSumw2N() const;
   virtual   Float_t	GetTickLength(Option_t* axis = "X") const;
   virtual   Style_t	GetTitleFont(Option_t* axis = "X") const;
   virtual   Float_t	GetTitleOffset(Option_t* axis = "X") const;
   virtual   Float_t	GetTitleSize(Option_t* axis = "X") const;

virtual TAxis*	GetZaxis();
virtual const TAxis*	GetZaxis() const;
  virtual    Double_t	Integral(Option_t* option = "") const;
   virtual   Double_t	Integral(Int_t binx1, Int_t binx2, Option_t* option = "") const;
   virtual   Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Double_t& err, Option_t* option = "") const;
    virtual  Double_t	Interpolate(Double_t x);
   virtual   Double_t	Interpolate(Double_t x, Double_t y);
   virtual   Double_t	Interpolate(Double_t x, Double_t y, Double_t z);
   virtual   TClass*	IsA() const;
virtual Bool_t	IsBinOverflow(Int_t bin) const;
virtual Bool_t	IsBinUnderflow(Int_t bin) const;
   virtual   Double_t	KolmogorovTest(const TH1* h2, Option_t* option = "") const;
   virtual   void	LabelsDeflate(Option_t* axis = "X");
   virtual   void	LabelsInflate(Option_t* axis = "X");
   virtual   void	LabelsOption(Option_t* option = "h", Option_t* axis = "X");
   
   virtual   Bool_t	Multiply(const TH1* h1);
   virtual   Bool_t	Multiply(TF1* h1, Double_t c1 = 1);
   virtual   Bool_t	Multiply(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = "");

  virtual    void	PutStats(Double_t* stats);
  virtual    TH1*	Rebin(Int_t ngroup = 2, const char* newname = "", const Double_t* xbins = 0);
   virtual   void	RebinAxis(Double_t x, TAxis* axis);
   //virtual   TH1*	RebinX(Int_t ngroup = 2, const char* newname = "");
   virtual   void	Rebuild(Option_t* option = "");

   virtual   void	Reset(Option_t* option = "");
  virtual    void	ResetStats();
   
   virtual   void	Scale(Double_t c1 = 1, Option_t* option = "");
   virtual   void	SetAxisColor(Color_t color = 1, Option_t* axis = "X");
   virtual   void	SetAxisRange(Double_t xmin, Double_t xmax, Option_t* axis = "X");
   virtual   void	SetBarOffset(Float_t offset = 0.25);
   virtual   void	SetBarWidth(Float_t width = 0.5);
   virtual   void	SetBinContent(Int_t bin, Double_t content);
   virtual   void	SetBinContent(Int_t bin, Int_t, Double_t content);
   virtual   void	SetBinContent(Int_t bin, Int_t, Int_t, Double_t content);
    virtual  void	SetBinError(Int_t bin, Double_t error);
    virtual  void	SetBinError(Int_t binx, Int_t biny, Double_t error);
    virtual void	SetBinError(Int_t binx, Int_t biny, Int_t binz, Double_t error);
    virtual void	SetBinErrorOption(TH1::EBinErrorOpt type);
     /*void	SetBins(Int_t nx, const Double_t* xBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax);
     void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax);
     void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins);
     void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax);*/
  virtual    void	SetBinsLength(Int_t = -1);
   virtual   void	SetBuffer(Int_t buffersize, Option_t* option = "");
   virtual   UInt_t	SetCanExtend(UInt_t extendBitMask);
   virtual   void	SetCellContent(Int_t binx, Int_t biny, Double_t content);
   virtual   void	SetCellError(Int_t binx, Int_t biny, Double_t content);
   virtual   void	SetContent(const Double_t* content);
   virtual   void	SetContour(Int_t nlevels, const Double_t* levels = 0);
  virtual    void	SetContourLevel(Int_t level, Double_t value);
virtual  void	SetDefaultBufferSize(Int_t buffersize = 1000);
virtual  void	SetDefaultSumw2(Bool_t sumw2 = kTRUE);
  virtual    void	SetDirectory(TDirectory* dir);
   virtual   void	SetEntries(Double_t n);
  virtual    void	SetError(const Double_t* error);
   virtual   void	SetLabelColor(Color_t color = 1, Option_t* axis = "X");
   virtual   void	SetLabelFont(Style_t font = 62, Option_t* axis = "X");
   virtual   void	SetLabelOffset(Float_t offset = 0.0050000000000000001, Option_t* axis = "X");
   virtual   void	SetLabelSize(Float_t size = 0.02, Option_t* axis = "X");

   virtual   void	SetName(const char* name);
   virtual   void	SetNameTitle(const char* name, const char* title);
   virtual   void	SetNdivisions(Int_t n = 510, Option_t* axis = "X");
  virtual    void	SetNormFactor(Double_t factor = 1);
  virtual    void	SetOption(Option_t* option = " ");
  virtual    void	SetStats(Bool_t stats = kTRUE);
   virtual   void	SetTickLength(Float_t length = 0.02, Option_t* axis = "X");
 
   virtual   void	SetTitleFont(Style_t font = 62, Option_t* axis = "X");
  virtual    void	SetTitleOffset(Float_t offset = 1, Option_t* axis = "X");
   virtual   void	SetTitleSize(Float_t size = 0.02, Option_t* axis = "X");
   virtual   void	SetXTitle(const char* title);
   virtual   void	SetYTitle(const char* title);
  virtual    void	SetZTitle(const char* title);
  virtual    TH1*	ShowBackground(Int_t niter = 20, Option_t* option = "same");
   virtual   void	ShowMembers(TMemberInspector& insp) const;
  virtual    Int_t	ShowPeaks(Double_t sigma = 2, Option_t* option = "", Double_t threshold = 0.050000000000000003);
  virtual    void	Smooth(Int_t ntimes = 1, Option_t* option = "");
virtual  void	SmoothArray(Int_t NN, Double_t* XX, Int_t ntimes = 1);
virtual  void	StatOverflows(Bool_t flag = kTRUE);
   virtual   void	Streamer(TBuffer&);
virtual void	StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b);
   virtual void	Sumw2(Bool_t flag = kTRUE);
virtual  TH1*	TransformHisto(TVirtualFFT* fft, TH1* h_output, Option_t* option);

  virtual void	DrawPanel();
    Double_t	GetMean(Int_t axis) const;

    Double_t	GetRMS(Int_t axis) const;

     virtual  TFitResultPtr	Fit(const char* formula, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0);
   virtual TF1*	GetFunction(const char* name) const;
      virtual  TFitResultPtr	Fit(TF1* f1, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0);
          virtual Double_t	Chisquare(TF1* f1, Option_t* option = "") const;
   
};
template class THistoCommon<TH1C>;
template class THistoCommon<TH1S>;
template class THistoCommon<TH1I>;
template class THistoCommon<TH1F>;
template class THistoCommon<TH1D>;
template class THistoCommon<TH2C>;
template class THistoCommon<TH2S>;
template class THistoCommon<TH2I>;
template class THistoCommon<TH2F>;
template class THistoCommon<TH2D>;
template class THistoCommon<TH3C>;
template class THistoCommon<TH3S>;
template class THistoCommon<TH3I>;
template class THistoCommon<TH3F>;
template class THistoCommon<TH3D>; 
template class THistoCommon<TProfile>; 
template class THistoCommon<TProfile2D>; 
template class THistoCommon<TProfile3D>;
#endif
