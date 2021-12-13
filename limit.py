from   ROOT    import *
from   iminuit import Minuit
import numpy   as     np
from   math    import *
import sys


gStyle.SetOptStat(0)
h      = TH1D("h","",40,0,40)

nbkg  = 22.35

nobs  = 0.0
for line in open("dati_lowstat.dat"):
    mass = float(line)
    #calcolare nobs
    
    h.Fill(mass)

h.Draw()
gApplication.Run(True)

#calcolare p-value Ns=0
prob = 0

