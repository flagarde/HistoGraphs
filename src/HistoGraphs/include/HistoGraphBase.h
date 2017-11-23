#ifndef HistoGraphBase_h
#define HistoGraphBase_h
#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TProfile3D.h"
#include "TGraph.h"
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
    //TH1  
    virtual Int_t	Fill(Double_t x)
    {
        return -1;std::cout<<"Error"<<std::endl;
    };
    virtual Int_t	Fill(Double_t x, Double_t w){
        return -1;std::cout<<"Error"<<std::endl;
    };
    virtual Int_t	Fill(const char* name, Double_t w){
        return -1;std::cout<<"Error"<<std::endl;
    };
    virtual void	FillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride = 1){
        std::cout<<"Error"<<std::endl;
    };
    virtual void	FillN(Int_t, const Double_t*, const Double_t*, const Double_t*, Int_t){
        std::cout<<"Error"<<std::endl;
    };
    virtual void	SetBins(Int_t nx, const Double_t* xBins){
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	SetBins(Int_t nx, Double_t xmin, Double_t xmax){
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins){
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax){
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins){
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax){
        std::cout<<"Error"<<std::endl;
    };
        ///////////////
    virtual Bool_t	Add(const TH1* h1, Double_t c1 = 1)
    {
        return false;
        std::cout<<"Error"<<std::endl;
    };
    virtual Bool_t	Add(TF1* h1, Double_t c1 = 1, Option_t* option = ""){
        return false;
        std::cout<<"Error"<<std::endl;
    };
    virtual Bool_t	Add(const TH1* h, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1){
        return false;
        std::cout<<"Error"<<std::endl;
    };
    virtual void	AddBinContent(Int_t bin){
        
        std::cout<<"Error"<<std::endl;
    };
    virtual void	AddBinContent(Int_t bin, Double_t w){
        
        std::cout<<"Error"<<std::endl;
    };
    virtual  void	AddDirectory(Bool_t add = kTRUE){
      
        std::cout<<"Error"<<std::endl;
    };
    virtual  Bool_t	AddDirectoryStatus(){
        return false;
        std::cout<<"Error"<<std::endl;
    };
    virtual Double_t	AndersonDarlingTest(const TH1* h2, Option_t* option = "") const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
    virtual Double_t	AndersonDarlingTest(const TH1* h2, Double_t& advalue) const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
    virtual void	Browse(TBrowser* b){
       
        std::cout<<"Error"<<std::endl;
    };
    virtual Int_t	BufferEmpty(Int_t action = 0){
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual  Bool_t	CanExtendAllAxes() const{
        return false;
        std::cout<<"Error"<<std::endl;
    };
   virtual  Double_t	Chi2Test(const TH1* h2, Option_t* option = "UU", Double_t* res = 0) const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
    virtual Double_t	Chi2TestX(const TH1* h2, Double_t& chi2, Int_t& ndf, Int_t& igood, Option_t* option = "UU", Double_t* res = 0) const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
   virtual Double_t	Chisquare(TF1* f1, Option_t* option = "") const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
   virtual  TClass*	Class(){
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	ClearUnderflowAndOverflow(){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual TObject*	Clone(const char* newname = 0) const{
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual Double_t	ComputeIntegral(Bool_t onlyPositive = false){
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	Copy(TObject& hnew) const{
       
        std::cout<<"Error"<<std::endl;
    };;
   virtual void	DirectoryAutoAdd(TDirectory*){
        
        std::cout<<"Error"<<std::endl;
    };
   virtual Int_t	DistancetoPrimitive(Int_t px, Int_t py){
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual Bool_t	Divide(const TH1* h1){
        return false;
        std::cout<<"Error"<<std::endl;
    };
   virtual Bool_t	Divide(TF1* f1, Double_t c1 = 1){
        return false;
        std::cout<<"Error"<<std::endl;
    };
   virtual Bool_t	Divide(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = ""){
        return false;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	Draw(Option_t* option = ""){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual TH1*	DrawCopy(Option_t* option = "", const char* name_postfix = "_copy") const{
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual TH1*	DrawNormalized(Option_t* option = "", Double_t norm = 1) const{
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	DrawPanel(){
        
        std::cout<<"Error"<<std::endl;
    };
   virtual void	Eval(TF1* f1, Option_t* option = ""){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual void	ExecuteEvent(Int_t event, Int_t px, Int_t py){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual void	ExtendAxis(Double_t x, TAxis* axis){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual TH1*	FFT(TH1* h_output, Option_t* option){
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	FillRandom(const char* fname, Int_t ntimes = 5000){
      
        std::cout<<"Error"<<std::endl;
    };
   virtual void	FillRandom(TH1* h, Int_t ntimes = 5000){
       
        std::cout<<"Error"<<std::endl;
    };
   virtual Int_t	FindBin(Double_t x, Double_t y = 0, Double_t z = 0){
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual Int_t	FindFirstBinAbove(Double_t threshold = 0, Int_t axis = 1) const{
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual Int_t	FindFixBin(Double_t x, Double_t y = 0, Double_t z = 0) const{
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual Int_t	FindLastBinAbove(Double_t threshold = 0, Int_t axis = 1) const{
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual TObject*	FindObject(const char* name) const{
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual TObject*	FindObject(const TObject* obj) const{
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
   virtual TFitResultPtr	Fit(const char* formula, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0){return TFitResultPtr(nullptr);};
   virtual TFitResultPtr	Fit(TF1* f1, Option_t* option = "", Option_t* goption = "", Double_t xmin = 0, Double_t xmax = 0){return TFitResultPtr(nullptr);};
   virtual Int_t	FitOptionsMake(Option_t* option, Foption_t& Foption){
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual void	FitPanel(){
        
        std::cout<<"Error"<<std::endl;
    };
    virtual TH1*	GetAsymmetry(TH1* h2, Double_t c2 = 1, Double_t dc2 = 0){
        return nullptr;
        std::cout<<"Error"<<std::endl;
    };
    virtual Color_t	GetAxisColor(Option_t* axis = "X") const{
        return -1;
        std::cout<<"Error"<<std::endl;
    };
   virtual  Float_t	GetBarOffset() const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
   virtual  Float_t	GetBarWidth() const{
        return -1.0;
        std::cout<<"Error"<<std::endl;
    };
   virtual  Int_t	GetBin(Int_t binx, Int_t biny = 0, Int_t binz = 0) const{return -1;};
   virtual  Double_t	GetBinCenter(Int_t bin) const{return -1.0;};
   virtual  Double_t	GetBinContent(Int_t bin) const{return -1.0;};
  virtual   Double_t	GetBinContent(Int_t bin, Int_t) const{return -1.0;};
  virtual   Double_t	GetBinContent(Int_t bin, Int_t, Int_t) const{return -1.0;};
   virtual  Double_t	GetBinError(Int_t bin) const{return -1.0;};
   virtual  Double_t	GetBinError(Int_t binx, Int_t biny) const{return -1.0;};
   virtual  Double_t	GetBinError(Int_t binx, Int_t biny, Int_t binz) const{return -1.0;};
   virtual  Double_t	GetBinErrorLow(Int_t bin) const{return -1.0;};
   virtual  TH1::EBinErrorOpt	GetBinErrorOption() const{return TH1::EBinErrorOpt();};
   virtual  Double_t	GetBinErrorUp(Int_t bin) const{return -1.0;};
   virtual  Double_t	GetBinLowEdge(Int_t bin) const{return -1.0;};
    virtual Double_t	GetBinWidth(Int_t bin) const{return -1.0;};
   virtual  Double_t	GetBinWithContent(Double_t c, Int_t& binx, Int_t firstx = 0, Int_t lastx = 0, Double_t maxdiff = 0) const{return -1.0;};
   virtual  void	GetBinXYZ(Int_t binglobal, Int_t& binx, Int_t& biny, Int_t& binz) const{};
  virtual  const Double_t*	GetBuffer() const{return nullptr;};
virtual Int_t	GetBufferLength() const{return -1;};
virtual Int_t	GetBufferSize() const{return -1;};
  virtual   Double_t	GetCellContent(Int_t binx, Int_t biny) const{return -1.0;};
  virtual   Double_t	GetCellError(Int_t binx, Int_t biny) const{return -1.0;};
  virtual   void	GetCenter(Double_t* center) const{};
    virtual Int_t	GetContour(Double_t* levels = 0){return -1;};
   virtual  Double_t	GetContourLevel(Int_t level) const{return -1.0;};
   virtual  Double_t	GetContourLevelPad(Int_t level) const{return -1.0;};
virtual TH1*	GetCumulative(Bool_t forward = kTRUE, const char* suffix = "_cumulative") const{return nullptr;};

   virtual  Int_t	GetDimension() const{return -1;};
virtual  TDirectory*	GetDirectory() const{return nullptr;};
   virtual  Double_t	GetEffectiveEntries() const{return -1.0;};
   virtual  Double_t	GetEntries() const{return -1.0;};
  virtual   TF1*	GetFunction(const char* name) const{return nullptr;};
   virtual  Double_t*	GetIntegral(){return nullptr;};
  virtual   Double_t	GetKurtosis(Int_t axis = 1) const{return -1.0;};
   virtual  Color_t	GetLabelColor(Option_t* axis = "X") const{return -1.0;};
   virtual  Style_t	GetLabelFont(Option_t* axis = "X") const{return -1.0;};
   virtual  Float_t	GetLabelOffset(Option_t* axis = "X") const{return -1.0;};
   virtual  Float_t	GetLabelSize(Option_t* axis = "X") const{return -1.0;};
 virtual  TList*	GetListOfFunctions() const{return nullptr;};
   virtual  void	GetLowEdge(Double_t* edge) const{};
  virtual   Double_t	GetMaximum(Double_t maxval = 3.40282347E+38F) const{return -1.0;};
  virtual   Int_t	GetMaximumBin() const{return -1;};
   virtual  Int_t	GetMaximumBin(Int_t& locmax, Int_t& locmay, Int_t& locmaz) const{return -1;};
   virtual  Double_t	GetMaximumStored() const{return -1.0;};
   virtual  Double_t	GetMean(Int_t axis = 1) const{return -1.0;};
   virtual  Double_t	GetMeanError(Int_t axis = 1) const{return -1.0;};
   virtual  Double_t	GetMinimum(Double_t minval = -3.40282347E+38F) const{return -1.0;};
   virtual  Int_t	GetMinimumBin() const{return -1;};
    virtual Int_t	GetMinimumBin(Int_t& locmix, Int_t& locmiy, Int_t& locmiz) const{return -1;};
   virtual Double_t	GetMinimumStored() const{return -1.0;};
   virtual Int_t	GetNbinsX() const{return -1;};
   virtual  Int_t	GetNbinsY() const{return -1;};
    virtual Int_t	GetNbinsZ() const{return -1;};
   virtual  Int_t	GetNcells() const{return -1;};
   virtual  Int_t	GetNdivisions(Option_t* axis = "X") const{return -1;};
   virtual  Double_t	GetNormFactor() const{return -1.0;};
   virtual  char*	GetObjectInfo(Int_t px, Int_t py) const{return nullptr;};
   virtual  Option_t*	GetOption() const{return nullptr;};
  virtual TVirtualHistPainter*	GetPainter(Option_t* option = ""){return nullptr;};
  virtual   Int_t	GetQuantiles(Int_t nprobSum, Double_t* q, const Double_t* probSum = 0){return -1;};
   virtual   Double_t	GetRandom() const{return -1.0;};
   virtual Double_t	GetRMS(Int_t axis = 1) const{return -1.0;};
 virtual Double_t	GetRMSError(Int_t axis = 1) const{return -1.0;};
    virtual Double_t	GetSkewness(Int_t axis = 1) const{return -1.0;};
   virtual  void	GetStats(Double_t* stats) const{};
    virtual Double_t	GetStdDev(Int_t axis = 1) const{return -1.0;};
   virtual Double_t	GetStdDevError(Int_t axis = 1) const{return -1.0;};
   virtual  Double_t	GetSumOfWeights() const{return -1.0;};
    virtual TArrayD*	GetSumw2(){return nullptr;};
    virtual const TArrayD*	GetSumw2() const{return nullptr;};
    virtual Int_t	GetSumw2N() const{return -1;};
   virtual  Float_t	GetTickLength(Option_t* axis = "X") const{return -1.0;};
    virtual Style_t	GetTitleFont(Option_t* axis = "X") const{return -1.0;};
    virtual Float_t	GetTitleOffset(Option_t* axis = "X") const{return -1.0;};
   virtual  Float_t	GetTitleSize(Option_t* axis = "X") const{return -1.0;};
 virtual  TAxis*	GetXaxis(){return nullptr;};
 virtual  const TAxis*	GetXaxis() const{return nullptr;};
  virtual TAxis*	GetYaxis(){return nullptr;};
 virtual const TAxis*	GetYaxis() const{return nullptr;};
 virtual TAxis*	GetZaxis(){return nullptr;};
virtual const TAxis*	GetZaxis() const{return nullptr;};
   virtual  Double_t	Integral(Option_t* option = "") const{return -1.0;};
   virtual  Double_t	Integral(Int_t binx1, Int_t binx2, Option_t* option = "") const{return -1.0;};
  virtual   Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Double_t& err, Option_t* option = "") const{return -1.0;};
   virtual  Double_t	Interpolate(Double_t x){return -1.0;};
   virtual  Double_t	Interpolate(Double_t x, Double_t y){return -1.0;};
   virtual  Double_t	Interpolate(Double_t x, Double_t y, Double_t z){return -1.0;};
   virtual  TClass*	IsA() const{return nullptr;};
virtual Bool_t	IsBinOverflow(Int_t bin) const{return false;};
virtual Bool_t	IsBinUnderflow(Int_t bin) const{return false;};
  virtual   Double_t	KolmogorovTest(const TH1* h2, Option_t* option = "") const{return -1.0;};
   virtual  void	LabelsDeflate(Option_t* axis = "X"){};
    virtual void	LabelsInflate(Option_t* axis = "X"){};
   virtual  void	LabelsOption(Option_t* option = "h", Option_t* axis = "X"){};
   virtual  Long64_t	Merge(TCollection* list){return -1.0;};
    virtual Bool_t	Multiply(const TH1* h1){return false;};
   virtual  Bool_t	Multiply(TF1* h1, Double_t c1 = 1){return false;};
   virtual  Bool_t	Multiply(const TH1* h1, const TH1* h2, Double_t c1 = 1, Double_t c2 = 1, Option_t* option = ""){return false;};
   virtual  void	Paint(Option_t* option = ""){};
   virtual  void	Print(Option_t* option = "") const{};
   virtual  void	PutStats(Double_t* stats){};
   virtual  TH1*	Rebin(Int_t ngroup = 2, const char* newname = "", const Double_t* xbins = 0){return nullptr;};
   virtual  void	RebinAxis(Double_t x, TAxis* axis){};
   TH1*	RebinX(Int_t ngroup = 2, const char* newname = "",TH1* a=nullptr){return a->RebinX(ngroup,newname);};
   TH2*	RebinX(Int_t ngroup = 2, const char* newname = "",TH2* a=nullptr){return a->RebinX(ngroup,newname);};
   TH3*	RebinX(Int_t ngroup = 2, const char* newname = "",TH3* a=nullptr){return a->RebinX(ngroup,newname);};
  //TProfile*	RebinX(Int_t ngroup = 2, const char* newname = "",TProfile* a=nullptr){return a->RebinX(ngroup,newname);};
   TProfile2D*	RebinX(Int_t ngroup = 2, const char* newname = "",TProfile2D* a=nullptr){return a->RebinX(ngroup,newname);};
   //TProfile3D*	RebinX(Int_t ngroup = 2, const char* newname = "",TProfile3D* a=nullptr){return a->RebinX(ngroup,newname);};
   TH2*	RebinY(Int_t ngroup = 2, const char* newname = "",TH2* a=nullptr){return a->RebinY(ngroup,newname);};
   TH3*	RebinY(Int_t ngroup = 2, const char* newname = "",TH3* a=nullptr){return a->RebinY(ngroup,newname);};
   TProfile2D*	RebinY(Int_t ngroup = 2, const char* newname = "",TProfile2D* a=nullptr){return a->RebinY(ngroup,newname);};
  //TProfile3D*	RebinY(Int_t ngroup = 2, const char* newname = "",TProfile3D* a=nullptr){return a->RebinY(ngroup,newname);};
    TH3*	RebinZ(Int_t ngroup = 2, const char* newname = "",TH3* a=nullptr){return a->RebinZ(ngroup,newname);};
  // TProfile3D*	RebinZ(Int_t ngroup = 2, const char* newname = "",TProfile3D* a=nullptr){return a->RebinZ(ngroup,newname);};
   virtual  void	Rebuild(Option_t* option = ""){};
    virtual void	RecursiveRemove(TObject* obj){};
    virtual void	Reset(Option_t* option = ""){};
    virtual void	ResetStats(){};
    virtual void	SavePrimitive(std::ostream& out, Option_t* option = ""){};
    virtual void	Scale(Double_t c1 = 1, Option_t* option = ""){};
    virtual void	SetAxisColor(Color_t color = 1, Option_t* axis = "X"){};
    virtual void	SetAxisRange(Double_t xmin, Double_t xmax, Option_t* axis = "X"){};
    virtual void	SetBarOffset(Float_t offset = 0.25){};
    virtual void	SetBarWidth(Float_t width = 0.5){};
    virtual void	SetBinContent(Int_t bin, Double_t content){};
    virtual void	SetBinContent(Int_t bin, Int_t, Double_t content){};
    virtual void	SetBinContent(Int_t bin, Int_t, Int_t, Double_t content){};
    virtual void	SetBinError(Int_t bin, Double_t error){};
    virtual void	SetBinError(Int_t binx, Int_t biny, Double_t error){};
   virtual  void	SetBinError(Int_t binx, Int_t biny, Int_t binz, Double_t error){};
    virtual void	SetBinErrorOption(TH1::EBinErrorOpt type){};

    virtual void	SetBinsLength(Int_t = -1){};
  virtual   void	SetBuffer(Int_t buffersize, Option_t* option = ""){};
   virtual  UInt_t	SetCanExtend(UInt_t extendBitMask){return 0;};
   virtual  void	SetCellContent(Int_t binx, Int_t biny, Double_t content){};
  virtual   void	SetCellError(Int_t binx, Int_t biny, Double_t content){};
  virtual   void	SetContent(const Double_t* content){};
   virtual  void	SetContour(Int_t nlevels, const Double_t* levels = 0){};
   virtual  void	SetContourLevel(Int_t level, Double_t value){};
   virtual  void	SetDirectory(TDirectory* dir){};
    virtual void	SetEntries(Double_t n){};
   virtual  void	SetError(const Double_t* error){};
   virtual  void	SetLabelColor(Color_t color = 1, Option_t* axis = "X"){};
   virtual  void	SetLabelFont(Style_t font = 62, Option_t* axis = "X"){};
   virtual  void	SetLabelOffset(Float_t offset = 0.0050000000000000001, Option_t* axis = "X"){};
   virtual  void	SetLabelSize(Float_t size = 0.02, Option_t* axis = "X"){};
   virtual  void	SetMaximum(Double_t maximum = -1111){};
    virtual void	SetMinimum(Double_t minimum = -1111){};
  virtual   void	SetName(const char* name){};
   virtual  void	SetNameTitle(const char* name, const char* title){};
    virtual void	SetNdivisions(Int_t n = 510, Option_t* axis = "X"){};
  virtual   void	SetNormFactor(Double_t factor = 1){};
  virtual   void	SetOption(Option_t* option = " "){};
  virtual   void	SetStats(Bool_t stats = kTRUE){};
   virtual  void	SetTickLength(Float_t length = 0.02, Option_t* axis = "X"){};
   virtual  void	SetTitle(const char* title){};
   virtual  void	SetTitleFont(Style_t font = 62, Option_t* axis = "X"){};
   virtual  void	SetTitleOffset(Float_t offset = 1, Option_t* axis = "X"){};
    virtual void	SetTitleSize(Float_t size = 0.02, Option_t* axis = "X"){};
    virtual void	SetXTitle(const char* title){};
    virtual void	SetYTitle(const char* title){};
    virtual void	SetZTitle(const char* title){};
    virtual TH1*	ShowBackground(Int_t niter = 20, Option_t* option = "same"){return nullptr;};
    virtual void	ShowMembers(TMemberInspector& insp) const{};
   virtual  Int_t	ShowPeaks(Double_t sigma = 2, Option_t* option = "", Double_t threshold = 0.050000000000000003){return -1;};
   virtual   void	Smooth(Int_t ntimes = 1, Option_t* option = ""){};
virtual void	SmoothArray(Int_t NN, Double_t* XX, Int_t ntimes = 1){};
virtual  void	StatOverflows(Bool_t flag = kTRUE){};
   virtual  void	Streamer(TBuffer&){};
 virtual void	StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b){};
 virtual    void	Sumw2(Bool_t flag = kTRUE){};
 virtual TH1*	TransformHisto(TVirtualFFT* fft, TH1* h_output, Option_t* option){return nullptr;};
  virtual   void	UseCurrentStyle(){};
      virtual Int_t	GetDefaultBufferSize(){return -1;};
virtual Bool_t	GetDefaultSumw2(){return false;};
virtual void	SetDefaultBufferSize(Int_t buffersize = 1000){};
virtual void	SetDefaultSumw2(Bool_t sumw2 = kTRUE){};


///TH2



    virtual Int_t	Fill(Double_t x, Double_t y, Double_t w){return -1;};
    virtual Int_t	Fill(Double_t x, const char* namey, Double_t w){return -1;};
    virtual Int_t	Fill(const char* namex, Double_t y, Double_t w){return -1;};
    virtual void	FitSlicesX(TF1* f1 = 0, Int_t firstybin = 0, Int_t lastybin = -1, Int_t cut = 0, Option_t* option = "QNR", TObjArray* arr = 0){};
    virtual void	FitSlicesY(TF1* f1 = 0, Int_t firstxbin = 0, Int_t lastxbin = -1, Int_t cut = 0, Option_t* option = "QNR", TObjArray* arr = 0){};
    virtual Double_t	GetBinErrorLow(Int_t binx, Int_t biny){return -1.0;};
    virtual Double_t	GetBinErrorUp(Int_t binx, Int_t biny){return -1.0;};
    virtual Double_t	GetBinWithContent2(Double_t c, Int_t& binx, Int_t& biny, Int_t firstxbin = 1, Int_t lastxbin = -1, Int_t firstybin = 1, Int_t lastybin = -1, Double_t maxdiff = 0) const{return -1.0;};
    virtual Double_t	GetCorrelationFactor(Int_t axis1 = 1, Int_t axis2 = 2) const{return -1.0;};
    virtual Double_t	GetCovariance(Int_t axis1 = 1, Int_t axis2 = 2) const{return -1.0;};
    virtual void	GetRandom2(Double_t& x, Double_t& y){};
    virtual Double_t	Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Option_t* option = "") const{return -1.0;};
    virtual Double_t	Integral(Int_t a, Int_t b, Int_t c, Int_t d, Int_t e, Int_t f, Option_t* option = "") const{return -1.0;};
    virtual Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Double_t& err, Option_t* option = "") const{return -1.0;};
    TProfile*	ProfileX(const char* name = "_pfx", Int_t firstybin = 1, Int_t lastybin = -1, Option_t* option = "") const{return nullptr;};
    TProfile*	ProfileY(const char* name = "_pfy", Int_t firstxbin = 1, Int_t lastxbin = -1, Option_t* option = "") const{return nullptr;};
    TH1D*	ProjectionX(const char* name = "_px", Int_t firstybin = 0, Int_t lastybin = -1, Option_t* option = "") const{return nullptr;};
    TH1D*	ProjectionY(const char* name = "_py", Int_t firstxbin = 0, Int_t lastxbin = -1, Option_t* option = "") const{return nullptr;};
    TH1D*	QuantilesX(Double_t prob = 0.5, const char* name = "_qx") const{return nullptr;};
    TH1D*	QuantilesY(Double_t prob = 0.5, const char* name = "_qy") const{return nullptr;};
    TH2*	Rebin2D(Int_t nxgroup = 2, Int_t nygroup = 2, const char* newname = "",TH2* a=nullptr){return a->Rebin2D(nxgroup,nygroup,newname);};
    TProfile2D*	Rebin2D(Int_t nxgroup = 2, Int_t nygroup = 2, const char* newname = "",TProfile2D* a=nullptr){return a->Rebin2D(nxgroup,nygroup,newname);};
    virtual void	SetShowProjectionX(Int_t nbins = 1){};
    virtual void	SetShowProjectionY(Int_t nbins = 1){};


///TH3
virtual Int_t	Fill(Double_t x, Double_t y, Double_t z, Double_t w){return -1;};
virtual Int_t	Fill(const char* namex, const char* namey, const char* namez, Double_t w){return -1;};
virtual Int_t	Fill(const char* namex, Double_t y, const char* namez, Double_t w){return -1;};
virtual Int_t	Fill(const char* namex, const char* namey, Double_t z, Double_t w){return -1;};
virtual Int_t	Fill(Double_t x, const char* namey, const char* namez, Double_t w){return -1;};
virtual Int_t	Fill(Double_t x, const char* namey, Double_t z, Double_t w){return -1;};
virtual Int_t	Fill(Double_t x, Double_t y, const char* namez, Double_t w){return -1;};
virtual void	FitSlicesZ(TF1* f1 = 0, Int_t binminx = 1, Int_t binmaxx = 0, Int_t binminy = 1, Int_t binmaxy = 0, Int_t cut = 0, Option_t* option = "QNR"){};
virtual Double_t	GetBinErrorLow(Int_t binx, Int_t biny, Int_t binz){return -1.0;};
virtual Double_t	GetBinErrorUp(Int_t binx, Int_t biny, Int_t binz){return -1.0;};
virtual Double_t	GetBinWithContent3(Double_t c, Int_t& binx, Int_t& biny, Int_t& binz, Int_t firstx = 0, Int_t lastx = 0, Int_t firsty = 0, Int_t lasty = 0, Int_t firstz = 0, Int_t lastz = 0, Double_t maxdiff = 0) const{return -1.0;};
virtual void	GetRandom3(Double_t& x, Double_t& y, Double_t& z){};
//virtual TH3*	RebinY(Int_t ngroup = 2, const char* newname = ""){return nullptr;};
TH1*	Project3D(Option_t* option = "x") const{return nullptr;};
virtual TProfile2D*	Project3DProfile(Option_t* option = "xy") const{return nullptr;};
TH1D*	ProjectionX(const char* name = "_px", Int_t iymin = 0, Int_t iymax = -1, Int_t izmin = 0, Int_t izmax = -1, Option_t* option = "") const{return nullptr;};
TH1D*	ProjectionY(const char* name = "_py", Int_t ixmin = 0, Int_t ixmax = -1, Int_t izmin = 0, Int_t izmax = -1, Option_t* option = "") const{return nullptr;};
TH1D*	ProjectionZ(const char* name = "_pz", Int_t ixmin = 0, Int_t ixmax = -1, Int_t iymin = 0, Int_t iymax = -1, Option_t* option = "") const{return nullptr;};
virtual TH3*	Rebin3D(Int_t nxgroup = 2, Int_t nygroup = 2, Int_t nzgroup = 2, const char* newname = ""){return nullptr;};
//virtual TH3*	RebinZ(Int_t ngroup = 2, const char* newname = ""){return nullptr;};
virtual void	SetShowProjection(const char* option = "xy", Int_t nbins = 1){};

//TProfile
void 	BuildOptions (Double_t ymin, Double_t ymax, Option_t *option){};
virtual Double_t 	GetBinEffectiveEntries (Int_t bin) const{return -1.0;};
virtual Double_t 	GetBinEntries (Int_t bin) const{return -1.0;};
virtual TArrayD * 	GetBinSumw2 (){return nullptr;};
virtual const TArrayD * 	GetBinSumw2 () const{return nullptr;};
Option_t * 	GetErrorOption () const{return nullptr;};
virtual Double_t 	GetYmax () const{return -1.0;};
virtual Double_t 	GetYmin () const{return -1.0;};
TH1D * 	ProjectionX (const char *name="_px", Option_t *option="e") const{return nullptr;};
virtual void 	SetBinEntries (Int_t bin, Double_t w){};
virtual void 	SetErrorOption (Option_t *option=""){};
virtual void 	Approximate (Bool_t approx=kTRUE){};
//TProfile2D
virtual Double_t 	GetBinEffectiveEntries (Int_t bin){return -1.0;};
Double_t 	GetNumberOfBins (){return -1.0;};
virtual Double_t 	GetZmax () const{return -1.0;};
virtual Double_t 	GetZmin () const{return -1.0;};
TH2D * 	ProjectionXY (const char *name="_pxy", Option_t *option="e") const{return nullptr;};
//TProfile3D
virtual Double_t 	GetTmax () const{return -1;};
virtual Double_t 	GetTmin () const{return -1;};
virtual TH3D * 	ProjectionXYZ (const char *name="_pxyz", Option_t *option="e") const{return nullptr;};


///TGraph
    virtual void 	Apply (TF1 *f){};
virtual void 	ComputeRange (Double_t &xmin, Double_t &ymin, Double_t &xmax, Double_t &ymax) const{};
virtual void 	DrawGraph (Int_t n, const Int_t *x, const Int_t *y, Option_t *option=""){};
virtual void 	DrawGraph (Int_t n, const Float_t *x, const Float_t *y, Option_t *option=""){};
virtual void 	DrawGraph (Int_t n, const Double_t *x=0, const Double_t *y=0, Option_t *option=""){};
virtual Double_t 	Eval (Double_t x, TSpline *spline=0, Option_t *option="") const{return -1.0;};
virtual void 	Expand (Int_t newsize){};
virtual void 	Expand (Int_t newsize, Int_t step){};
virtual Double_t 	GetCorrelationFactor () const{return -1.0;};
virtual Double_t 	GetCovariance () const{return -1.0;};
virtual Bool_t 	GetEditable () const{return false;};
virtual Double_t 	GetErrorX (Int_t bin) const{return -1.0;};
virtual Double_t 	GetErrorXhigh (Int_t bin) const {return -1.0;};
virtual Double_t 	GetErrorXlow (Int_t bin) const{return -1.0;};
virtual Double_t 	GetErrorY (Int_t bin) const{return -1.0;};
virtual Double_t 	GetErrorYhigh (Int_t bin) const{return -1.0;};
virtual Double_t 	GetErrorYlow (Int_t bin) const{return -1.0;};
virtual Double_t * 	GetEX () const{return nullptr;};
virtual Double_t * 	GetEXhigh () const{return nullptr;};
virtual Double_t * 	GetEXhighd () const{return nullptr;};
virtual Double_t * 	GetEXlow () const{return nullptr;};
virtual Double_t * 	GetEXlowd () const{return nullptr;};
virtual Double_t * 	GetEY () const{return nullptr;};
virtual Double_t * 	GetEYhigh () const{return nullptr;};
virtual Double_t * 	GetEYhighd () const{return nullptr;};
virtual Double_t * 	GetEYlow () const{return nullptr;};
virtual Double_t * 	GetEYlowd () const{return nullptr;};
virtual TH1F * 	GetHistogram () const{return nullptr;};
virtual Double_t 	GetMaximum () const{return -1.0;};
virtual Int_t 	GetMaxSize () const{return -1;};
virtual Double_t 	GetMinimum () const{return -1.0;};
virtual Int_t 	GetN () const{return -1;};
virtual Int_t 	GetPoint (Int_t i, Double_t &x, Double_t &y) const{return -1;};
virtual Double_t * 	GetX () const{return nullptr;};
virtual Double_t * 	GetY () const{return nullptr;};
virtual void 	InitExpo (Double_t xmin=0, Double_t xmax=0){};
virtual void 	InitGaus (Double_t xmin=0, Double_t xmax=0){};
virtual void 	InitPolynom (Double_t xmin=0, Double_t xmax=0){};
virtual Int_t 	InsertPoint (){return -1;};
virtual void 	InsertPointBefore (Int_t ipoint, Double_t x, Double_t y){};
virtual Double_t 	Integral (Int_t first=0, Int_t last=-1) const{return -1.0;};
virtual Bool_t 	IsEditable () const{return false;};
virtual Int_t 	IsInside (Double_t x, Double_t y) const{return -1;};
virtual void 	LeastSquareFit (Int_t m, Double_t *a, Double_t xmin=0, Double_t xmax=0){};
virtual void 	LeastSquareLinearFit (Int_t n, Double_t &a0, Double_t &a1, Int_t &ifail, Double_t xmin=0, Double_t xmax=0){};
virtual void 	PaintGraph (Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt){};
virtual void 	PaintGrapHist (Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt){};
virtual void 	PaintStats (TF1 *fit){};
virtual Int_t 	RemovePoint (){return -1;};
virtual Int_t 	RemovePoint (Int_t ipoint){return -1;};
virtual void 	Set (Int_t n){};
virtual void 	SetEditable (Bool_t editable=kTRUE){};
virtual void 	SetHistogram (TH1F *h){};
virtual void 	SetPoint (Int_t i, Double_t x, Double_t y){};
virtual void 	Sort (Bool_t(*greater)(const TGraph *, Int_t, Int_t)=&TGraph::CompareX, Bool_t ascending=kTRUE, Int_t low=0, Int_t high=-1111){};
virtual void 	Zero (Int_t &k, Double_t AZ, Double_t BZ, Double_t E2, Double_t &X, Double_t &Y, Int_t maxiterations){};
virtual Bool_t 	CompareArg (const TGraph *gr, Int_t left, Int_t right){return false;};
virtual Bool_t 	CompareRadius (const TGraph *gr, Int_t left, Int_t right){return false;};
virtual Bool_t 	CompareX (const TGraph *gr, Int_t left, Int_t right){return false;};
virtual Bool_t 	CompareY (const TGraph *gr, Int_t left, Int_t right){return false;};

    virtual ~HistoGraphBase();
};
#endif
