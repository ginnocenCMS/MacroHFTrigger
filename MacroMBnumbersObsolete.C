/*
sizeRAW_noGen(0-100%)=1.25MB/event
sizeREC_noGen(0-100%)=7.56MB/event
sizeAOD_noGen(0-100%)=1.11MB/event

sizeRAW_Gen(0-100%)=24.4MB/event
sizeREC_Gen(0-100%)=7.56MB/event
sizeAOD_Gen(0-100%)=1.11MB/event

sizeRECO_noGen(0-10%)= 32.MB/event
sizeRAW_noGen(0-10%)=sizeRAW_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(0-10%)=1.25/7.56*32=5.3MB
sizeAOD_noGen(0-10%)=sizeAOD_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(0-10%)=1.11/7.56*32=5.29MB

sizeRECO_noGen(10-30%)= 15MB/event
sizeRAW_noGen(10-30%)=sizeRAW_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(10-30%)=1.25/7.56*15=2.48MB
sizeAOD_noGen(10-30%)=sizeAOD_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(10-30%)=1.11/7.56*15=2.20MB

sizeRECO_noGen(30-50%)=6.1 MB/event
sizeRAW_noGen(30-50%)=sizeRAW_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(30-50%)=1.25/7.56*6.1=1.01MB
sizeAOD_noGen(30-50%)=sizeAOD_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(30-50%)=1.11/7.56*6.1=0.89MB

(2.8+1.5+0.72+0.35+0.14)/5
sizeRECO_noGen(50-100%)=1.1
sizeRAW_noGen(50-100%)=sizeRAW_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(50-100%)=1.25/7.56*1.1=0.18MB
sizeAOD_noGen(50-100%)=sizeAOD_noGen(0-100%)/sizeRECO_noGen(0-100%)*sizeRECO_noGen(50-10%)=1.11/7.56*1.1=0.16MB

*/

#include <iostream>     // std::cout
#include <algorithm>    // std::min

void MacroMBnumbers(double nPeriferal30to50=80*1e6,int scale50to100_30to50=2,int scale10to30_0to10=1){

double nPeriferal50to100=scale50to100_30to50*nPeriferal30to50;

double sizeRAW0to100=1.25*1e6;
double sizeREC0to100=7.56*1e6;
double sizeAOD0to100=1.11*1e6;

double sizeRAW30to50=1.01*1e6;
double sizeREC30to50=6.10*1e6;
double sizeAOD30to50=0.89*1e6;

double sizeRAW0to10=5.30*1e6;
double sizeREC0to10=32.0*1e6;
double sizeAOD0to10=5.29*1e6;

double sizeRAW10to30=2.48*1e6;
double sizeREC10to30=15.0*1e6;
double sizeAOD10to30=2.20*1e6;

double sizeRAW50to100=0.18*1e6;
double sizeREC50to100=1.1*1e6;
double sizeAOD50to100=0.16*1e6;


double sizetot0to100=0.9*(sizeRAW0to100+sizeAOD0to100)+0.1*(sizeRAW0to100+sizeAOD0to100+sizeREC0to100);
double sizetot0to10=0.9*(sizeRAW0to10+sizeAOD0to10)+0.1*(sizeRAW0to10+sizeAOD0to10+sizeREC0to10);
double sizetot10to30=0.9*(sizeRAW10to30+sizeAOD10to30)+0.1*(sizeRAW10to30+sizeAOD10to30+sizeREC10to30);
double sizetot30to50=0.9*(sizeRAW30to50+sizeAOD30to50)+0.1*(sizeRAW30to50+sizeAOD30to50+sizeREC30to50);
double sizetot50to100=0.9*(sizeRAW50to100+sizeAOD50to100)+0.1*(sizeRAW50to100+sizeAOD50to100+sizeREC50to100);

cout<<"total event 0 to 100="<<sizetot0to100/1e6<<" MB"<<endl;
cout<<"total event 0 to 10="<<sizetot0to10/1e6<<" MB"<<endl;
cout<<"total event 10 to 30="<<sizetot10to30/1e6<<" MB"<<endl;
cout<<"total event 30 to 50="<<sizetot30to50/1e6<<" MB"<<endl;
cout<<"total event 50 to 100="<<sizetot50to100/1e6<<" MB"<<endl;

double totsize=500*1e12;

//cout<<"total number of 0-100 events="<<totsize/sizetot0to100/1e6<<" millions of events"<<endl;
//cout<<"total number of 0-10 events="<<totsize/sizetot0to10/1e6<<" millions of events"<<endl;
//cout<<"total number of 30-50 events="<<totsize/sizetot30to50/1e6<<" millions of events"<<endl;
//cout<<"total number of 50-100 events="<<totsize/sizetot50to100/1e6<<" millions of events"<<endl;

// totsize=nCentral0to10*sizetot0to10+nCentral0to10*scale10to30_0to10*sizetot10to30+nPeriferal30to50*sizetot30to50-nPeriferal50to100*sizetot50to100);

double nCentral0to10=(totsize-nPeriferal30to50*sizetot30to50-nPeriferal50to100*sizetot50to100)/(sizetot0to10+scale10to30_0to10*sizetot10to30);
double nCentral10to30=nCentral0to10*scale10to30_0to10;
cout<<endl;
cout<<endl;
cout<<endl;


cout<<"nCentral0to10="<<nCentral0to10/1e6<<"Mev, occupying size="<<nCentral0to10*sizetot0to10/1e12<<" TB"<<endl;
cout<<"nCentral10to30="<<nCentral10to30/1e6<<"Mev, occupying size="<<nCentral10to30*sizetot10to30/1e12<<" TB"<<endl;
cout<<"nPeriferal30to50 events="<<nPeriferal30to50/1e6<<"Mev, occupying size="<<nPeriferal30to50*sizetot30to50/1e12<<" TB"<<endl;
cout<<"nPeriferal50to100 events="<<nPeriferal50to100/1e6<<"Mev, occupying size="<<nPeriferal50to100*sizetot50to100/1e12<<" TB"<<endl;
cout<<"total size="<<(nCentral0to10*sizetot0to10+nCentral10to30*sizetot10to30+nPeriferal30to50*sizetot30to50+nPeriferal50to100*sizetot50to100)/1e12<<" TB"<<endl;

double a0=std::min(nCentral0to10,nCentral10to30/2.);
double a1=std::min(nPeriferal30to50/2,nPeriferal50to100/5.);
double minnumber=std::min(a0,a1);
cout<<"minnumber"<<minnumber<<endl;


double new0to100=minnumber*10;
double new0to10=nCentral0to10-minnumber;
double new10to30=nCentral10to30-minnumber*2;
double new30to50=nPeriferal30to50-minnumber*2;
double new50to100=nPeriferal50to100-minnumber*5;


cout<<endl;
cout<<endl;
cout<<endl;

cout<<"number minimum bias="<<new0to100<<"Mev, occupying size="<<new0to100*sizetot0to100/1e12<<" TB"<<endl;
cout<<"nCentral0to10="<<new0to10/1e6<<"Mev, occupying size="<<new0to10*sizetot0to10/1e12<<" TB"<<endl;
cout<<"nCentral10to30="<<new10to30/1e6<<"Mev, occupying size="<<new10to30*sizetot10to30/1e12<<" TB"<<endl;
cout<<"nPeriferal30to50 events="<<new30to50/1e6<<"Mev, occupying size="<<new30to50*sizetot30to50/1e12<<" TB"<<endl;
cout<<"nPeriferal50to100 events="<<new50to100/1e6<<"Mev, occupying size="<<new50to100*sizetot50to100/1e12<<" TB"<<endl;
cout<<"total size="<<(new0to100*sizetot0to100+new0to10*sizetot0to10+new10to30*sizetot10to30+new30to50*sizetot30to50+new50to100*sizetot50to100)/1e12<<" TB"<<endl;



}