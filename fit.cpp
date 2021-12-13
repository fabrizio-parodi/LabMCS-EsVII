#include <iostream>
#include <fstream>
#include <string>
#include <TRandom3.h>
#include <TApplication.h>
#include <TH1D.h>
#include <TGraph.h>
#include <TF1.h>
#include <TMath.h>
#include <Math/Minimizer.h>
#include <Math/Factory.h>
#include <Math/Functor.h>

using namespace std;

int main(){
  TApplication app("app",NULL,NULL);

  TH1D *h = new TH1D("h","",40,0,40);
  //implementare fitfun
  TF1 *fitfun=new TF1("fitfun","",0,50);

  ifstream file("dati_highstat.dat");
  
  double mass;
  while (ifile >> mass){
    h->Fill(mass);
  }

  h->Draw();
  app.Run(true);



  //implementare fit binned con metodo Fit
  TCanvas *c1 = new TCanvas(); 
  h->Draw();



  app.Run(true);


  //implementare fit unbinned con TTree
  TTree *t = new TTree();


  TCanvas *c2 = new TCanvas(); 
  h->Draw();
  
  app.Run(true);

}
