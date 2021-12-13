#include <iostream>
#include <fstream>
#include <string>
#include <TApplication.h>
#include <TH1D.h>
#include <TMath.h>

using namespace std;

int main(){

  double nbkg = 44.7; 

  TApplication app("app",NULL,NULL);

  TH1D *h = new TH1D("h","",40,0,40);

  ifstream file("dati_highstat.dat");
  
  double mass;
  while (ifile >> mass){
    //calcolare nobs
    h->Fill(mass);
  }

  h->Draw();

  //calcolare UL at 95% CL
  double prob = 0

  
  app.Run(true);


}
