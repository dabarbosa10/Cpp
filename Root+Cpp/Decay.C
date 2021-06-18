#include <iostream>
#include "TRandom.h"
#include "TH1F.h"
#include "TProfile.h"
#include "TCanvas.h"
#include "TFile.h"

using std::cout;
using std::endl;

void decays(int events, double Pmin, double Pmax){

double tau= 1.638e-12;
double mass =5.279;
double c=3.0e10; 

TProfile hProf("hProf","Mean Decay distance vs momentum",100,Pmin,Pmax);
TH1F hist("hist", "Number of Decays vs distance", 100, 0, 1.0);

//Random number generator

TRandom* random=new TRandom();

cout<<"Generate " << events << " events, with Pmin= " << Pmin <<" and Pmax = " << Pmax << endl; 
for(int i=0; i<events; i++){
	double momentum = Pmin+random->Uniform(Pmax-Pmin);
	double energy = sqrt(momentum*momentum+mass*mass);
	double beta = momentum/energy;
	double gamma = 1.0/sqrt(1.0-beta*beta);
	double distance=random->Exp(gamma*c*tau);
	//cout<<momentum<<endl;
	hist.Fill(distance);
	hProf.Fill(momentum,distance);
	} 

  TCanvas c1;
  c1.Divide(1,2);
  c1.cd(1);
  hist.Draw();
  c1.cd(2);
  hProf.Draw();
  c1.Print("decayPlots.eps");
  TFile f("decayExample.root","recreate");
  hProf.Write();
  hist.Write();

}