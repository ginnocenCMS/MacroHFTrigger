void Yield2015Predictions(){

  double energyfactor=2;
  #define da_BIN_NUM 11  
  Double_t dataranges[da_BIN_NUM+1] = {2.5,3.5,4.5,5.5,7.,9.,11.,13.,16.,20.,28.,40.};
  Double_t datapoints[da_BIN_NUM] = {3.,4.,5.,6.25,8.,10.,12.,14.5,18.,24.,34.};
  Double_t ptcenters[da_BIN_NUM] = {2.91.,3.91.,4.91.,6.10.25,7.78,9.79,11.8,14.17,17.52.,22.71,31.89};

  #define NptbinTrigger 7
  Double_t ptbinTrigger[NptbinTrigger+1] = {5,10,15,20,25,30,35,40};
  
  #define NptbinTriggerext 19
  Double_t ptbinTriggerext[NptbinTriggerext+1] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
  Double_t prescales[NptbinTriggerext] = {60,60,60,30,30,30,30,1,1,1,1,1,1,1,1,1,1,1,1};
  //Double_t prescales[NptbinTriggerext] = {300,300,300,300,300,300,300,300,300,300,300,300,300,300,300,300,300,300,300};
  //Double_t prescales[NptbinTriggerext] = {300,300,300,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50};
  
  /*
  index=6, pt centre=37.5,cross section=841.357,ratio over 28-40=1
  index=7, pt centre=42.5,cross section=427.663,ratio over 28-40=0.508301
  index=8, pt centre=47.5,cross section=217.087,ratio over 28-40=0.25802
  index=9, pt centre=52.5,cross section=116.917,ratio over 28-40=0.138962
  index=10, pt centre=57.5,cross section=66.0846,ratio over 28-40=0.0785453
  index=11, pt centre=62.5,cross section=37.4163,ratio over 28-40=0.0444713
  index=12, pt centre=67.5,cross section=24.3227,ratio over 28-40=0.028909
  index=13, pt centre=72.5,cross section=15.2512,ratio over 28-40=0.018127
  index=14, pt centre=77.5,cross section=9.79585,ratio over 28-40=0.0116429
  index=15, pt centre=82.5,cross section=6.426,ratio over 28-40=0.00763767
  index=16, pt centre=87.5,cross section=4.12146,ratio over 28-40=0.00489858
  index=17, pt centre=92.5,cross section=2.98778,ratio over 28-40=0.00355114
  index=18, pt centre=97.5,cross section=2.07216,ratio over 28-40=0.00246288
  */
   int binreference=6;  
  const int rescaledtobin=12;  
  double ratiorescale[rescaledtobin]={0.508301,0.25802,0.138962,0.0785453,0.0444713,0.028909,0.018127,0.0116429,0.00763767,0.00489858,0.00355114,0.00246288};

  //#define NptbinTrigger 11
  //Double_t ptbinTrigger[NptbinTrigger+1] = {2.5,3.5,4.5,5.5,7.,9.,11.,13.,16.,20.,28.,40.};
  
  TH1F* hfitref = new TH1F("hfitref","",NptbinTriggerext,ptbinTriggerext);
  
  TFile*file=new TFile("DataCMSfile/PromptRAA_D0_PbPb_spectrum_fonll_effunpre_cent0to100_ptbin12_y1_dataplusfonll.root");
  TH1F* hSpectrumOriginal=(TH1F*)file->Get("D0_pbpb_spectrum");
  TH1F* hSpectrum=(TH1F*)file->Get("D0_pbpb_spectrum");
  TFile*fileAcc=new TFile("DataCMSfile/D0_PbPb_acc_eff_ptbin_14_ybin_6_prompt_FONLLweight_cent-0to100_dataptshape_y1_Ncollweight1.root");
  TH1F* hAcc=(TH1F*)fileAcc->Get("d0accxeff_pt");
  
  TH1F* hDen = new TH1F("hDen","",da_BIN_NUM,dataranges);
  
  //1e9/30e6 x 2. x 10/1.5=444
  hSpectrum->Scale(2*0.0388*3.01781340000000000e+07*5.67e-9*1./0.94*222.);

  Double_t iexl[da_BIN_NUM],iexr[da_BIN_NUM],acrosssec[da_BIN_NUM], efficiency[da_BIN_NUM],acrosssecerr[da_BIN_NUM],aminErr[da_BIN_NUM],amaxErr[da_BIN_NUM];
  int xsecbin=-1;
  
  for(int i=0;i<da_BIN_NUM;i++){
      iexl[i] = datapoints[i]-dataranges[i];
      iexr[i] = dataranges[i+1]-datapoints[i];
      xsecbin=hSpectrum->FindBin(datapoints[i]);
      xsecbinEff=hAcc->FindBin(datapoints[i]);
      acrosssec[i]=hSpectrum->GetBinContent(xsecbin);
      efficiency[i]=hAcc->GetBinContent(xsecbinEff);
      acrosssecerr[i]=hSpectrum->GetBinError(xsecbin);
      double yields=acrosssec[i]*efficiency[i]*(dataranges[i+1]-dataranges[i]);
      hDen->SetBinContent(i+1,acrosssec[i]);
      cout<<"bin center="<<datapoints[i]<<",dN/dpt="<<acrosssec[i]<<",error dN/dpt="<<acrosssecerr[i]/acrosssec[i]<<",eff="<<efficiency[i]<<", Nyields="<<yields<<endl;
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
  gcrosssec->Fit("fdata","q","",dataranges[0],dataranges[da_BIN_NUM]);
  crescaled->SaveAs("crescaled.pdf");
  
  TH1F* hrebinnedspectrum = new TH1F("hrebinnedspectrum","",NptbinTrigger,ptbinTrigger);
  TH1F* hrebinnedspectrumext = new TH1F("hrebinnedspectrumext","",NptbinTriggerext,ptbinTriggerext);
  TH1F* hpredictionRawYields = new TH1F("hpredictionRawYields","",NptbinTriggerext,ptbinTriggerext);
  double integ=0;
  for (int j=0;j<NptbinTrigger;j++){
    integ = fdata->Integral(ptbinTrigger[j],ptbinTrigger[j+1])/hfitref->GetBinWidth(j+1);
    hrebinnedspectrum->SetBinContent(j+1,integ);
  }
  
  for (int j=0;j<NptbinTriggerext;j++){
    integ=hrebinnedspectrum->GetBinContent(j+1);
    hrebinnedspectrumext->SetBinContent(j+1,integ);
    if(j>6){
      integ=hrebinnedspectrum->GetBinContent(binreference+1)*ratiorescale[j-6-1];
      hrebinnedspectrumext->SetBinContent(j+1,integ);
      hrebinnedspectrumext->SetBinError(j+1,TMath::Sqrt(integ));
    }
    hpredictionRawYields->SetBinContent(j+1,integ*energyfactor*hfitref->GetBinWidth(j+1)/prescales[j]);
    cout<<"Yield expected="<<integ*energyfactor*hfitref->GetBinWidth(j+1)<<endl;
  }

  
  //TH1F* hratio=(TH1F*)hrebinnedspectrum->Clone("hratio");
  //hratio->Divide(hDen);
  //TCanvas* cratio =  new TCanvas("cratio","",400,400);
  //hratio->SetMinimum(0);
  //hratio->SetMaximum(2);
  //hratio->Draw();
  
  
  TCanvas* cData =  new TCanvas("cData","",600,400);
  cData->SetLogy();
  TH2F* hempty_cData=new TH2F("hempty_cData","",10,0,100.,10.,0.001,1000000000);
  hempty_cData->SetStats(0);
  hempty_cData->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  hempty_cData->GetYaxis()->SetTitle("rebinned CMS result @2.76 TeV");
  hempty_cData->GetXaxis()->SetTitleOffset(1.);
  hempty_cData->GetYaxis()->SetTitleOffset(1.2);
  hempty_cData->GetXaxis()->SetTitleSize(0.045);
  hempty_cData->GetYaxis()->SetTitleSize(0.045);
  hempty_cData->GetXaxis()->SetTitleFont(42);
  hempty_cData->GetYaxis()->SetTitleFont(42);
  hempty_cData->GetXaxis()->SetLabelFont(42);
  hempty_cData->GetYaxis()->SetLabelFont(42);
  hempty_cData->GetXaxis()->SetLabelSize(0.04);
  hempty_cData->GetYaxis()->SetLabelSize(0.04);
  hempty_cData->Draw();
  hrebinnedspectrum->Draw("same");
  hrebinnedspectrum->SetLineColor(1);
  hrebinnedspectrum->SetLineWidth(2);
  hrebinnedspectrumext->SetLineColor(2);
  hrebinnedspectrumext->SetMarkerColor(2);
  hrebinnedspectrumext->Draw("same");
  cData->SaveAs("cdata.pdf");

  

  TCanvas* cprediction =  new TCanvas("cprediction","",600,400);
  cprediction->SetLogy();
  TH2F* hempty_cprediction=new TH2F("hempty_cprediction","",10,0,100.,10.,0.001,1000000000);
  hempty_cprediction->SetStats(0);
  hempty_cprediction->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  hempty_cprediction->GetYaxis()->SetTitle("Yields from Fit @ 5.02 TeV, eff x acc=1");
  hempty_cprediction->GetXaxis()->SetTitleOffset(1.);
  hempty_cprediction->GetYaxis()->SetTitleOffset(1.2);
  hempty_cprediction->GetXaxis()->SetTitleSize(0.045);
  hempty_cprediction->GetYaxis()->SetTitleSize(0.045);
  hempty_cprediction->GetXaxis()->SetTitleFont(42);
  hempty_cprediction->GetYaxis()->SetTitleFont(42);
  hempty_cprediction->GetXaxis()->SetLabelFont(42);
  hempty_cprediction->GetYaxis()->SetLabelFont(42);
  hempty_cprediction->GetXaxis()->SetLabelSize(0.04);
  hempty_cprediction->GetYaxis()->SetLabelSize(0.04);
  hempty_cprediction->Draw();
  hpredictionRawYields->Draw("psame");
  TLine* lin20=new TLine(20,1.,20.,10000.);
  lin20->SetLineStyle(2);
  lin20->SetLineColor(kGray+1);
  lin20->Draw();
  TLine* lin40=new TLine(40,1.,40.,10000.);
  lin40->SetLineStyle(2);
  lin40->SetLineColor(2);
  lin40->Draw();
  cprediction->SaveAs("cprediction.pdf");


}

