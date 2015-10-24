
void plotMBRatesHF(){
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Wed Aug 26 14:57:01 2015 by ROOT version6.02/10)
//   from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
//   found on file: hiForest_68.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file
   gROOT->Reset();

   TFile *f=new TFile("openHLT_MB_V48.root");
   TTree *hlt = (TTree*) f->Get("hltbitanalysis/HltTree");

   int Dmeson20, Dmeson40, Dmeson60;
   int jet60Dmeson, jet80Dmeson;
   int jet60bjet, jet80bjet;
   int zerobias;
   
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt20_v1",&Dmeson20);
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt40_v1",&Dmeson40);
   hlt->SetBranchAddress("HLT_DmesonTrackingGlobalPt8_Dpt60_v1",&Dmeson60);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet60Eta2p3_ForDmesons_v1",&jet60Dmeson);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet80Eta2p3_ForDmesons_v1",&jet80Dmeson);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet60Eta2p3_Forbjets_v1",&jet60bjet);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet80Eta2p3_Forbjets_v1",&jet80bjet);
   hlt->SetBranchAddress("L1_ZeroBias",&zerobias);
   
   
   double counter_Dmeson20=0;
   double counter_Dmeson40=0;
   double counter_Dmeson60=0;
   double counter_jet60Dmeson=0;
   double counter_jet80Dmeson=0;
   double counter_jet60bjet=0;
   double counter_jet80bjet=0;
   double counter_zerobias=0;
   
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
   }
   
   // /counter_zerobias*30000
   
   cout<<"---------------------------- Rates ----------------------------"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt20_v1="<<counter_Dmeson20/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt40_v1="<<counter_Dmeson40/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_DmesonTrackingGlobalPt8_Dpt60_v1="<<counter_Dmeson60/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet60Eta2p3_ForDmesons_v1="<<counter_jet60Dmeson/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet80Eta2p3_ForDmesons_v1="<<counter_jet80Dmeson/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet60Eta2p3_Forbjets_v1="<<counter_jet60bjet/counter_zerobias*30000<<" Hz"<<endl;
   cout<<"HLT_PuAK4CaloJet80Eta2p3_Forbjets_v1="<<counter_jet80bjet/counter_zerobias*30000<<" Hz"<<endl;
}
