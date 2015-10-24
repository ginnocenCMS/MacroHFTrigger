
void plotRelTrigEff(){
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Wed Aug 26 14:57:01 2015 by ROOT version6.02/10)
//   from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
//   found on file: hiForest_68.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file
   gROOT->Reset();

   TFile *f=new TFile("v11/merged_hiForest.root");
   TTree *t = (TTree*) f->Get("akPu3PFJetAnalyzer/t");
   TTree *hlt = (TTree*) f->Get("hltanalysis/HltTree");
   TTree *hi = (TTree*) f->Get("HiGenParticleAna/hi");


//Declaration of leaves types
   Int_t           evt;
   Float_t         b;
   Int_t           nref;
   Float_t         rawpt[200];
   Float_t         jtpt[200];
   Float_t         jteta[200];
   Float_t         jty[200];
   Float_t         jtphi[200];
   Float_t         jtpu[200];
   Float_t         jtm[200];
   Float_t         discr_fr01[200];
   Float_t         trackMax[200];
   Float_t         trackSum[200];
   Int_t           trackN[200];
   Float_t         trackHardSum[200];
   Int_t           trackHardN[200];
   Float_t         chargedMax[200];
   Float_t         chargedSum[200];
   Int_t           chargedN[200];
   Float_t         chargedHardSum[200];
   Int_t           chargedHardN[200];
   Float_t         photonMax[200];
   Float_t         photonSum[200];
   Int_t           photonN[200];
   Float_t         photonHardSum[200];
   Int_t           photonHardN[200];
   Float_t         neutralMax[200];
   Float_t         neutralSum[200];
   Int_t           neutralN[200];
   Float_t         eMax[200];
   Float_t         eSum[200];
   Int_t           eN[200];
   Float_t         muMax[200];
   Float_t         muSum[200];
   Int_t           muN[200];
   Float_t         discr_ssvHighEff[200];
   Float_t         discr_ssvHighPur[200];
   Float_t         discr_csvMva[200];
   Float_t         discr_csvSimple[200];
   Float_t         discr_muByIp3[200];
   Float_t         discr_muByPt[200];
   Float_t         discr_prob[200];
   Float_t         discr_probb[200];
   Float_t         discr_tcHighEff[200];
   Float_t         discr_tcHighPur[200];
   Float_t         ndiscr_ssvHighEff[200];
   Float_t         ndiscr_ssvHighPur[200];
   Float_t         ndiscr_csvSimple[200];
   Float_t         ndiscr_muByPt[200];
   Float_t         ndiscr_prob[200];
   Float_t         ndiscr_probb[200];
   Float_t         ndiscr_tcHighEff[200];
   Float_t         ndiscr_tcHighPur[200];
   Float_t         pdiscr_csvSimple[200];
   Float_t         pdiscr_prob[200];
   Float_t         pdiscr_probb[200];
   Int_t           nsvtx[200];
   Int_t           svtxntrk[200];
   Float_t         svtxdl[200];
   Float_t         svtxdls[200];
   Float_t         svtxm[200];
   Float_t         svtxpt[200];
   Int_t           nIPtrk[200];
   Int_t           nselIPtrk[200];
   Int_t           nIP;
   Int_t           ipJetIndex[8051];
   Float_t         ipPt[8051];
   Float_t         ipProb0[8051];
   Float_t         ipProb1[8051];
   Float_t         ip2d[8051];
   Float_t         ip2dSig[8051];
   Float_t         ip3d[8051];
   Float_t         ip3dSig[8051];
   Float_t         ipDist2Jet[8051];
   Float_t         ipDist2JetSig[8051];
   Float_t         ipClosest2Jet[8051];
   Float_t         mue[200];
   Float_t         mupt[200];
   Float_t         mueta[200];
   Float_t         muphi[200];
   Float_t         mudr[200];
   Float_t         muptrel[200];
   Int_t           muchg[200];
   Int_t           beamId1;
   Int_t           beamId2;
   Float_t         pthat;
   Float_t         refpt[200];
   Float_t         refeta[200];
   Float_t         refy[200];
   Float_t         refphi[200];
   Float_t         refdphijt[200];
   Float_t         refdrjt[200];
   Float_t         refparton_pt[200];
   Int_t           refparton_flavor[200];
   Int_t           refparton_flavorForB[200];
   Bool_t          refparton_isGSP[200];
   Float_t         genChargedSum[200];
   Float_t         genHardSum[200];
   Float_t         signalChargedSum[200];
   Float_t         signalHardSum[200];
   Int_t           ngen;
   Int_t           genmatchindex[30];
   Float_t         genpt[30];
   Float_t         geneta[30];
   Float_t         geny[30];
   Float_t         genphi[30];
   Float_t         gendphijt[30];
   Float_t         gendrjt[30];

   // Set branch addresses.
   //   t->SetBranchAddress("evt",&evt);
   //  t->SetBranchAddress("b",&b);
   t->SetBranchAddress("nref",&nref);
   //  t->SetBranchAddress("rawpt",rawpt);
   t->SetBranchAddress("jtpt",jtpt);
   t->SetBranchAddress("jteta",jteta);
   t->SetBranchAddress("jtphi",jtphi);
   /*
   t->SetBranchAddress("jty",jty);
   t->SetBranchAddress("jtpu",jtpu);
   t->SetBranchAddress("jtm",jtm);
   t->SetBranchAddress("discr_fr01",discr_fr01);
   t->SetBranchAddress("trackMax",trackMax);
   t->SetBranchAddress("trackSum",trackSum);
   t->SetBranchAddress("trackN",trackN);
   t->SetBranchAddress("trackHardSum",trackHardSum);
   t->SetBranchAddress("trackHardN",trackHardN);
   t->SetBranchAddress("chargedMax",chargedMax);
   t->SetBranchAddress("chargedSum",chargedSum);
   t->SetBranchAddress("chargedN",chargedN);
   t->SetBranchAddress("chargedHardSum",chargedHardSum);
   t->SetBranchAddress("chargedHardN",chargedHardN);
   t->SetBranchAddress("photonMax",photonMax);
   t->SetBranchAddress("photonSum",photonSum);
   t->SetBranchAddress("photonN",photonN);
   t->SetBranchAddress("photonHardSum",photonHardSum);
   t->SetBranchAddress("photonHardN",photonHardN);
   t->SetBranchAddress("neutralMax",neutralMax);
   t->SetBranchAddress("neutralSum",neutralSum);
   t->SetBranchAddress("neutralN",neutralN);
   t->SetBranchAddress("eMax",eMax);
   t->SetBranchAddress("eSum",eSum);
   t->SetBranchAddress("eN",eN);
   t->SetBranchAddress("muMax",muMax);
   t->SetBranchAddress("muSum",muSum);
   t->SetBranchAddress("muN",muN);
   t->SetBranchAddress("discr_ssvHighEff",discr_ssvHighEff);
   t->SetBranchAddress("discr_ssvHighPur",discr_ssvHighPur);
   t->SetBranchAddress("discr_csvMva",discr_csvMva);
   t->SetBranchAddress("discr_csvSimple",discr_csvSimple);
   t->SetBranchAddress("discr_muByIp3",discr_muByIp3);
   t->SetBranchAddress("discr_muByPt",discr_muByPt);
   t->SetBranchAddress("discr_prob",discr_prob);
   t->SetBranchAddress("discr_probb",discr_probb);
   t->SetBranchAddress("discr_tcHighEff",discr_tcHighEff);
   t->SetBranchAddress("discr_tcHighPur",discr_tcHighPur);
   t->SetBranchAddress("ndiscr_ssvHighEff",ndiscr_ssvHighEff);
   t->SetBranchAddress("ndiscr_ssvHighPur",ndiscr_ssvHighPur);
   t->SetBranchAddress("ndiscr_csvSimple",ndiscr_csvSimple);
   t->SetBranchAddress("ndiscr_muByPt",ndiscr_muByPt);
   t->SetBranchAddress("ndiscr_prob",ndiscr_prob);
   t->SetBranchAddress("ndiscr_probb",ndiscr_probb);
   t->SetBranchAddress("ndiscr_tcHighEff",ndiscr_tcHighEff);
   t->SetBranchAddress("ndiscr_tcHighPur",ndiscr_tcHighPur);
   t->SetBranchAddress("pdiscr_csvSimple",pdiscr_csvSimple);
   t->SetBranchAddress("pdiscr_prob",pdiscr_prob);
   t->SetBranchAddress("pdiscr_probb",pdiscr_probb);
   t->SetBranchAddress("nsvtx",nsvtx);
   t->SetBranchAddress("svtxntrk",svtxntrk);
   t->SetBranchAddress("svtxdl",svtxdl);
   t->SetBranchAddress("svtxdls",svtxdls);
   t->SetBranchAddress("svtxm",svtxm);
   t->SetBranchAddress("svtxpt",svtxpt);
   t->SetBranchAddress("nIPtrk",nIPtrk);
   t->SetBranchAddress("nselIPtrk",nselIPtrk);
   t->SetBranchAddress("nIP",&nIP);
   t->SetBranchAddress("ipJetIndex",ipJetIndex);
   t->SetBranchAddress("ipPt",ipPt);
   t->SetBranchAddress("ipProb0",ipProb0);
   t->SetBranchAddress("ipProb1",ipProb1);
   t->SetBranchAddress("ip2d",ip2d);
   t->SetBranchAddress("ip2dSig",ip2dSig);
   t->SetBranchAddress("ip3d",ip3d);
   t->SetBranchAddress("ip3dSig",ip3dSig);
   t->SetBranchAddress("ipDist2Jet",ipDist2Jet);
   t->SetBranchAddress("ipDist2JetSig",ipDist2JetSig);
   t->SetBranchAddress("ipClosest2Jet",ipClosest2Jet);
   t->SetBranchAddress("mue",mue);
   t->SetBranchAddress("mupt",mupt);
   t->SetBranchAddress("mueta",mueta);
   t->SetBranchAddress("muphi",muphi);
   t->SetBranchAddress("mudr",mudr);
   t->SetBranchAddress("muptrel",muptrel);
   t->SetBranchAddress("muchg",muchg);
   t->SetBranchAddress("beamId1",&beamId1);
   t->SetBranchAddress("beamId2",&beamId2);
   t->SetBranchAddress("pthat",&pthat);
   t->SetBranchAddress("refpt",refpt);
   t->SetBranchAddress("refeta",refeta);
   t->SetBranchAddress("refy",refy);
   t->SetBranchAddress("refphi",refphi);
   t->SetBranchAddress("refdphijt",refdphijt);
   t->SetBranchAddress("refdrjt",refdrjt);
   t->SetBranchAddress("refparton_pt",refparton_pt);
   t->SetBranchAddress("refparton_flavor",refparton_flavor);
   */
   t->SetBranchAddress("refparton_flavorForB",refparton_flavorForB);
   t->SetBranchAddress("refparton_isGSP",refparton_isGSP);
   /*
   t->SetBranchAddress("genChargedSum",genChargedSum);
   t->SetBranchAddress("genHardSum",genHardSum);
   t->SetBranchAddress("signalChargedSum",signalChargedSum);
   t->SetBranchAddress("signalHardSum",signalHardSum);
   t->SetBranchAddress("ngen",&ngen);
   t->SetBranchAddress("genmatchindex",genmatchindex);
   t->SetBranchAddress("genpt",genpt);
   t->SetBranchAddress("geneta",geneta);
   t->SetBranchAddress("geny",geny);
   t->SetBranchAddress("genphi",genphi);
   t->SetBranchAddress("gendphijt",gendphijt);
   t->SetBranchAddress("gendrjt",gendrjt);
   */
//     This is the loop skeleton
//       To read only selected branches, Insert statements like:
// t->SetBranchStatus("*",0);  // disable all branches
// TTreePlayer->SetBranchStatus("branchname",1);  // activate branchname
   int mult, pdg[1000];
   float pt[1000], eta[1000], phi[1000];
   hi->SetBranchAddress("mult",&mult);
   hi->SetBranchAddress("pdg",pdg);
   hi->SetBranchAddress("pt",pt);
   hi->SetBranchAddress("eta",eta);
   hi->SetBranchAddress("phi",phi);

   int jet60, Djet60;

   hlt->SetBranchAddress("HLT_PuAK4CaloJet60_Eta2p5_v1",&jet60);
   hlt->SetBranchAddress("HLT_PuAK4CaloJet60Eta2p3_ForDmesons_v1",&Djet60);

   TH1F *h1 = new TH1F("h1","h1",20,0,200);
   TH1F *h2 = new TH1F("h2","h2",20,0,200);

   h1->Sumw2();
   h2->Sumw2();


   Long64_t nentries = t->GetEntries();

   Long64_t nbytes = 0;
   for (Long64_t i=0; i<nentries;i++) {
      nbytes += t->GetEntry(i);
      hi->GetEntry(i);
      hlt->GetEntry(i);
      
      if(!jet60) continue;

      for(int j1=0;j1<nref;j1++){
	
	if(abs(refparton_flavorForB[j1])!=4) continue;
	if(refparton_isGSP[j1]) continue;
	if(fabs(jteta[j1])>2.0) continue;
	
	bool hasD=false;

	for(int j2=0;j2<mult;j2++){
	  
	  if(abs(pdg[j2])!=421) continue;
	  if(pt[j2]<7.) continue;
	  float deta = jteta[j1] - eta[j2];
	  float dphi = acos(cos(jtphi[j1] - phi[j2]));
	
	  float dR = sqrt(deta*deta + dphi*dphi);
	  if(dR < 0.5) hasD=true;
	  
	}
	if(!hasD) continue;

	h1->Fill(jtpt[j1]);
	if(Djet60) h2->Fill(jtpt[j1]);

      }

   }

   TFile *fout = new TFile("test.root","RECREATE");
   h1->Write();
   h2->Write();
   fout->Close();
}
