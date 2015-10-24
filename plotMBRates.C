
void plotMBRates(int totall1rate=20000){
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Wed Aug 26 14:57:01 2015 by ROOT version6.02/10)
//   from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
//   found on file: hiForest_68.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file
   gROOT->Reset();

   TFile *f=new TFile("inputs/openHLT_HF_HLTHeavyFlavour_MVA_HydjetMB_MBseed_fix.root");
   TTree *hlt = (TTree*) f->Get("hltbitanalysis/HltTree");

   int Dmeson20, Dmeson40, Dmeson60;
   int jet60Dmeson, jet80Dmeson;
   int jet60bjet, jet80bjet;
   int zerobias;
   int L1_Centrality0_5;
   int L1_Centrality5_10;
   int L1_Centrality10_30;
   int L1_Centrality30_50;
   int L1_Centrality50_70;
   int L1_Centrality70_100;
   
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt20_v1",&Dmeson20);
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt40_v1",&Dmeson40);
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt60_v1",&Dmeson60);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet60Eta2p3_ForDmesons_v1",&jet60Dmeson);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet80Eta2p3_ForDmesons_v1",&jet80Dmeson);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet60Eta2p3_Forbjets_v1",&jet60bjet);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet80Eta2p3_Forbjets_v1",&jet80bjet);
   hlt->SetBranchAddress("L1_ZeroBias",&zerobias);
   
   hlt->SetBranchAddress("L1_Centrality0_5",&L1_Centrality0_5);
   hlt->SetBranchAddress("L1_Centrality5_10",&L1_Centrality5_10);
   hlt->SetBranchAddress("L1_Centrality10_30",&L1_Centrality10_30);
   hlt->SetBranchAddress("L1_Centrality30_50",&L1_Centrality30_50);
   hlt->SetBranchAddress("L1_Centrality50_70",&L1_Centrality50_70);
   hlt->SetBranchAddress("L1_Centrality70_100",&L1_Centrality70_100);
   
   
   double counter_Dmeson20=0;
   double counter_Dmeson40=0;
   double counter_Dmeson60=0;
   double counter_jet60Dmeson=0;
   double counter_jet80Dmeson=0;
   double counter_jet60bjet=0;
   double counter_jet80bjet=0;
   double counter_zerobias=0;

   double counter_cent0_5=0;
   double counter_cent5_10=0;
   double counter_cent10_30=0;
   double counter_cent30_50=0;
   double counter_cent50_70=0;
   double counter_cent70_100=0;
   
   Long64_t nentries = hlt->GetEntries();

   Long64_t nbytes = 0;
   
   for (Long64_t i=0; i<nentries;i++) {
      hlt->GetEntry(i);

      if(Dmeson20)counter_Dmeson20++;
      if(Dmeson40)counter_Dmeson40++;
      if(Dmeson60)counter_Dmeson60++;
      if(jet60Dmeson)counter_jet60Dmeson++;
      if(jet80Dmeson)counter_jet80Dmeson++;
      if(jet60bjet)counter_jet60bjet++;
      if(jet80bjet)counter_jet80bjet++;
      if(zerobias)counter_zerobias++;

      if(L1_Centrality0_5)counter_cent0_5++;
      if(L1_Centrality5_10)counter_cent5_10++;
      if(L1_Centrality10_30)counter_cent10_30++;
      if(L1_Centrality30_50)counter_cent30_50++;
      if(L1_Centrality50_70)counter_cent50_70++;
      if(L1_Centrality70_100)counter_cent70_100++;
   }
   
   // /counter_zerobias*totall1rate
   
   cout<<"---------------------------- Rates ----------------------------"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt20_v1="<<counter_Dmeson20/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt40_v1="<<counter_Dmeson40/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt60_v1="<<counter_Dmeson60/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet60Eta2p3_ForDmesons_v1="<<counter_jet60Dmeson/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet80Eta2p3_ForDmesons_v1="<<counter_jet80Dmeson/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet60Eta2p3_Forbjets_v1="<<counter_jet60bjet/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet80Eta2p3_Forbjets_v1="<<counter_jet80bjet/counter_zerobias*totall1rate<<" Hz"<<endl;

   cout<<"L1_Centrality0_5="<<counter_cent0_5/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"L1_Centrality5_10="<<counter_cent5_10/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"L1_Centrality10_30="<<counter_cent10_30/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"L1_Centrality30_50="<<counter_cent30_50/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"L1_Centrality50_70="<<counter_cent50_70/counter_zerobias*totall1rate<<" Hz"<<endl;
   cout<<"L1_Centrality70_100="<<counter_cent70_100/counter_zerobias*totall1rate<<" Hz"<<endl;

}
