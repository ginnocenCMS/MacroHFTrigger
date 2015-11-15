#include <iostream>     // std::cout
#include <TFile.h>
#include <TTree.h>

void plotMBRatesPP(int totall1rate=1600*1.4*11245){
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Wed Aug 26 14:57:01 2015 by ROOT version6.02/10)
//   from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
//   found on file: hiForest_68.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file

   TFile *f=new TFile("../InputPP/openHLT_HF_ppGlobaTrackingPPmenuHFlowpuv11_MBseed_TaweiPythia8MB7415_755_v20_MBseed_1116.root");
   TTree *hlt = (TTree*) f->Get("hltbitanalysis/HltTree");

   int HLT_DmesonPPTrackingGlobal_Dpt8_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt15_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt20_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt30_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt40_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt50_v1;
   int HLT_DmesonPPTrackingGlobal_Dpt60_v1;
   int HLT_AK4PFBJetBSSV80_Eta2p1_v1;
   int HLT_AK4PFBJetBSSV60_Eta2p1_v1;
   int HLT_AK4PFBJetBCSV80_Eta2p1_v1;
   int HLT_AK4PFBJetBCSV60_Eta2p1_v1;
   int HLT_AK4PFDJet60_Eta2p1_v1;
   int HLT_AK4PFDJet80_Eta2p1_v1;
   int L1_SingleJet16_BptxAND;
   int L1_SingleJet24_BptxAND;
   int L1_SingleJet28_BptxAND;
   int L1_SingleJet40_BptxAND;
   int L1_SingleJet48_BptxAND;
   int L1_ZeroBias;

      
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt8_v1",&HLT_DmesonPPTrackingGlobal_Dpt8_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt15_v1",&HLT_DmesonPPTrackingGlobal_Dpt15_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt20_v1",&HLT_DmesonPPTrackingGlobal_Dpt20_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt30_v1",&HLT_DmesonPPTrackingGlobal_Dpt30_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt40_v1",&HLT_DmesonPPTrackingGlobal_Dpt40_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt50_v1",&HLT_DmesonPPTrackingGlobal_Dpt50_v1);
   hlt->SetBranchAddress("HLT_DmesonPPTrackingGlobal_Dpt60_v1",&HLT_DmesonPPTrackingGlobal_Dpt60_v1);
   hlt->SetBranchAddress("HLT_AK4PFBJetBSSV80_Eta2p1_v1",&HLT_AK4PFBJetBSSV80_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_AK4PFBJetBSSV60_Eta2p1_v1",&HLT_AK4PFBJetBSSV60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_AK4PFBJetBCSV80_Eta2p1_v1",&HLT_AK4PFBJetBCSV80_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_AK4PFBJetBCSV60_Eta2p1_v1",&HLT_AK4PFBJetBCSV60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_AK4PFDJet60_Eta2p1_v1",&HLT_AK4PFDJet60_Eta2p1_v1);
   hlt->SetBranchAddress("HLT_AK4PFDJet80_Eta2p1_v1",&HLT_AK4PFDJet80_Eta2p1_v1);
   hlt->SetBranchAddress("L1_SingleJet16_BptxAND",&L1_SingleJet16_BptxAND);
   hlt->SetBranchAddress("L1_SingleJet24_BptxAND",&L1_SingleJet24_BptxAND);
   hlt->SetBranchAddress("L1_SingleJet28_BptxAND",&L1_SingleJet28_BptxAND);
   hlt->SetBranchAddress("L1_SingleJet40_BptxAND",&L1_SingleJet40_BptxAND);
   hlt->SetBranchAddress("L1_SingleJet48_BptxAND",&L1_SingleJet48_BptxAND);
   hlt->SetBranchAddress("L1_ZeroBias",&L1_ZeroBias);

   
   double counter_HLT_DmesonPPTrackingGlobal_Dpt8_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt15_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt20_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt30_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt40_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt50_v1=0;
   double counter_HLT_DmesonPPTrackingGlobal_Dpt60_v1=0;
   double counter_HLT_AK4PFBJetBSSV80_Eta2p1_v1=0;
   double counter_HLT_AK4PFBJetBSSV60_Eta2p1_v1=0;
   double counter_HLT_AK4PFBJetBCSV80_Eta2p1_v1=0;
   double counter_HLT_AK4PFBJetBCSV60_Eta2p1_v1=0;
   double counter_HLT_AK4PFDJet60_Eta2p1_v1=0;
   double counter_HLT_AK4PFDJet80_Eta2p1_v1=0;
   double counter_L1_SingleJet16_BptxAND=0;
   double counter_L1_SingleJet24_BptxAND=0;
   double counter_L1_SingleJet28_BptxAND=0;
   double counter_L1_SingleJet40_BptxAND=0;
   double counter_L1_SingleJet48_BptxAND=0;
   double counter_L1_ZeroBias=0;

   Long64_t nentries = hlt->GetEntries();

   Long64_t nbytes = 0;
   
   for (Long64_t i=0; i<nentries;i++) {
      hlt->GetEntry(i);

      if(HLT_DmesonPPTrackingGlobal_Dpt8_v1&&L1_SingleJet16_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt8_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt15_v1&&L1_SingleJet24_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt15_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt20_v1&&L1_SingleJet28_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt20_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt30_v1&&L1_SingleJet40_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt30_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt40_v1&&L1_SingleJet40_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt40_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt50_v1&&L1_SingleJet48_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt50_v1++;
      if(HLT_DmesonPPTrackingGlobal_Dpt60_v1&&L1_SingleJet48_BptxAND)counter_HLT_DmesonPPTrackingGlobal_Dpt60_v1++;
      if(HLT_AK4PFBJetBSSV80_Eta2p1_v1&&L1_SingleJet48_BptxAND)counter_HLT_AK4PFBJetBSSV80_Eta2p1_v1++;
      if(HLT_AK4PFBJetBSSV60_Eta2p1_v1&&L1_SingleJet40_BptxAND)counter_HLT_AK4PFBJetBSSV60_Eta2p1_v1++;
      if(HLT_AK4PFBJetBCSV80_Eta2p1_v1&&L1_SingleJet48_BptxAND)counter_HLT_AK4PFBJetBCSV80_Eta2p1_v1++;
      if(HLT_AK4PFBJetBCSV60_Eta2p1_v1&&L1_SingleJet40_BptxAND)counter_HLT_AK4PFBJetBCSV60_Eta2p1_v1++;
      if(HLT_AK4PFDJet60_Eta2p1_v1)counter_HLT_AK4PFDJet60_Eta2p1_v1++;
      if(HLT_AK4PFDJet80_Eta2p1_v1)counter_HLT_AK4PFDJet80_Eta2p1_v1++;
      if(L1_SingleJet16_BptxAND)counter_L1_SingleJet16_BptxAND++;
      if(L1_SingleJet24_BptxAND)counter_L1_SingleJet24_BptxAND++;
      if(L1_SingleJet28_BptxAND)counter_L1_SingleJet28_BptxAND++;
      if(L1_SingleJet40_BptxAND)counter_L1_SingleJet40_BptxAND++;
      if(L1_SingleJet48_BptxAND)counter_L1_SingleJet48_BptxAND++;
      if(L1_ZeroBias)counter_L1_ZeroBias++;

      
   }
   
   // /counter_L1_ZeroBias*totall1rate
   
   cout<<"---------------------------- Rates ----------------------------"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt8_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt8_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt15_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt15_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt20_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt20_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt30_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt30_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt40_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt40_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt50_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt50_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonPPTrackingGlobal_Dpt60_v1="<<counter_HLT_DmesonPPTrackingGlobal_Dpt60_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   
   
   cout<<"HLT_AK4PFBJetBSSV80_Eta2p1_v1="<<counter_HLT_AK4PFBJetBSSV80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_AK4PFBJetBSSV60_Eta2p1_v1="<<counter_HLT_AK4PFBJetBSSV60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_AK4PFBJetBCSV80_Eta2p1_v1="<<counter_HLT_AK4PFBJetBCSV80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_AK4PFBJetBCSV60_Eta2p1_v1="<<counter_HLT_AK4PFBJetBCSV60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_AK4PFDJet60_Eta2p1_v1="<<counter_HLT_AK4PFDJet60_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_AK4PFDJet80_Eta2p1_v1="<<counter_HLT_AK4PFDJet80_Eta2p1_v1/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   
   cout<<"L1_SingleJet16_BptxAND="<<counter_L1_SingleJet16_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleJet24_BptxAND="<<counter_L1_SingleJet24_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleJet28_BptxAND="<<counter_L1_SingleJet28_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleJet40_BptxAND="<<counter_L1_SingleJet40_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;
   cout<<"L1_SingleJet48_BptxAND="<<counter_L1_SingleJet48_BptxAND/counter_L1_ZeroBias*totall1rate<<" Hz"<<endl;

   

}
