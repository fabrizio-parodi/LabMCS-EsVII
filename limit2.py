from   ROOT    import *
from   iminuit import Minuit
import numpy   as     np
from   math    import *
import sys


gStyle.SetOptStat(0)
h      = TH1D("h","",40,0,40)

nbkg  = 44.7

nobs  = 0.0
for line in open("dati_highstat.dat"):
    mass = float(line)
    #calcolare nobs
    
    h.Fill(mass)

h.Draw()
gApplication.Run(True)

#calcolare UL @ 95%CL
prob = 0

