#ifndef HistoSpecialisers_h
#define HistoSpecialisers_h
#include "THistoCommon.h"

template <typename T>
class is_TH1
{
  public :static const bool value =false;
};
template <> class is_TH1<TH1C>{ public :static const bool value =true ;};
template <> class is_TH1<TH1S>{ public :static const bool value =true ;};
template <> class is_TH1<TH1I>{ public :static const bool value =true ;};
template <> class is_TH1<TH1F>{ public :static const bool value =true ;};
template <> class is_TH1<TH1D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TH1<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->Detach();
      this->SetObjectStat(false);
    };
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Float_t* xbins)
    {
                this->p_histograph=new T(name,title,nbinsx,xbins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Double_t* xbins)
    {
        this->p_histograph=new T(name,title,nbinsx,xbins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, Double_t xlow, Double_t xup)
    {
      this->p_histograph=new T(name,title,nbinsx,xlow,xup);
      this->Detach();
      this->SetObjectStat(false);
    }

   virtual Int_t	Fill(Double_t x)
   {
       return this->p_histograph->Fill(x);
   }
   virtual Int_t	Fill(Double_t x, Double_t w)
   {
       return this->p_histograph->Fill(x,w);
   }
   virtual void FillN(Int_t ntimes, const Double_t* x, const Double_t* w, Int_t stride = 1)
   {
       this->p_histograph->FillN(ntimes,x,w,stride);
   }
   virtual void FillN(Int_t ntimes, const Double_t* x, const Double_t* y , const Double_t* w, Int_t stride)
   {
        this->p_histograph->FillN(ntimes,x,y,w,stride);
   }
  virtual void	SetBins(Int_t nx, const Double_t* xBins)
   {
        this->p_histograph->SetBins(nx,xBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins,nz,zBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax,nz,zmin,zmax);
   }
};

template <typename T>
class is_TH2
{
  public :static const bool value =false;
};
template <> class is_TH2<TH2C>{ public :static const bool value =true ;};
template <> class is_TH2<TH2S>{ public :static const bool value =true ;};
template <> class is_TH2<TH2I>{ public :static const bool value =true ;};
template <> class is_TH2<TH2F>{ public :static const bool value =true ;};
template <> class is_TH2<TH2D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TH2<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Double_t* xbins, Int_t nbinsy, const Double_t* ybins)
    {
      this->p_histograph=new T(name,title,nbinsx,xbins,nbinsy,ybins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Float_t* xbins, Int_t nbinsy, const Float_t* ybins)
    {
      this->p_histograph=new T(name,title,nbinsx,xbins,nbinsy,ybins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Double_t* xbins, Int_t nbinsy, Double_t ylow, Double_t yup)
    {
      this->p_histograph=new T(name,title,nbinsx,xbins,nbinsy,ylow,yup);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, Double_t xlow, Double_t xup, Int_t nbinsy, const Double_t* ybins)
    {
      this->p_histograph=new T(name,title,nbinsx,xlow,xup,nbinsy,ybins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, Double_t xlow, Double_t xup, Int_t nbinsy, Double_t ylow, Double_t yup) 
    {
      this->p_histograph=new T(name,title,nbinsx,xlow,xup,nbinsy,ylow,yup);
      this->Detach();
      this->SetObjectStat(false);
    }
    virtual Int_t	BufferEmpty(Int_t action = 0)
    {
        return this->p_histograph->BufferEmpty(action);
    }
    virtual TClass*	Class()
    {
        return TH2::Class();
    }
    virtual void	Copy(TObject& hnew) const
    {
        this->p_histograph->Copy(hnew);
    }
    virtual Int_t	Fill(Double_t x, Double_t y)
    {
        return this->p_histograph->Fill(x,y);
    }
    virtual Int_t	Fill(Double_t x, Double_t y, Double_t w)
    {
        return this->p_histograph->Fill(x,y,w);
    }
    virtual Int_t	Fill(Double_t x, const char* namey, Double_t w)
    {
        return this->p_histograph->Fill(x,namey,w);
    }
    virtual Int_t	Fill(const char* namex, Double_t y, Double_t w)
    {
        return this->p_histograph->Fill(namex,y,w);
    }
    virtual Int_t	Fill(const char* namex, const char* namey, Double_t w)
    {
        return this->p_histograph->Fill(namex,namey,w);
    }
    virtual void	FillN(Int_t a, const Double_t* b, const Double_t* c, Int_t d)
    {
        this->p_histograph->FillN(a,b,c,d);
    }
    virtual void	FillN(Int_t ntimes, const Double_t* x, const Double_t* y, const Double_t* w, Int_t stride = 1)
    {
        this->p_histograph->FillN(ntimes,x,y,w,stride);
    }
    virtual void	FillRandom(const char* fname, Int_t ntimes = 5000)
    {
        this->p_histograph->FillRandom(fname,ntimes);
    }
    virtual void	FillRandom(TH1* h, Int_t ntimes = 5000)
    {
        this->p_histograph->FillRandom(h,ntimes);
    }
    virtual Int_t	FindFirstBinAbove(Double_t threshold = 0, Int_t axis = 1) const
    {
        return this->p_histograph->FindFirstBinAbove(threshold,axis);
    }
    virtual Int_t	FindLastBinAbove(Double_t threshold = 0, Int_t axis = 1) const
    {
        return this->p_histograph->FindLastBinAbove(threshold,axis);
    }
    virtual void	FitSlicesX(TF1* f1 = 0, Int_t firstybin = 0, Int_t lastybin = -1, Int_t cut = 0, Option_t* option = "QNR", TObjArray* arr = 0)
    {
        this->p_histograph->FitSlicesX(f1,firstybin,lastybin,cut,option,arr);
    }
    virtual void	FitSlicesY(TF1* f1 = 0, Int_t firstxbin = 0, Int_t lastxbin = -1, Int_t cut = 0, Option_t* option = "QNR", TObjArray* arr = 0)
    {
        this->p_histograph->FitSlicesY(f1,firstxbin,lastxbin,cut,option,arr);
    }
    virtual Int_t	GetBin(Int_t binx, Int_t biny, Int_t binz = 0) const
    {
        return this->p_histograph->GetBin(binx,biny,binz);
    }
    virtual Double_t	GetBinContent(Int_t bin) const
    {
        return this->p_histograph->GetBinContent(bin);
    }
    virtual Double_t	GetBinContent(Int_t binx, Int_t biny) const
    {
        return this->p_histograph->GetBinContent(binx,biny);
    }
    virtual Double_t	GetBinContent(Int_t binx, Int_t biny, Int_t a) const
    {
        return this->p_histograph->GetBinContent(binx,biny,a);
    }
    virtual Double_t	GetBinErrorLow(Int_t binx, Int_t biny)
    {
        return this->p_histograph->GetBinErrorLow(binx,biny);
    }
    virtual Double_t	GetBinErrorUp(Int_t binx, Int_t biny)
    {
       return this->p_histograph->GetBinErrorUp(binx,biny); 
    }
    virtual Double_t	GetBinWithContent2(Double_t c, Int_t& binx, Int_t& biny, Int_t firstxbin = 1, Int_t lastxbin = -1, Int_t firstybin = 1, Int_t lastybin = -1, Double_t maxdiff = 0) const
    {
        return this->p_histograph->GetBinWithContent2(c,binx,biny,firstxbin,lastxbin,firstybin,lastybin,maxdiff);
    }
    virtual Double_t	GetCorrelationFactor(Int_t axis1 = 1, Int_t axis2 = 2) const
    {
        return this->p_histograph->GetCorrelationFactor(axis1,axis2);
    }
    virtual Double_t	GetCovariance(Int_t axis1 = 1, Int_t axis2 = 2) const
    {
        return this->p_histograph->GetCovariance(axis1,axis2);
    }
    virtual void	GetRandom2(Double_t& x, Double_t& y)
    {
        this->p_histograph->GetRandom2(x,y);
    }
    virtual void	GetStats(Double_t* stats) const
    {
        this->p_histograph->GetStats(stats);
    }
    virtual Double_t	Integral(Option_t* option = "") const
    {
        return this->p_histograph->Integral(option);
    }
    virtual Double_t	Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Option_t* option = "") const
    {
        return this->p_histograph->Integral(binx1,binx2,biny1,biny2,option);
    }
    virtual Double_t	Integral(Int_t a, Int_t b, Int_t c, Int_t d, Int_t e, Int_t f, Option_t* option = "") const
    {
        return this->p_histograph->Integral(a,b,c,d,e,f,option);
    }
    virtual Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Double_t& err, Option_t* option = "") const
    {
        return this->p_histograph->IntegralAndError(binx1,binx2,biny1,biny2,err,option);
    }
    virtual Double_t	Interpolate(Double_t x)
    {
        return this->p_histograph->Interpolate(x);
    }
    virtual Double_t	Interpolate(Double_t x, Double_t y)
    {
        return this->p_histograph->Interpolate(x,y);
    }
    virtual Double_t	Interpolate(Double_t x, Double_t y, Double_t z)
    {
        return this->p_histograph->Interpolate(x,y,z);
    }
    virtual TClass*	IsA() const
    {
        return this->p_histograph->IsA();
    }
    virtual Double_t	KolmogorovTest(const TH1* h2, Option_t* option = "") const
    {
        return this->p_histograph->KolmogorovTest(h2,option);
    }
    virtual Long64_t	Merge(TCollection* list)
    {
        return this->p_histograph->Merge(list);
    }
    TProfile*	ProfileX(const char* name = "_pfx", Int_t firstybin = 1, Int_t lastybin = -1, Option_t* option = "") const
    {
        return this->p_histograph->ProfileX(name,firstybin,lastybin,option);
    }
    TProfile*	ProfileY(const char* name = "_pfy", Int_t firstxbin = 1, Int_t lastxbin = -1, Option_t* option = "") const
    {
        return this->p_histograph->ProfileY(name,firstxbin,lastxbin,option);
    }
    TH1D*	ProjectionX(const char* name = "_px", Int_t firstybin = 0, Int_t lastybin = -1, Option_t* option = "") const
    {
        return this->p_histograph->ProjectionX(name,firstybin,lastybin,option);
    }
    TH1D*	ProjectionY(const char* name = "_py", Int_t firstxbin = 0, Int_t lastxbin = -1, Option_t* option = "") const
    {
        return this->p_histograph->ProjectionY(name,firstxbin,lastxbin,option);
    }
    virtual void	PutStats(Double_t* stats)
    {
        this->p_histograph->PutStats(stats);
    }
    TH1D*	QuantilesX(Double_t prob = 0.5, const char* name = "_qx") const
    {
        return this->p_histograph->QuantilesX(prob,name);
    }
    TH1D*	QuantilesY(Double_t prob = 0.5, const char* name = "_qy") const
    {
        return this->p_histograph->QuantilesY(prob,name);
    }
    virtual TH2*	Rebin2D(Int_t nxgroup = 2, Int_t nygroup = 2, const char* newname = "")
    {
        return this->p_histograph->Rebin2D(nxgroup,nygroup,newname);
    }
    virtual TH2*	RebinX(Int_t ngroup = 2, const char* newname = "")
    {
        return this->p_histograph->RebinX(ngroup,newname);
    }
    virtual TH2*	RebinY(Int_t ngroup = 2, const char* newname = "")
    {
        return this->p_histograph->RebinY(ngroup,newname);
    }
    virtual void	Reset(Option_t* option = "")
    {
        this->p_histograph->Reset(option);
    }
    virtual void	SetBinContent(Int_t bin, Double_t content)
    {
        this->p_histograph->SetBinContent(bin,content);
    }
    virtual void	SetBinContent(Int_t binx, Int_t biny, Double_t content)
    {
        this->p_histograph->SetBinContent(binx,biny,content);
    }
    virtual void	SetBinContent(Int_t binx, Int_t biny, Int_t a, Double_t content)
    {
        this->p_histograph->SetBinContent(binx,biny,a,content);
    }
    virtual void	SetShowProjectionX(Int_t nbins = 1)
    {
        this->p_histograph->SetShowProjectionX(nbins);
    }
    virtual void	SetShowProjectionY(Int_t nbins = 1)
    {
        this->p_histograph->SetShowProjectionY(nbins);
    }
    virtual TH1*	ShowBackground(Int_t niter = 20, Option_t* option = "same")
    {
        return this->p_histograph->ShowBackground(niter,option);
    }
    virtual void	ShowMembers(TMemberInspector& insp) const
    {
        this->p_histograph->ShowMembers(insp);
    }
    virtual Int_t	ShowPeaks(Double_t sigma = 2, Option_t* option = "", Double_t threshold = 0.050000000000000003)
    {
        return this->p_histograph->ShowPeaks(sigma,option,threshold);
    }
    virtual void	Smooth(Int_t ntimes = 1, Option_t* option = "")
    {
        this->p_histograph->Smooth(ntimes,option);
    }
    virtual void	Streamer(TBuffer& buf)
    {
        this->p_histograph->Streamer(buf);
    }
    void	StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b)
    {
        this->p_histograph->StreamerNVirtual(ClassDef_StreamerNVirtual_b);
    }
    virtual void	SetBins(Int_t nx, const Double_t* xBins)
   {
        this->p_histograph->SetBins(nx,xBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins,nz,zBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax,nz,zmin,zmax);
   }
};

template <typename T>
class is_TH3
{
  public :static const bool value =false;
};
template <> class is_TH3<TH3C>{ public :static const bool value =true ;};
template <> class is_TH3<TH3S>{ public :static const bool value =true ;};
template <> class is_TH3<TH3I>{ public :static const bool value =true ;};
template <> class is_TH3<TH3F>{ public :static const bool value =true ;};
template <> class is_TH3<TH3D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph<T, typename std::enable_if<is_TH3<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph()
    {
      this->p_histograph=new T();
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Float_t* xbins, Int_t nbinsy, const Float_t* ybins, Int_t nbinsz, const Float_t* zbins)
    {
      this->p_histograph=new T(name,title,nbinsx,xbins,nbinsy,ybins,nbinsz,zbins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, const Double_t* xbins, Int_t nbinsy, const Double_t* ybins, Int_t nbinsz, const Double_t* zbins)
    {
      this->p_histograph=new T(name,title,nbinsx,xbins,nbinsy,ybins,nbinsz,zbins);
      this->Detach();
      this->SetObjectStat(false);
    }
	THistoGraph(const char* name, const char* title, Int_t nbinsx, Double_t xlow, Double_t xup, Int_t nbinsy, Double_t ylow, Double_t yup, Int_t nbinsz, Double_t zlow, Double_t zup)    
	{
      this->p_histograph=new T(name,title,nbinsx,xlow,xup,nbinsy,ylow,yup,nbinsz,zlow,zup);
      this->Detach();
      this->SetObjectStat(false);
    }
    virtual void	SetBins(Int_t nx, const Double_t* xBins)
   {
        this->p_histograph->SetBins(nx,xBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax);
   }
   virtual   void	SetBins(Int_t nx, const Double_t* xBins, Int_t ny, const Double_t* yBins, Int_t nz, const Double_t* zBins)
   {
       this->p_histograph->SetBins(nx,xBins,ny,yBins,nz,zBins);
   }
   virtual   void	SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax, Int_t nz, Double_t zmin, Double_t zmax)
   {
       this->p_histograph->SetBins(nx,xmin,xmax,ny,ymin,ymax,nz,zmin,zmax);
   }
   virtual Int_t	BufferEmpty(Int_t action = 0)
   {
       return this->p_histograph->BufferEmpty(action);
   }
virtual TClass*	Class()
{
    return TH3::Class();
}
virtual void	Copy(TObject& hnew) const
{
    this->p_histograph->Copy(hnew);
}
virtual Int_t	Fill(Double_t x, Double_t y, Double_t z)
{
    return this->p_histograph->Fill(x,y,z);
}
virtual Int_t	Fill(Double_t x, Double_t y, Double_t z, Double_t w)
{
    return this->p_histograph->Fill(x,y,z,w);
}
virtual Int_t	Fill(const char* namex, const char* namey, const char* namez, Double_t w)
{
    return this->p_histograph->Fill(namex,namey,namez,w);
}
virtual Int_t	Fill(const char* namex, Double_t y, const char* namez, Double_t w)
{
    return this->p_histograph->Fill(namex,y,namez,w);
}
virtual Int_t	Fill(const char* namex, const char* namey, Double_t z, Double_t w)
{
    return this->p_histograph->Fill(namex,namey,z,w);
}
virtual Int_t	Fill(Double_t x, const char* namey, const char* namez, Double_t w)
{
    return this->p_histograph->Fill(x,namey,namez,w);
}
virtual Int_t	Fill(Double_t x, const char* namey, Double_t z, Double_t w)
{
    return this->p_histograph->Fill(x,namey,z,w);
}
virtual Int_t	Fill(Double_t x, Double_t y, const char* namez, Double_t w)
{
    return this->p_histograph->Fill(x,y,namez,w);
}
virtual void	FillRandom(const char* fname, Int_t ntimes = 5000)
{
    this->p_histograph->FillRandom(fname,ntimes);
}
virtual void	FillRandom(TH1* h, Int_t ntimes = 5000)
{
    this->p_histograph->FillRandom(h,ntimes);
}
virtual Int_t	FindFirstBinAbove(Double_t threshold = 0, Int_t axis = 1) const
{
    return this->p_histograph->FindFirstBinAbove(threshold,axis);
}
virtual Int_t	FindLastBinAbove(Double_t threshold = 0, Int_t axis = 1) const
{
   return  this->p_histograph->FindLastBinAbove(threshold,axis);
}
virtual void	FitSlicesZ(TF1* f1 = 0, Int_t binminx = 1, Int_t binmaxx = 0, Int_t binminy = 1, Int_t binmaxy = 0, Int_t cut = 0, Option_t* option = "QNR")
{
    this->p_histograph->FitSlicesZ(f1,binminx,binmaxx,binminy,binmaxy,cut,option);
}
virtual Int_t	GetBin(Int_t binx, Int_t biny, Int_t binz) const
{
   return  this->p_histograph->GetBin(binx,biny,binz);
}
virtual Double_t	GetBinContent(Int_t bin) const
{
   return  this->p_histograph->GetBinContent(bin);
}
virtual Double_t	GetBinContent(Int_t bin, Int_t a) const
{
    return this->p_histograph->GetBinContent(bin,a);
}
virtual Double_t	GetBinContent(Int_t binx, Int_t biny, Int_t binz) const
{
    return this->p_histograph->GetBinContent(binx,biny,binz);
}
virtual Double_t	GetBinErrorLow(Int_t binx, Int_t biny, Int_t binz)
{
    return this->p_histograph->GetBinErrorLow(binx,biny,binz);
}
virtual Double_t	GetBinErrorUp(Int_t binx, Int_t biny, Int_t binz)
{
    return this->p_histograph->GetBinErrorUp(binx,biny,binz);
}
virtual Double_t	GetBinWithContent3(Double_t c, Int_t& binx, Int_t& biny, Int_t& binz, Int_t firstx = 0, Int_t lastx = 0, Int_t firsty = 0, Int_t lasty = 0, Int_t firstz = 0, Int_t lastz = 0, Double_t maxdiff = 0) const
{
    return this->p_histograph->GetBinWithContent3(c,binx,biny,binz,firstx,lastx,firsty,lasty,firstz,lastz,maxdiff);
}
virtual Double_t	GetCorrelationFactor(Int_t axis1 = 1, Int_t axis2 = 2) const
{
    return this->p_histograph->GetCorrelationFactor(axis1,axis2);
}
virtual Double_t	GetCovariance(Int_t axis1 = 1, Int_t axis2 = 2) const
{
    return this->p_histograph->GetCovariance(axis1,axis2);
}
virtual void	GetRandom3(Double_t& x, Double_t& y, Double_t& z)
{
    this->p_histograph->GetRandom3(x,y,z);
}
virtual void	GetStats(Double_t* stats) const
{
    this->p_histograph->GetStats(stats);
}
virtual Double_t	Integral(Option_t* option = "") const
{
    return this->p_histograph->Integral(option);
}
virtual Double_t	Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2, Option_t* option = "") const
{
    return this->p_histograph->Integral(binx1,binx2,biny1,biny2,binz1,binz2,option);
}
virtual Double_t	IntegralAndError(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2, Double_t& err, Option_t* option = "") const
{
    return this->p_histograph->IntegralAndError(binx1,binx2,biny1,biny2,binz1,binz2,err,option);
}
virtual Double_t	Interpolate(Double_t x)
{
    return this->p_histograph->Interpolate(x);
}
virtual Double_t	Interpolate(Double_t x, Double_t y)
{
    return this->p_histograph->Interpolate(x,y);
}
virtual Double_t	Interpolate(Double_t x, Double_t y, Double_t z)
{
    return this->p_histograph->Interpolate(x,y,z);
}
virtual TClass*	IsA() const
{
    return this->p_histograph->IsA();
}
virtual Double_t	KolmogorovTest(const TH1* h2, Option_t* option = "") const
{
    return this->p_histograph->KolmogorovTest(h2,option);
}
virtual Long64_t	Merge(TCollection* list)
{
    return this->p_histograph->Merge(list);
}
TH1*	Project3D(Option_t* option = "x") const
{
    return this->p_histograph->Project3D(option);
}
virtual TProfile2D*	Project3DProfile(Option_t* option = "xy") const
{
    return this->p_histograph->Project3DProfile(option);
}
TH1D*	ProjectionX(const char* name = "_px", Int_t iymin = 0, Int_t iymax = -1, Int_t izmin = 0, Int_t izmax = -1, Option_t* option = "") const
{
    return this->p_histograph->ProjectionX(name,iymin,iymax,izmin,izmax,option);
}
TH1D*	ProjectionY(const char* name = "_py", Int_t ixmin = 0, Int_t ixmax = -1, Int_t izmin = 0, Int_t izmax = -1, Option_t* option = "") const
{
    return this->p_histograph->ProjectionY(name,ixmin,ixmax,izmin,izmax,option);
}
TH1D*	ProjectionZ(const char* name = "_pz", Int_t ixmin = 0, Int_t ixmax = -1, Int_t iymin = 0, Int_t iymax = -1, Option_t* option = "") const
{
    return this->p_histograph->ProjectionZ(name,ixmin,ixmax,iymin,iymax,option);
}
virtual void	PutStats(Double_t* stats)
{
    this->p_histograph->PutStats(stats);
}
virtual TH3*	Rebin3D(Int_t nxgroup = 2, Int_t nygroup = 2, Int_t nzgroup = 2, const char* newname = "")
{
    return this->p_histograph->Rebin3D(nxgroup,nygroup,nzgroup,newname);
}
virtual TH3*	RebinX(Int_t ngroup = 2, const char* newname = "")
{
    return this->p_histograph->RebinX(ngroup,newname);
}
virtual TH3*	RebinY(Int_t ngroup = 2, const char* newname = "")
{
    return this->p_histograph->RebinY(ngroup,newname);
}
virtual TH3*	RebinZ(Int_t ngroup = 2, const char* newname = "")
{
    return this->p_histograph->RebinZ(ngroup,newname);
}
virtual void	Reset(Option_t* option = "")
{
    this->p_histograph->Reset(option);
}
virtual void	SetBinContent(Int_t bin, Double_t content)
{
    this->p_histograph->SetBinContent(bin,content);
}
virtual void	SetBinContent(Int_t bin, Int_t a, Double_t content)
{
    this->p_histograph->SetBinContent(bin,a,content);
}
virtual void	SetBinContent(Int_t binx, Int_t biny, Int_t binz, Double_t content)
{
    this->p_histograph->SetBinContent(binx,biny,binz,content);
}
virtual void	SetShowProjection(const char* option = "xy", Int_t nbins = 1)
{
    this->p_histograph->SetShowProjection(option,nbins);
}
virtual void	ShowMembers(TMemberInspector& insp) const
{
    this->p_histograph->ShowMembers(insp);
}
virtual void	Streamer(TBuffer& buf)
{
    this->p_histograph->Streamer(buf);
}
void	StreamerNVirtual(TBuffer& ClassDef_StreamerNVirtual_b)
{
    this->p_histograph->StreamerNVirtual(ClassDef_StreamerNVirtual_b);
}
   
   
};

template <typename T>
class is_TProfile
{
  public :static const bool value =false;
};
template <> class is_TProfile<TProfile>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin ,  Double_t x,  Double_t   y)
    {
      this->p_histograph=new T(name,title,bin,x,y);
      this->Detach();
      this->SetObjectStat(false);
    }
    void Fill( Double_t  x,  Double_t  y)
    {
      this->p_histograph->Fill(x,y);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  w)
    {
      this->p_histograph->Fill(x,y,w);
    }
};

template <typename T>
class is_TProfile2D
{
  public :static const bool value =false;
};
template <> class is_TProfile2D<TProfile2D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile2D<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax);
      this->Detach();
      this->SetObjectStat(false);
    }
    void Fill( Double_t  x,  Double_t  y, Double_t  z)
    {
      this->p_histograph->Fill(x,y,z);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  z,Double_t  w)
    {
      this->p_histograph->Fill(x,y,z,w);
    }
};

template <typename T>
class is_TProfile3D
{
  public :static const bool value =false;
};
template <> class is_TProfile3D<TProfile3D>{ public :static const bool value =true ;};

template< typename T> 
class THistoGraph< T, typename std::enable_if<is_TProfile3D<T>::value,T>::type>:public THistoCommon<T>
{
  public:
    THistoGraph(){};
    THistoGraph(const char* name,const char* title,int bin , Double_t  xmin, Double_t  xmax,int biny,  Double_t  ymin,  Double_t  ymax,int binz,  Double_t  zmin,  Double_t  zmax)
    {
      this->p_histograph=new T(name,title,bin,xmin,xmax,biny,ymin,ymax,binz,zmin,zmax);
      this->Detach();
      this->SetObjectStat(false);
    }
    void Fill( Double_t  x,  Double_t  y, Double_t  z,  Double_t  t)
    {
      this->p_histograph->Fill(x,y,z,t);
    }
    void Fill( Double_t  x,Double_t  y,Double_t  z, Double_t  t, Double_t  w)
    {
      this->p_histograph->Fill(x,y,z,t,w);
    }
};
#endif  
