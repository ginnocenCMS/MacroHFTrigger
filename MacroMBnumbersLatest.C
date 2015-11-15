
#include <iostream>     // std::cout
#include <algorithm>    // std::min

void MacroMBnumbers(){

double sizeREC0to100=3.14*1e6;
double sizeRAW0to100=1.57*1e6;
double sizeAOD0to100=0.8*1e6;

double sizeREC0to10=11.46*1e6;
double sizeRAW0to10=5.74*1e6;
double sizeAOD0to10=3.13*1e6;

double sizeREC10to30=(6.5+4.18)/2*1e6;
double sizeRAW10to30=(3.25+2.1)/2*1e6;
double sizeAOD10to30=(1.68+1.1)/2*1e6;

double sizeREC30to50=(2.83+1.94)/2*1e6;
double sizeRAW30to50=(1.41+0.97)/2*1e6;
double sizeAOD30to50=(0.73+0.51)/2*1e6;

double sizeREC50to100=0.66*1e6;
double sizeRAW50to100=0.33*1e6;
double sizeAOD50to100=0.18*1e6;

double sizeREC70to100=0.41*1e6;
double sizeRAW70to100=0.21*1e6;
double sizeAOD70to100=0.12*1e6;

double sizeREC30to100=(2.83+1.94+0.66*5)/7*1e6;
double sizeRAW30to100=(1.41+0.97+0.33*5)/7*1e6;
double sizeAOD30to100=(0.73+0.51+0.18*5)/7*1e6;

double sizeREC0to100fake=(11.46+6.5+4.18+2.83+1.94+0.66*5)/10*1e6;
double sizeRAW0to100fake=(5.74+3.25+2.1+1.41+0.97+5*0.33)/10*1e6;
double sizeAOD0to100fake=(3.13+1.68+1.1+0.73+0.51+0.18*5)/10*1e6;

cout<<"sizeRAW0to100fake"<<sizeRAW0to100fake/1e6<<endl;
cout<<"sizeREC0to100fake"<<sizeREC0to100fake/1e6<<endl;
cout<<"sizeAOD0to100fake"<<sizeAOD0to100fake/1e6<<endl;

double sizetot0to100=0.9*(sizeRAW0to100+sizeAOD0to100)+0.1*(sizeRAW0to100+sizeAOD0to100+sizeREC0to100);
double sizetot30to100=0.9*(sizeRAW30to100+sizeAOD30to100)+0.1*(sizeRAW30to100+sizeAOD30to100+sizeREC30to100);
double sizetot50to100=0.9*(sizeRAW50to100+sizeAOD50to100)+0.1*(sizeRAW50to100+sizeAOD50to100+sizeREC50to100);
double sizetot70to100=0.9*(sizeRAW70to100+sizeAOD70to100)+0.1*(sizeRAW70to100+sizeAOD70to100+sizeREC70to100);

double nevents0_100=100*1e6;
double nevents30_100=200*1e6;
double nevents50_100=50*1e6;
double nevents70_100=0;

cout<<"sizetot0to100 in MB"<<sizetot0to100/1e6<<endl;
cout<<"sizetot30to100 in MB"<<sizetot30to100/1e6<<endl;
cout<<"sizetot30to100 in MB"<<sizetot30to100/1e6<<endl;
cout<<"sizetot50to100 in MB"<<sizetot50to100/1e6<<endl;
cout<<"sizetot70to100 in MB"<<sizetot70to100/1e6<<endl;

cout<<"size 0-100 with 100M events="<<sizetot0to100*nevents0_100/(1e12)<<endl;
cout<<"size 30-100 with 210M events="<<sizetot30to100*nevents30_100/(1e12)<<endl;
cout<<"size 50-100 with 100M events="<<sizetot50to100*nevents50_100/(1e12)<<endl;
cout<<"size 70-100 with 100M events="<<sizetot70to100*nevents70_100/(1e12)<<endl;


cout<<"size RAW 0-100="<<sizeRAW0to100/1e6<<endl;
cout<<"size RAW 30-100="<<sizeRAW30to100/1e6<<endl;
cout<<"size RAW 50-100="<<sizeRAW50to100/1e6<<endl;
cout<<"size RAW 70-100="<<sizeRAW70to100/1e6<<endl;






}