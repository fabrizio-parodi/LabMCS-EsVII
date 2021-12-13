rom   ROOT    import *
from   iminuit import Minuit
import numpy   as     np
from   math    import *
import sys


gStyle.SetOptStat(0)
h      = TH1D("h","",40,0,40)
#implementare fitfun
fitfun = TF1("fitfun","",0,50)

for line in open("dati_highstat.dat"):
    mass = float(line)
    h.Fill(mass)
h.Draw()
gApplication.Run(True)


# implementare fit binned con metodo Fit
c1 = TCanvas() 
h.Draw()



gApplication.Run(True)


# implementare fit unbinned con TTree
t = TTree()


c2 = TCanvas()
h.Draw()


gApplication.Run(True)
