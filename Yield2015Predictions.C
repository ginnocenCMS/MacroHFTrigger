void Yield2015Predictions(){

  #define da_BIN_NUM 11
  #define NptbinTrigger 11
  Double_t dataranges[da_BIN_NUM+1] = {2.5,3.5,4.5,5.5,7.,9.,11.,13.,16.,20.,28.,40.};
  Double_t datapoints[da_BIN_NUM] = {3.,4.,5.,6.25,8.,10.,12.,14.5,18.,24.,34.};
  Double_t ptcenters[da_BIN_NUM] = {2.91.,3.91.,4.91.,6.10.25,7.78,9.79,11.8,14.17,17.52.,22.71,31.89};
  
  Double_t ptbinTrigger[NptbinTrigger+1] = {2.5,3.5,4.5,5.5,7.,9.,11.,13.,16.,20.,28.,40.};
  Double_t ptbinTriggerwidth[NptbinTrigger+1] = {1,1,1,1.5,2,2,2,3,4,8,12};
  
  TFile*file=new TFile("DataCMSfile/PromptRAA_D0_PbPb_spectrum_fonll_effunpre_cent0to100_ptbin12_y1_dataplusfonll.root");
  TH1F* hSpectrumOriginal=(TH1F*)file->Get("D0_pbpb_spectrum");
  TH1F* hSpectrum=(TH1F*)file->Get("D0_pbpb_spectrum");
  TFile*fileAcc=new TFile("DataCMSfile/D0_PbPb_acc_eff_ptbin_14_ybin_6_prompt_FONLLweight_cent-0to100_dataptshape_y1_Ncollweight1.root");
  TH1F* hAcc=(TH1F*)fileAcc->Get("d0accxeff_pt");
  
  TH1F* hDen = new TH1F("hDen","",da_BIN_NUM,dataranges);
  
  hSpectrum->Scale(2*0.0388*3.01781340000000000e+07*5.67e-9*1./0.94);

  Double_t iexl[da_BIN_NUM],iexr[da_BIN_NUM],acrosssec[da_BIN_NUM], efficiency[da_BIN_NUM],acrosssecerr[da_BIN_NUM],  aminErr[da_BIN_NUM], amaxErr[da_BIN_NUM];
  int xsecbin=-1;
  
  
  for(int i=0;i<da_BIN_NUM;i++){
      iexl[i] = datapoints[i]-dataranges[i];
      iexr[i] = dataranges[i+1]-datapoints[i];
      xsecbin=hSpectrum->FindBin(datapoints[i]);
      xsecbinEff=hAcc->FindBin(datapoints[i]);
      acrosssec[i]=hSpectrum->GetBinContent(xsecbin);
      efficiency[i]=hAcc->GetBinContent(xsecbinEff);
      acrosssecerr[i]=hSpectrum->GetBinError(xsecbin);
      double yields=acrosssec[i]*efficiency[i]*ptbinTriggerwidth[i];
      hDen->SetBinContent(i+1,acrosssec[i]);
      cout<<"xsecbin="<<xsecbin<<",bin center="<<datapoints[i]<<",cross section="<<acrosssec[i]<<",error="<<acrosssecerr[i]<<",eff="<<efficiency[i]<<", Nyields="<<yields<<endl;
  }   

  TGraphAsymmErrors* gcrosssec = new TGraphAsymmErrors(da_BIN_NUM, ptcenters, acrosssec, iexl, iexr, acrosssecerr, acrosssecerr);
  gcrosssec->SetMarkerStyle(20);
  gcrosssec->SetMarkerSize(0.7);
  gcrosssec->SetMarkerColor(kBlack);
  gcrosssec->SetLineWidth(2);
  gcrosssec->SetLineColor(kBlack);
  TCanvas* crescaled =  new TCanvas("crescaled","",400,400);
  crescaled->SetLogy();
  TH2F* hempty_crescaled=new TH2F("hempty_crescaled","",10,0,60.,10.,0.0001,10000000000);
  hempty_crescaled->SetStats(0);
  hempty_crescaled->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  hempty_crescaled->GetYaxis()->SetTitle("dN/dpt");
  hempty_crescaled->GetXaxis()->SetTitleOffset(1.);
  hempty_crescaled->GetYaxis()->SetTitleOffset(.9);
  hempty_crescaled->GetXaxis()->SetTitleSize(0.045);
  hempty_crescaled->GetYaxis()->SetTitleSize(0.045);
  hempty_crescaled->GetXaxis()->SetTitleFont(42);
  hempty_crescaled->GetYaxis()->SetTitleFont(42);
  hempty_crescaled->GetXaxis()->SetLabelFont(42);
  hempty_crescaled->GetYaxis()->SetLabelFont(42);
  hempty_crescaled->GetXaxis()->SetLabelSize(0.04);
  hempty_crescaled->GetYaxis()->SetLabelSize(0.04);
  hempty_crescaled->Draw();

  gcrosssec->Draw("psame");
  TLegend* legcrosssec = new TLegend(0.60,0.80,0.90,0.90);
  legcrosssec->SetFillColor(0);
  legcrosssec->SetBorderSize(0);
  legcrosssec->AddEntry(gcrosssec,"Total unc.","lep");
  legcrosssec->Draw("same");

  TF1* fdata = new TF1("fdata","[3]*pow(10,[0]*exp([1]*x)+[2])",dataranges[0],dataranges[da_BIN_NUM]);
  fdata->SetParLimits(1,-0.20,-0.005);
  fdata->SetParLimits(0,3.,10.);
  fdata->SetParLimits(2,-2.,0.);
  fdata->SetParLimits(3,0,1000);
  fdata->Print();
  gcrosssec->Fit("fdata","q","",dataranges[0],dataranges[da_BIN_NUM]);
  
  
  TH1F* hfitref = new TH1F("hfitref","",NptbinTrigger,ptbinTrigger);
  TH1F* hfinalspectrum = new TH1F("hfinalspectrum","",NptbinTrigger,ptbinTrigger);
  
  for (int j=0;j<NptbinTrigger;j++){
    double integ = fdata->Integral(ptbinTrigger[j],ptbinTrigger[j+1])/ptbinTriggerwidth[j];
    //double integ = hSpectrum->GetBinContent(hSpectrum->FindBin(datapoints[j]));
    //double yieldsfinal=integ*ptbinTriggerwidth[j]*efficiency[j];
    double yieldsfinal=integ;
    hfinalspectrum->SetBinContent(j+1,yieldsfinal);
    cout<<"yields="<<yieldsfinal<<endl;
  }
  
  TH1F* hratio=(TH1F*)hfinalspectrum->Clone("hratio");
  hratio->Divide(hDen);
  
  TCanvas* cratio =  new TCanvas("cratio","",400,400);
  hratio->SetMinimum(0);
  hratio->SetMaximum(2);
  hratio->Draw();

}

