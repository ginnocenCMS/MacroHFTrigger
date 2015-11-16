#include <iostream>     // std::cout
#include <TFile.h>
#include <TTree.h>

void plotMBRatesPbPb(int totall1rate=30000){
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Wed Aug 26 14:57:01 2015 by ROOT version6.02/10)
//   from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
//   found on file: hiForest_68.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file

   TFile *f=new TFile("../InputPP/openHLT_HF_twang-Hydjet_750_HiFall15_755_L1v5_755patch1_1115.root");
   TTree *hlt = (TTree*) f->Get("hltbitanalysis/HltTree");

   int HLT_HIDmesonHITrackingGlobal_Dpt20_v1;
   int HLT_HIDmesonHITrackingGlobal_Dpt30_v1;
   int HLT_HIDmesonHITrackingGlobal_Dpt40_v1;
   int HLT_HIDmesonHITrackingGlobal_Dpt50_v1;
   int HLT_HIDmesonHITrackingGlobal_Dpt60_v1;
   
   int HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1;
   int HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1;
   int HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1;
   int HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1;
   int HLT_HIPuAK4CaloDJet60_Eta2p1_v1;
   int HLT_HIPuAK4CaloDJet80_Eta2p1_v1;
   
   int L1_SingleS1Jet16_BptxAND;
   int L1_SingleS1Jet24_BptxAND;
   int L1_SingleS1Jet28_BptxAND;
   int L1_SingleJet44_BptxAND;
   int L1_SingleS1Jet48_BptxAND;
   int L1_ZeroBias;

      
   hlt->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_v1",&HLT_HIDmesonHITrackingGlobal_Dpt20_v1);
   hlt->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_v1",&HLT_HIDmesonHITrackingGlobal_Dpt30_v1);
   hlt->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_v1",&HLT_HIDmesonHITrackingGlobal_Dpt40_v1);
   hlt->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt50_v1",&HLT_HIDmesonHITrackingGlobal_Dpt50_v1);
   hlt->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_v1",&HLT_HIDmesonHITrackingGlobal_Dpt60_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1",&HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1",&HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1",&HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1",&HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloDJet60_Eta2p1_v1",&HLT_HIPuAK4CaloDJet60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_HIPuAK4CaloDJet80_Eta2p1_v1",&HLT_HIPuAK4CaloDJet80_Eta2p1_v1);
   hlt->SetBranchAddress("L1_SingleS1Jet16_BptxAND",&L1_SingleS1Jet16_BptxAND);
   hlt->SetBranchAddress("L1_SingleS1Jet28_BptxAND",&L1_SingleS1Jet28_BptxAND);
   hlt->SetBranchAddress("L1_SingleJet44_BptxAND",&L1_SingleJet44_BptxAND);
   hlt->SetBranchAddress("L1_SingleS1Jet48_BptxAND",&L1_SingleS1Jet48_BptxAND);
   hlt->SetBranchAddress("L1_ZeroBias",&L1_ZeroBias);

   
   double counter_HLT_HIDmesonHITrackingGlobal_Dpt20_v1=0;
   double counter_HLT_HIDmesonHITrackingGlobal_Dpt30_v1=0;
   double counter_HLT_HIDmesonHITrackingGlobal_Dpt40_v1=0;
   double counter_HLT_HIDmesonHITrackingGlobal_Dpt50_v1=0;
   double counter_HLT_HIDmesonHITrackingGlobal_Dpt60_v1=0;
   double counter_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1=0;
   double counter_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1=0;
   double counter_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1=0;
   double counter_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1=0;
   double counter_HLT_HIPuAK4CaloDJet60_Eta2p1_v1=0;
   double counter_HLT_HIPuAK4CaloDJet80_Eta2p1_v1=0;
   double counter_L1_SingleS1Jet16_BptxAND=0;
   double counter_L1_SingleS1Jet28_BptxAND=0;
   double counter_L1_SingleJet44_BptxAND=0;
   double counter_L1_SingleS1Jet48_BptxAND=0;
   double counter_L1_ZeroBias=0;

   Long64_t nentries = hlt->GetEntries();

   Long64_t nbytes = 0;
   
   for (Long64_t i=0; i<nentries;i++) {
      hlt->GetEntry(i);

      if(HLT_HIDmesonHITrackingGlobal_Dpt20_v1&&L1_SingleS1Jet28_BptxAND)counter_HLT_HIDmesonHITrackingGlobal_Dpt20_v1++;
      if(HLT_HIDmesonHITrackingGlobal_Dpt30_v1&&L1_SingleJet44_BptxAND)counter_HLT_HIDmesonHITrackingGlobal_Dpt30_v1++;
      if(HLT_HIDmesonHITrackingGlobal_Dpt40_v1&&L1_SingleJet44_BptxAND)counter_HLT_HIDmesonHITrackingGlobal_Dpt40_v1++;
      if(HLT_HIDmesonHITrackingGlobal_Dpt50_v1&&L1_SingleS1Jet48_BptxAND)counter_HLT_HIDmesonHITrackingGlobal_Dpt50_v1++;
      if(HLT_HIDmesonHITrackingGlobal_Dpt60_v1&&L1_SingleS1Jet48_BptxAND)counter_HLT_HIDmesonHITrackingGlobal_Dpt60_v1++;
      if(HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1&&L1_SingleS1Jet48_BptxAND)counter_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1++;
      if(HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1&&L1_SingleJet44_BptxAND)counter_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1++;
      if(HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1&&L1_SingleS1Jet48_BptxAND)counter_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1++;
      if(HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1&&L1_SingleJet44_BptxAND)counter_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1++;
      if(HLT_HIPuAK4CaloDJet60_Eta2p1_v1)counter_HLT_HIPuAK4CaloDJet60_Eta2p1_v1++;
      if(HLT_HIPuAK4CaloDJet80_Eta2p1_v1)counter_HLT_HIPuAK4CaloDJet80_Eta2p1_v1++;
      if(L1_SingleS1Jet16_BptxAND)counter_L1_SingleS1Jet16_BptxAND++;
      if(L1_SingleS1Jet28_BptxAND)counter_L1_SingleS1Jet28_BptxAND++;
      if(L1_SingleJet44_BptxAND)counter_L1_SingleJet44_BptxAND++;
      if(L1_SingleS1Jet48_BptxAND)counter_L1_SingleS1Jet48_BptxAND++;
      if(L1_ZeroBias)counter_L1_ZeroBias++;

      
   }
   
   // /counter_L1_ZeroBias*totall1rate
   
   cout<<"---------------------------- Rates ----------------------------"<<endl;
   cout<<"HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIPuAK4CaloDJet60_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloDJet60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIPuAK4CaloDJet80_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloDJet80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1="<<counter_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;

   cout<<"HLT_HIDmesonHITrackingGlobal_Dpt20_v1="<<counter_HLT_HIDmesonHITrackingGlobal_Dpt20_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIDmesonHITrackingGlobal_Dpt30_v1="<<counter_HLT_HIDmesonHITrackingGlobal_Dpt30_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIDmesonHITrackingGlobal_Dpt40_v1="<<counter_HLT_HIDmesonHITrackingGlobal_Dpt40_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIDmesonHITrackingGlobal_Dpt50_v1="<<counter_HLT_HIDmesonHITrackingGlobal_Dpt50_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_HIDmesonHITrackingGlobal_Dpt60_v1="<<counter_HLT_HIDmesonHITrackingGlobal_Dpt60_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   
   cout<<"L1_SingleS1Jet16_BptxAND="<<counter_L1_SingleS1Jet16_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleS1Jet28_BptxAND="<<counter_L1_SingleS1Jet28_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleJet44_BptxAND="<<counter_L1_SingleJet44_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleS1Jet48_BptxAND="<<counter_L1_SingleS1Jet48_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;

   

}
