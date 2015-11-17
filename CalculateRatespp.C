#include <iostream>     // std::cout
#include <TFile.h>
#include <TTree.h>
#include <TString.h>

void CalculateRate( TFile* f, TString trigname , int totall1rate)
{
    TTree *hlt = (TTree*) f->Get("hltbitanalysis/HltTree");
	double totalentries = hlt->GetEntries();
	int counter_fire = hlt->GetEntries(Form("%s", trigname.Data()));
	cout << " Trig path: " << trigname << "  MB fire fraction: " << counter_fire/totalentries << "  Rate: " << counter_fire/totalentries * totall1rate << endl;
	hlt->Clear();
}

void CalculateRatesPbPb(int totall1rate=30000){

   TFile *f=new TFile("/afs/cern.ch/work/j/jisun/public/HFTrig_75x/openHLT_HF_mnguyen-HydjetMB_740pre8_MCHI2_74_V3_53XBSL1v5_755patch1_1116.root");
   //HF triggers are seeded by L1 seed listed here: https://docs.google.com/spreadsheets/d/1fYBMaC7qb5bOuOTmHjuCe6DKyrCkJmNSg3bhwcl9sa0/edit#gid=1128312014

   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt20_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt30_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt40_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt50_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt60_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt70_v1", totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloDJet60_Eta2p1_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloDJet80_Eta2p1_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1",totall1rate);
   CalculateRate(f,"HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1",totall1rate);
   CalculateRate(f,"L1_MinimumBiasHF1_OR",totall1rate);
   CalculateRate(f,"L1_Centrality_ext30_100_HFplusANDminusTH0",totall1rate);
   CalculateRate(f,"L1_Centrality_ext50_100_HFplusANDminusTH0",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet16_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet16_Centrality_ext30_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet16_Centrality_ext50_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet28_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet28_Centrality_ext30_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet28_Centrality_ext50_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleJet44_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet44_Centrality_ext30_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet44_Centrality_ext50_100_BptxAND",totall1rate);
   CalculateRate(f,"L1_SingleS1Jet52_BptxAND",totall1rate);

   //to change L1 seed, but change just change to higher threshold L1Jet seeds than default
   //CalculateRate(f,"HLT_HIDmesonHITrackingGlobal_Dpt20_v1&&L1_SingleS1Jet16_BptxAND", totall1rate);
}
