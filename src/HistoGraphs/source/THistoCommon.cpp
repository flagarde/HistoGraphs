#include "THistoCommon.h"

template <typename T>
void THistoCommon<T>::Detach()
{
  this->p_histograph->SetDirectory(nullptr);
}

template <typename T>
Bool_t THistoCommon<T>::Add(TF1 *h1,Double_t c1,Option_t* option)
{
  return this->p_histograph->Add(h1,c1,option);
} 

template <typename T>
Bool_t THistoCommon<T>::Add(const TH1 *h1, Double_t c1)
{
  return this->p_histograph->Add(h1,c1);
} 

template <typename T>
Bool_t THistoCommon<T>::Add(const TH1 *h, const TH1 *h2, Double_t c1, Double_t c2)
{
  return this->p_histograph->Add(h,h2,c1,c2);
} 

template <typename T>
void 	THistoCommon<T>::AddBinContent(Int_t bin)
{
  this->p_histograph->AddBinContent(bin);
} 

template <typename T>
void 	THistoCommon<T>::AddBinContent(Int_t bin, Double_t w)
{
  this->p_histograph->AddBinContent(bin,w);
} 

template <typename T>
void	THistoCommon<T>::AddDirectory(Bool_t add)
{
    TH1::AddDirectory(add);
}

template <typename T>
Bool_t	THistoCommon<T>::AddDirectoryStatus()
{
    return TH1::AddDirectoryStatus();
}

template <typename T>
Double_t	THistoCommon<T>::AndersonDarlingTest(const TH1* h2, Option_t* option) const
{
  return  this->p_histograph->AndersonDarlingTest(h2,option);
}

template <typename T>
Double_t	THistoCommon<T>::AndersonDarlingTest(const TH1* h2, Double_t& advalue) const
{
   return this->p_histograph->AndersonDarlingTest(h2,advalue);
}

template <typename T>
void	THistoCommon<T>::Browse(TBrowser* b)
{
    this->p_histograph->Browse(b);
}














template <typename T>
Int_t	THistoCommon<T>::BufferEmpty(Int_t action)
{
  return this->p_histograph->BufferEmpty(action);
} 

template <typename T>
Bool_t	THistoCommon<T>::CanExtendAllAxes() const
{
  return this->p_histograph->CanExtendAllAxes();
} 

template <typename T>
Double_t	THistoCommon<T>::Chi2Test(const TH1* h2, Option_t* option, Double_t* res) const
{
  return this->p_histograph->Chi2Test(h2,option,res);
} 

template <typename T>
Double_t	THistoCommon<T>::Chi2TestX(const TH1* h2, Double_t& chi2, Int_t& ndf, Int_t& igood, Option_t* option, Double_t* res) const
{
  return this->p_histograph->Chi2TestX(h2,chi2,ndf,igood,option,res);
} 

template <typename T>
Double_t	THistoCommon<T>::Chisquare(TF1* f1, Option_t* option) const
{
  return this->p_histograph->Chisquare(f1,option);
} 


template <typename T>
TClass*	THistoCommon<T>::Class()
{
  return TH1::Class();
} 


template <typename T>
void	THistoCommon<T>::ClearUnderflowAndOverflow()
{
  this->p_histograph->ClearUnderflowAndOverflow();
} 

template <typename T>
TObject*	THistoCommon<T>::Clone(const char* newname) const
{
  return this->p_histograph->Clone(newname);
} 

template <typename T>
Double_t	THistoCommon<T>::ComputeIntegral(Bool_t onlyPositive)
{
  return this->p_histograph->ComputeIntegral(onlyPositive);
} 

template <typename T>
void	THistoCommon<T>::Copy(TObject& hnew) const
{
  this->p_histograph->Copy(hnew);
} 

template <typename T>
void	THistoCommon<T>::DirectoryAutoAdd(TDirectory* dir)
{
  this->p_histograph->DirectoryAutoAdd(dir);
} 

template <typename T>
Int_t	THistoCommon<T>::DistancetoPrimitive(Int_t px, Int_t py)
{
  return this->p_histograph->DistancetoPrimitive(px,py);
} 

template <typename T>
Bool_t	THistoCommon<T>::Divide(const TH1* h1)
{
  return this->p_histograph->Divide(h1);
} 

template <typename T>
Bool_t	THistoCommon<T>::Divide(TF1* f1, Double_t c1)
{
  return this->p_histograph->Divide(f1,c1);
} 

template <typename T>
Bool_t	THistoCommon<T>::Divide(const TH1* h1, const TH1* h2, Double_t c1, Double_t c2, Option_t* option)
{
  return this->p_histograph->Divide(h1,h2,c1,c2,option);
} 
template <typename T>
void	THistoCommon<T>::Draw(Option_t* option)
{
  this->p_histograph->Draw(option);
} 

template <typename T>
TH1*	THistoCommon<T>::DrawCopy(Option_t* option, const char* name_postfix) const
{
  return this->p_histograph->DrawCopy(option,name_postfix);
} 
    
template <typename T>
TH1*	THistoCommon<T>::DrawNormalized(Option_t* option, Double_t norm) const
{
  return this->p_histograph->DrawNormalized(option,norm);
} 

template <typename T>
void	THistoCommon<T>::DrawPanel()
{
  this->p_histograph->DrawPanel();
} 

template <typename T>
void	THistoCommon<T>::Eval(TF1* f1, Option_t* option)
{
  this->p_histograph->Eval(f1,option);
} 

template <typename T>
void	THistoCommon<T>::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
  this->p_histograph->ExecuteEvent(event,px,py);
} 
template <typename T>
void	THistoCommon<T>::ExtendAxis(Double_t x, TAxis* axis)
{
  this->p_histograph->ExtendAxis(x,axis);
} 
template <typename T>
TH1*	THistoCommon<T>::FFT(TH1* h_output, Option_t* option)
{
  return this->p_histograph->FFT(h_output,option);
} 
/*template <typename T>
Int_t	THistoCommon<T>::Fill(Double_t x)
{
  return this->p_histograph->Fill(x);
} 

template <typename T>
Int_t	THistoCommon<T>::Fill(Double_t x, Double_t w)
{
  return this->p_histograph->Fill(x,w);
} 
template <typename T>
Int_t	THistoCommon<T>::Fill(const char* name, Double_t w)
{
  return this->p_histograph->Fill(name,w);
} */
/*template <typename T>
void	THistoCommon<T>::FillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride)
{
  this->p_histograph->FillN(ntimes,x,w,stride);
} */
/*template <typename T>
void	THistoCommon<T>::FillN(Int_t ntimes , const Double_t* x, const Double_t* y, const Double_t* w, Int_t stride)
{
  this->p_histograph->FillN(ntimes,x,w,stride);
} */
template <typename T>
void	THistoCommon<T>::FillRandom(const char* fname, Int_t ntimes)
{
  this->p_histograph->FillRandom(fname,ntimes);
} 
template <typename T>
void	THistoCommon<T>::FillRandom(TH1* h, Int_t ntimes)
{
  this->p_histograph->FillRandom(h,ntimes);
} 
template <typename T>
Int_t	THistoCommon<T>::FindBin(Double_t x, Double_t y, Double_t z)
{
  return this->p_histograph->FindBin(x,y,z);
} 
template <typename T>
Int_t	THistoCommon<T>::FindFirstBinAbove(Double_t threshold, Int_t axis) const
{
  return this->p_histograph->FindFirstBinAbove(threshold,axis);
} 
template <typename T>
Int_t	THistoCommon<T>::FindFixBin(Double_t x, Double_t y, Double_t z) const
{
  return this->p_histograph->FindFixBin(x,y,z);
} 
template <typename T>
Int_t	THistoCommon<T>::FindLastBinAbove(Double_t threshold, Int_t axis) const
{
  return this->p_histograph->FindLastBinAbove(threshold,axis);
} 
template <typename T>
TObject*	THistoCommon<T>::FindObject(const char* name) const
{
  return this->p_histograph->FindObject(name);
} 
template <typename T>
TObject*	THistoCommon<T>::FindObject(const TObject* obj) const
{
  return this->p_histograph->FindObject(obj);
} 
template <typename T>
TFitResultPtr	THistoCommon<T>::Fit(const char* formula, Option_t* option, Option_t* goption, Double_t xmin, Double_t xmax)
{
  return this->p_histograph->Fit(formula,option,goption,xmin,xmax);
} 
template <typename T>
TFitResultPtr	THistoCommon<T>::Fit(TF1* f1, Option_t* option, Option_t* goption, Double_t xmin, Double_t xmax)
{
  return this->p_histograph->Fit(f1,option,goption,xmin,xmax);
} 
template <typename T>
Int_t	THistoCommon<T>::FitOptionsMake(Option_t* option, Foption_t& Foption)
{
  return this->p_histograph->FitOptionsMake(option,Foption);
} 
template <typename T>
void	THistoCommon<T>::FitPanel()
{
  this->p_histograph->FitPanel();
} 
template <typename T>
TH1*	THistoCommon<T>::GetAsymmetry(TH1* h2, Double_t c2, Double_t dc2)
{
  return this->p_histograph->GetAsymmetry(h2,c2,dc2);
} 
template <typename T>
Color_t	THistoCommon<T>::GetAxisColor(Option_t* axis) const
{
  return this->p_histograph->GetAxisColor(axis);
} 
template <typename T>
Float_t	THistoCommon<T>::GetBarOffset() const
{
  return this->p_histograph->GetBarOffset();
} 
template <typename T>
Float_t	THistoCommon<T>::GetBarWidth() const
{
  return this->p_histograph->GetBarWidth();
} 
template <typename T>
Int_t	THistoCommon<T>::GetBin(Int_t binx, Int_t biny, Int_t binz) const
{
  return this->p_histograph->GetBin(binx,biny,binz);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinCenter(Int_t bin) const
{
  return this->p_histograph->GetBinCenter(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinContent(Int_t bin) const
{
  return this->p_histograph->GetBinContent(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinContent(Int_t bin, Int_t x) const
{
  return this->p_histograph->GetBinContent(bin,x);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinContent(Int_t bin, Int_t x, Int_t y) const
{
  return this->p_histograph->GetBinContent(bin,x,y);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinError(Int_t bin) const
{
  return this->p_histograph->GetBinError(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinError(Int_t binx, Int_t biny) const
{
  return this->p_histograph->GetBinError(binx,biny);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinError(Int_t binx, Int_t biny, Int_t binz) const
{
  return this->p_histograph->GetBinError(binx,biny,binz);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinErrorLow(Int_t bin) const
{
  return this->p_histograph->GetBinErrorLow(bin);
} 
template <typename T>
TH1::EBinErrorOpt	THistoCommon<T>::GetBinErrorOption() const
{
  return this->p_histograph->GetBinErrorOption();
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinErrorUp(Int_t bin) const
{
  return this->p_histograph->GetBinErrorUp(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinLowEdge(Int_t bin) const
{
  return this->p_histograph->GetBinLowEdge(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinWidth(Int_t bin) const
{
  return this->p_histograph->GetBinWidth(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::GetBinWithContent(Double_t c, Int_t& binx, Int_t firstx, Int_t lastx, Double_t maxdiff) const
{
  return this->p_histograph->GetBinWithContent(c,binx,firstx,lastx,maxdiff);
} 
template <typename T>
void	THistoCommon<T>::GetBinXYZ(Int_t binglobal, Int_t& binx, Int_t& biny, Int_t& binz) const
{
  this->p_histograph->GetBinXYZ(binglobal,binx,biny,binz);
} 
template <typename T>
const Double_t*	THistoCommon<T>::GetBuffer() const
{
  return this->p_histograph->GetBuffer();
} 
template <typename T>
Int_t	THistoCommon<T>::GetBufferLength() const
{
  return this->p_histograph->GetBufferLength();
} 
template <typename T>
Int_t	THistoCommon<T>::GetBufferSize() const
{
  return this->p_histograph->GetBufferSize();
} 
template <typename T>
Double_t	THistoCommon<T>::GetCellContent(Int_t binx, Int_t biny) const
{
  return this->p_histograph->GetCellContent(binx,biny);
} 
template <typename T>
Double_t	THistoCommon<T>::GetCellError(Int_t binx, Int_t biny) const
{
  return this->p_histograph->GetCellError(binx,biny);
} 
template <typename T>
void	THistoCommon<T>::GetCenter(Double_t* center) const
{
  return this->p_histograph->GetCenter(center);
} 
template <typename T>
Int_t	THistoCommon<T>::GetContour(Double_t* levels)
{
  return this->p_histograph->GetContour(levels);
} 
template <typename T>
Double_t	THistoCommon<T>::GetContourLevel(Int_t level) const
{
  return this->p_histograph->GetContourLevel(level);
} 
template <typename T>
Double_t	THistoCommon<T>::GetContourLevelPad(Int_t level) const
{
  return this->p_histograph->GetContourLevelPad(level);
} 
template <typename T>
TH1*	THistoCommon<T>::GetCumulative(Bool_t forward, const char* suffix) const
{
  return this->p_histograph->GetCumulative(forward,suffix);
} 
template <typename T>
Int_t	THistoCommon<T>::GetDefaultBufferSize()
{
  return TH1::GetDefaultBufferSize();
} 
template <typename T>
Bool_t	THistoCommon<T>::GetDefaultSumw2()
{
  return TH1::GetDefaultSumw2();
} 
template <typename T>
Int_t	THistoCommon<T>::GetDimension() const
{
  return this->p_histograph->GetDimension();
} 
template <typename T>
TDirectory*	THistoCommon<T>::GetDirectory() const
{
  return this->p_histograph->GetDirectory();
} 
template <typename T>
Double_t	THistoCommon<T>::GetEffectiveEntries() const
{
  return this->p_histograph->GetEffectiveEntries();
} 
template <typename T>
Double_t	THistoCommon<T>::GetEntries() const
{
  return this->p_histograph->GetEntries();
} 
template <typename T>
TF1*	THistoCommon<T>::GetFunction(const char* name) const
{
  return this->p_histograph->GetFunction(name);
} 
template <typename T>
Double_t*	THistoCommon<T>::GetIntegral()
{
  return this->p_histograph->GetIntegral();
} 
template <typename T>
Double_t	THistoCommon<T>::GetKurtosis(Int_t axis) const
{
  return this->p_histograph->GetKurtosis(axis);
} 
template <typename T>
Color_t	THistoCommon<T>::GetLabelColor(Option_t* axis) const
{
  return this->p_histograph->GetLabelColor(axis);
} 
template <typename T>
Style_t	THistoCommon<T>::GetLabelFont(Option_t* axis) const
{
  return this->p_histograph->GetLabelFont(axis);
} 
template <typename T>
Float_t	THistoCommon<T>::GetLabelOffset(Option_t* axis) const
{
  return this->p_histograph->GetLabelOffset(axis);
} 
template <typename T>
Float_t	THistoCommon<T>::GetLabelSize(Option_t* axis) const
{
  return this->p_histograph->GetLabelSize(axis);
} 
template <typename T>
TList*	THistoCommon<T>::GetListOfFunctions() const
{
  return this->p_histograph->GetListOfFunctions();
} 
template <typename T>
void	THistoCommon<T>::GetLowEdge(Double_t* edge) const
{
  this->p_histograph->GetLowEdge(edge);
} 
template <typename T>
Double_t	THistoCommon<T>::GetMaximum(Double_t maxval) const
{
  return this->p_histograph->GetMaximum(maxval);
} 
template <typename T>
Int_t	THistoCommon<T>::GetMaximumBin() const
{
  return this->p_histograph->GetMaximumBin();
} 
template <typename T>
Int_t	THistoCommon<T>::GetMaximumBin(Int_t& locmax, Int_t& locmay, Int_t& locmaz) const
{
  return this->p_histograph->GetMaximumBin(locmax,locmay,locmaz);
} 
template <typename T>
Double_t	THistoCommon<T>::GetMaximumStored() const
{
  return this->p_histograph->GetMaximumStored();
} 
template <typename T>
Double_t	THistoCommon<T>::GetMean(Int_t axis) const
{
  return this->p_histograph->GetMean(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetMeanError(Int_t axis) const
{
  return this->p_histograph->GetMeanError(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetMinimum(Double_t minval) const
{
  return this->p_histograph->GetMinimum(minval);
} 
template <typename T>
Int_t	THistoCommon<T>::GetMinimumBin() const
{
  return this->p_histograph->GetMinimumBin();
} 
template <typename T>
Int_t	THistoCommon<T>::GetMinimumBin(Int_t& locmix, Int_t& locmiy, Int_t& locmiz) const
{
  return this->p_histograph->GetMinimumBin(locmix,locmiy,locmiz);
} 
template <typename T>
Double_t	THistoCommon<T>::GetMinimumStored() const
{
  return this->p_histograph->GetMinimumStored();
} 
template <typename T>
Int_t	THistoCommon<T>::GetNbinsX() const
{
  return this->p_histograph->GetNbinsX();
} 
template <typename T>
Int_t	THistoCommon<T>::GetNbinsY() const
{
  return this->p_histograph->GetNbinsY();
} 
template <typename T>
Int_t	THistoCommon<T>::GetNbinsZ() const
{
  return this->p_histograph->GetNbinsZ();
} 
template <typename T>
Int_t	THistoCommon<T>::GetNcells() const
{
  return this->p_histograph->GetNcells();
} 
template <typename T>
Int_t	THistoCommon<T>::GetNdivisions(Option_t* axis) const
{
  return this->p_histograph->GetNdivisions(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetNormFactor() const
{
  return this->p_histograph->GetNormFactor();
} 
template <typename T>
char*	THistoCommon<T>::GetObjectInfo(Int_t px, Int_t py) const
{
  return this->p_histograph->GetObjectInfo(px,py);
} 
template <typename T>
Option_t*	THistoCommon<T>::GetOption() const
{
  return this->p_histograph->GetOption();
} 
template <typename T>
TVirtualHistPainter*	THistoCommon<T>::GetPainter(Option_t* option)
{
  return this->p_histograph->GetPainter(option);
} 
template <typename T>
Int_t	THistoCommon<T>::GetQuantiles(Int_t nprobSum, Double_t* q, const Double_t* probSum)
{
  return this->p_histograph->GetQuantiles(nprobSum,q,probSum);
} 
template <typename T>
Double_t	THistoCommon<T>::GetRandom() const
{
  return this->p_histograph->GetRandom();
} 
template <typename T>
Double_t	THistoCommon<T>::GetRMS(Int_t axis) const
{
  return this->p_histograph->GetRMS(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetRMSError(Int_t axis) const
{
  return this->p_histograph->GetRMSError(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetSkewness(Int_t axis) const
{
  return this->p_histograph->GetSkewness(axis);
} 
template <typename T>
void	THistoCommon<T>::GetStats(Double_t* stats) const
{
  this->p_histograph->GetStats(stats);
} 
template <typename T>
Double_t	THistoCommon<T>::GetStdDev(Int_t axis) const
{
  return this->p_histograph->GetStdDev(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetStdDevError(Int_t axis) const
{
  return this->p_histograph->GetStdDevError(axis);
} 
template <typename T>
Double_t	THistoCommon<T>::GetSumOfWeights() const
{
  return this->p_histograph->GetSumOfWeights();
} 
template <typename T>
TArrayD*	THistoCommon<T>::GetSumw2()
{
  return this->p_histograph->GetSumw2();
} 
template <typename T>
const TArrayD*	THistoCommon<T>::GetSumw2() const
{
  return this->p_histograph->GetSumw2();
} 
template <typename T>
Int_t	THistoCommon<T>::GetSumw2N() const
{
  return this->p_histograph->GetSumw2N();
} 
template <typename T>
Float_t	THistoCommon<T>::GetTickLength(Option_t* axis) const
{
  return this->p_histograph->GetTickLength(axis);
} 
template <typename T>
Style_t	THistoCommon<T>::GetTitleFont(Option_t* axis) const
{
  return this->p_histograph->GetTitleFont(axis);
} 
template <typename T>
Float_t	THistoCommon<T>::GetTitleOffset(Option_t* axis) const
{
  return this->p_histograph->GetTitleOffset(axis);
} 
template <typename T>
Float_t	THistoCommon<T>::GetTitleSize(Option_t* axis) const
{
  return this->p_histograph->GetTitleSize(axis);
} 
template <typename T>
TAxis*	THistoCommon<T>::GetXaxis()
{
  return this->p_histograph->GetXaxis();
} 
template <typename T>
const TAxis*	THistoCommon<T>::GetXaxis() const
{
  return this->p_histograph->GetXaxis();
} 
template <typename T>
TAxis*	THistoCommon<T>::GetYaxis()
{
  return this->p_histograph->GetYaxis();
} 
template <typename T>
const TAxis*	THistoCommon<T>::GetYaxis() const
{
  return this->p_histograph->GetYaxis();
} 
template <typename T>
TAxis*	THistoCommon<T>::GetZaxis()
{
  return this->p_histograph->GetZaxis();
} 
template <typename T>
const TAxis*	THistoCommon<T>::GetZaxis() const
{
  return this->p_histograph->GetZaxis();
} 
template <typename T>
Double_t	THistoCommon<T>::Integral(Option_t* option) const
{
  return this->p_histograph->Integral(option);
} 
template <typename T>
Double_t	THistoCommon<T>::Integral(Int_t binx1, Int_t binx2, Option_t* option) const
{
  return this->p_histograph->Integral(binx1,binx2,option);
} 
template <typename T>
Double_t	THistoCommon<T>::IntegralAndError(Int_t binx1, Int_t binx2, Double_t& err, Option_t* option) const
{
  return this->p_histograph->IntegralAndError(binx1,binx2,err,option);
} 
template <typename T>
Double_t	THistoCommon<T>::Interpolate(Double_t x)
{
  return this->p_histograph->Interpolate(x);
} 
template <typename T>
Double_t	THistoCommon<T>::Interpolate(Double_t x, Double_t y)
{
  return this->p_histograph->Interpolate(x,y);
} 
template <typename T>
Double_t	THistoCommon<T>::Interpolate(Double_t x, Double_t y, Double_t z)
{
  return this->p_histograph->Interpolate(x,y,z);
} 
template <typename T>
TClass*	THistoCommon<T>::IsA() const
{
  return this->p_histograph->IsA();
} 
template <typename T>     
Bool_t	THistoCommon<T>::IsBinOverflow(Int_t bin) const
{
  return this->p_histograph->IsBinOverflow(bin);
} 
template <typename T>
Bool_t	THistoCommon<T>::IsBinUnderflow(Int_t bin) const
{
  return this->p_histograph->IsBinUnderflow(bin);
} 
template <typename T>
Double_t	THistoCommon<T>::KolmogorovTest(const TH1* h2, Option_t* option) const
{
  return this->p_histograph->KolmogorovTest(h2,option);
} 
template <typename T>
void	THistoCommon<T>::LabelsDeflate(Option_t* axis)
{
  this->p_histograph->LabelsDeflate(axis);
} 
template <typename T>
void	THistoCommon<T>::LabelsInflate(Option_t* axis)
{
  this->p_histograph->LabelsInflate(axis);
} 
template <typename T>
void	THistoCommon<T>::LabelsOption(Option_t* option, Option_t* axis)
{
  this->p_histograph->LabelsOption(option,axis);
} 
template <typename T>
Long64_t	THistoCommon<T>::Merge(TCollection* list)
{
  return this->Merge(list);
} 
template <typename T>
Bool_t	THistoCommon<T>::Multiply(const TH1* h1)
{
  return this->p_histograph->Multiply(h1);
} 
template <typename T>
Bool_t	THistoCommon<T>::Multiply(TF1* h1, Double_t c1)
{
  return this->p_histograph->Multiply(h1,c1);
} 
template <typename T>
Bool_t	THistoCommon<T>::Multiply(const TH1* h1, const TH1* h2, Double_t c1, Double_t c2, Option_t* option)
{
  return this->p_histograph->Multiply(h1,h2,c1,c2,option);
} 
template <typename T>
void	THistoCommon<T>::Paint(Option_t* option)
{
  this->p_histograph->Paint(option);
} 
template <typename T>
void	THistoCommon<T>::Print(Option_t* option) const
{
  this->p_histograph->Print(option);
} 
template <typename T>
void	THistoCommon<T>::PutStats(Double_t* stats)
{
  this->p_histograph->PutStats(stats);
} 
template <typename T>
TH1*	THistoCommon<T>::Rebin(Int_t ngroup, const char* newname, const Double_t* xbins)
{
  return this->p_histograph->Rebin(ngroup,newname,xbins);
} 
template <typename T>
void	THistoCommon<T>::RebinAxis(Double_t x, TAxis* axis)
{
  this->p_histograph->RebinAxis(x,axis);
} 
template <typename T>
void	THistoCommon<T>::Rebuild(Option_t* option)
{
  this->p_histograph->Rebuild(option);
} 
template <typename T>
void	THistoCommon<T>::RecursiveRemove(TObject* obj)
{
  this->p_histograph->RecursiveRemove(obj);
} 
template <typename T>
void	THistoCommon<T>::Reset(Option_t* option)
{
  this->p_histograph->Reset(option);
} 
template <typename T>
void	THistoCommon<T>::ResetStats()
{
  this->p_histograph->ResetStats();
} 
template <typename T>
void	THistoCommon<T>::SavePrimitive(std::ostream& out, Option_t* option)
{
  this->p_histograph->SavePrimitive(out,option);
} 
template <typename T>
void	THistoCommon<T>::Scale(Double_t c1, Option_t* option)
{
  this->p_histograph->Scale(c1,option);
} 
template <typename T>
void	THistoCommon<T>::SetAxisColor(Color_t color, Option_t* axis)
{
  this->p_histograph->SetAxisColor(color,axis);
} 
template <typename T>
void	THistoCommon<T>::SetAxisRange(Double_t xmin, Double_t xmax, Option_t* axis)
{
  this->p_histograph->SetAxisRange(xmin,xmax,axis);
} 
template <typename T>
void	THistoCommon<T>::SetBarOffset(Float_t offset)
{
  this->p_histograph->SetBarOffset(offset);
} 
template <typename T>
void	THistoCommon<T>::SetBarWidth(Float_t width)
{
  this->p_histograph->SetBarWidth(width);
} 
template <typename T>
void	THistoCommon<T>::SetBinContent(Int_t bin, Double_t content)
{
  this->p_histograph->SetBinContent(bin,content);
} 
template <typename T>
void	THistoCommon<T>::SetBinContent(Int_t bin, Int_t x, Double_t content)
{
  this->p_histograph->SetBinContent(bin,x,content);
} 
template <typename T>
void	THistoCommon<T>::SetBinContent(Int_t bin, Int_t x, Int_t y, Double_t content)
{
  this->p_histograph->SetBinContent(bin,x,y,content);
} 
template <typename T>
void	THistoCommon<T>::SetBinError(Int_t bin, Double_t error)
{
  this->p_histograph->SetBinError(bin,error);
} 
template <typename T>
void	THistoCommon<T>::SetBinError(Int_t binx, Int_t biny, Double_t error)
{
  this->p_histograph->SetBinError(binx,biny,error);
} 
template <typename T>
void	THistoCommon<T>::SetBinError(Int_t binx, Int_t biny, Int_t binz, Double_t error)
{
  this->p_histograph->SetBinError(binx,biny,binz,error);
} 
template <typename T>
void	THistoCommon<T>::SetBinErrorOption(TH1::EBinErrorOpt type)
{
  this->p_histograph->SetBinErrorOption(type);
} 
/*template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, const Double_t* xBins)
{
  this->p_histograph->SetBins(nx,xBins);
} 
template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, Double_t xmin, Double_t xmax)
{
  this->p_histograph->SetBins(nx,xmin,xmax);
} 
template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins)
{
  this->p_histograph->SetBins(nx,xBins,ny,yBins);
} 
template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax)
{
  this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax);
} 
template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins)
{
  this->p_histograph->SetBins(nx,xBins,ny,yBins,nz,zBins);
} 
template <typename T>
void	THistoCommon<T>::SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax)
{
  this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax,nz,zmin,zmax);
}*/
template <typename T>
void	THistoCommon<T>::SetBinsLength(Int_t a)
{
  this->p_histograph->SetBinsLength(a);
} 
template <typename T>
void	THistoCommon<T>::SetBuffer(Int_t buffersize, Option_t* option)
{
  this->p_histograph->SetBuffer(buffersize,option);
} 
template <typename T>
UInt_t	THistoCommon<T>::SetCanExtend(UInt_t extendBitMask)
{
  return this->p_histograph->SetCanExtend(extendBitMask);
} 
template <typename T>
void	THistoCommon<T>::SetCellContent(Int_t binx, Int_t biny, Double_t content)
{
  this->p_histograph->SetCellContent(binx,biny,content);
} 
template <typename T>
void	THistoCommon<T>::SetCellError(Int_t binx, Int_t biny, Double_t content)
{
  this->p_histograph->SetCellError(binx,biny,content);
} 
template <typename T>
void	THistoCommon<T>::SetContent(const Double_t* content)
{
  this->p_histograph->SetContent(content);
} 
template <typename T>
void	THistoCommon<T>::SetContour(Int_t nlevels, const Double_t* levels)
{
  this->p_histograph->SetContour(nlevels,levels);
} 
template <typename T>
void	THistoCommon<T>::SetContourLevel(Int_t level, Double_t value)
{
  this->p_histograph->SetContourLevel(level,value);
} 
template <typename T>
void	THistoCommon<T>::SetDefaultBufferSize(Int_t buffersize)
{
  TH1::SetDefaultBufferSize(buffersize);
} 
template <typename T>
void	THistoCommon<T>::SetDefaultSumw2(Bool_t sumw2)
{
  TH1::SetDefaultSumw2(sumw2);
} 
template <typename T>
void	THistoCommon<T>::SetDirectory(TDirectory* dir)
{
  this->p_histograph->SetDirectory(dir);
} 
template <typename T>
void	THistoCommon<T>::SetEntries(Double_t n)
{
  this->p_histograph->SetEntries(n);
} 
template <typename T>
void	THistoCommon<T>::SetError(const Double_t* error)
{
  this->p_histograph->SetError(error);
} 
template <typename T>
void	THistoCommon<T>::SetLabelColor(Color_t color, Option_t* axis)
{
  this->p_histograph->SetLabelColor(color,axis);
} 
template <typename T>
void	THistoCommon<T>::SetLabelFont(Style_t font, Option_t* axis)
{
  this->p_histograph->SetLabelFont(font,axis);
} 
template <typename T>
void	THistoCommon<T>::SetLabelOffset(Float_t offset, Option_t* axis)
{
  this->p_histograph->SetLabelOffset(offset,axis);
} 
template <typename T>
void	THistoCommon<T>::SetLabelSize(Float_t size, Option_t* axis)
{
  this->p_histograph->SetLabelSize(size,axis);
} 
template <typename T>
void	THistoCommon<T>::SetMaximum(Double_t maximum)
{
  this->p_histograph->SetMaximum(maximum);
} 
template <typename T>
void	THistoCommon<T>::SetMinimum(Double_t minimum)
{
  this->p_histograph->SetMinimum(minimum);
} 
template <typename T>
void	THistoCommon<T>::SetName(const char* name)
{
  this->p_histograph->SetName(name);
} 
template <typename T>
void	THistoCommon<T>::SetNameTitle(const char* name, const char* title)
{
  this->p_histograph->SetNameTitle(name,title);
} 
template <typename T>
void	THistoCommon<T>::SetNdivisions(Int_t n , Option_t* axis)
{
  this->p_histograph->SetNdivisions(n,axis);
} 
template <typename T>
void	THistoCommon<T>::SetNormFactor(Double_t factor)
{
  this->p_histograph->SetNormFactor(factor);
} 
template <typename T>
void	THistoCommon<T>::SetOption(Option_t* option)
{
  this->p_histograph->SetOption(option);
} 
template <typename T>
void	THistoCommon<T>::SetStats(Bool_t stats )
{
  this->p_histograph->SetStats(stats);
} 
template <typename T>
void	THistoCommon<T>::SetTickLength(Float_t length, Option_t* axis)
{
  this->p_histograph->SetTickLength(length,axis);
} 
template <typename T>
void	THistoCommon<T>::SetTitle(const char* title)
{
  this->p_histograph->SetTitle(title);
} 
template <typename T>
void	THistoCommon<T>::SetTitleFont(Style_t font , Option_t* axis )
{
  this->p_histograph->SetTitleFont(font,axis);
} 
template <typename T>
void	THistoCommon<T>::SetTitleOffset(Float_t offset , Option_t* axis )
{
  this->p_histograph->SetTitleOffset(offset,axis);
} 
template <typename T>
void	THistoCommon<T>::SetTitleSize(Float_t size , Option_t* axis )
{
  this->p_histograph->SetTitleSize(size,axis);
} 
template <typename T>
void	THistoCommon<T>::SetXTitle(const char* title)
{
  this->p_histograph->SetXTitle(title);
} 
template <typename T>
void	THistoCommon<T>::SetYTitle(const char* title)
{
  this->p_histograph->SetYTitle(title);
} 
template <typename T>
void	THistoCommon<T>::SetZTitle(const char* title)
{
  this->p_histograph->SetZTitle(title);
} 
template <typename T>
TH1*	THistoCommon<T>::ShowBackground(Int_t niter , Option_t* option )
{
  return this->p_histograph->ShowBackground(niter,option);
} 
template <typename T>
void	THistoCommon<T>::ShowMembers(TMemberInspector& insp) const
{
  this->p_histograph->ShowMembers(insp);
} 
template <typename T>
Int_t	THistoCommon<T>::ShowPeaks(Double_t sigma, Option_t* option, Double_t threshold)
{
  return this->p_histograph->ShowPeaks(sigma,option,threshold);
} 
template <typename T>
void	THistoCommon<T>::Smooth(Int_t ntimes, Option_t* option)
{
  this->p_histograph->Smooth(ntimes,option);
} 
template <typename T>
void	THistoCommon<T>::SmoothArray(Int_t NN, Double_t* XX, Int_t ntimes)
{
  TH1::SmoothArray(NN,XX,ntimes);
} 
template <typename T>
void	THistoCommon<T>::StatOverflows(Bool_t flag)
{
  TH1::StatOverflows(flag);
} 
template <typename T>
void	THistoCommon<T>::Streamer(TBuffer& c)
{
  this->p_histograph->Streamer(c);
} 
template <typename T>
void	THistoCommon<T>::StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b)
{
  this->p_histograph->StreamerNVirtual(ClassDef_StreamerNVirtual_b);
} 
template <typename T>
void	THistoCommon<T>::Sumw2(Bool_t flag)
{
  this->Sumw2(flag);;
} 
template <typename T>
TH1*	THistoCommon<T>::TransformHisto(TVirtualFFT* fft, TH1* h_output, Option_t* option)
{
  return TH1::TransformHisto(fft,h_output,option);
} 
template <typename T>
void	THistoCommon<T>::UseCurrentStyle()
{
  this->p_histograph->UseCurrentStyle();
} 




