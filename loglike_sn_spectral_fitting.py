#! usr/bin/python

"""This script runs the imported global mcmc to recover the fake coefficients (defined below)
using eigenspectra fluxes given in the array 'EIGENLOOKUP.npy' """

import global_mcmc
from numpy import *
import pyfits
from PySpectrograph import Spectrum

def interpo(wav, wavt, fluxt):
    interpol=np.interp(wav, wavt, fluxt)
    return interpol

def loadsdss(hdu):
   farr=hdu[0].data[0]
   xarr=np.arange(len(farr))
   warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
   gal=Spectrum.Spectrum(warr, farr, stype='continuum')
   return gal
   
def loadtext(infile):
   warr, farr, earr=np.loadtxt(infile, usecols=(0,1, 2), unpack=True)
   spec=Spectrum.Spectrum(warr, farr, err, stype='continuum')
   return spec

def mintemp(bestchi2):
    minfit=bestchi2[0]
    for x in bestchi2:
        if x < minfit:
            minfit=x
            global_mcmc.mcmc(likelihood,prior,t0,N,sig,fake,'agn_fakesrecovery.txt')
            

def likelihood(params,data):  
    
    sntmpl=['sn8.dat', 'sn10.dat', 'sn12.dat', 'sn14.dat', 'sn16.dat']
    galtmpl=['spDR2-024.fit','spDR2-025.fit', 'spDR2-026.fit',\
    'spDR2-027.fit','spDR2-028.fit']
    obswav=spec.wavelength
    obsflux=spec.flux
    obsferr=spec.var
    
    chi2list=[]
    chi2=0
    for i in range(len(sntmpl)):
        for j in range(len(galtmpl)):
             snwav=np.loadtxt(sntmpl[i])[:, 0]
             snflux=np.loadtxt(sntmpl[i])[:, 1]
             galwav=loadsdss(pyfits.open(gal_temp[j])).wavelength
             galflux=loadsdss(pyfits.open(gal_temp[j])).flux
             isnflux=np.interp(obswav, snwav, snflux)
             igalflux=np.interp(obswav, galwav, gflux)
             #chi2 += ( (data_list[i] - sum(params[:]*lookup[:9,10,i+30,0]))**2 / err_y[i]**2 )  # z and E fixed at 0.4 
             #chi2 += ( (sum(fake[:9,10,i+30,0]) - sum(params[:]*eigen[:9,10,i+30,0]))**2 / (0.05*sum(fake[:9,10,i+30,0]))**2 ) 
             chi2list.append(-(chi2 += sum((a*snflux - (obs_flux - (b*gflux)))**2)/(0.05*sum(obserr)**2))/2.0)
             
    return chilist

mintemp(chilist)   
    
         
def prior(old_params,params):
    for s in range(len(params)):
        if params[s] < 0.0 or params[s] > 200:
            return 0
        else:
            return 1
           
N=100000
#eigen = load('EIGENLOOKUP.npy')
fake = load('FAKELOOKUP.npy') # this has supposedly observed fluxes with fake coefficients insterted in them
#fakes = array([2,3,5,4,7,11,6,3,9])*10        #  fake coefficients we wish to recover

#perc=0.05
#err_y=[]
err_y=0.000132691825753
#data_list = []
#for j in range(14):
 #   data=0
  #  for i in range(9):
   #     data += fakes[i]*lookup[i,10,30+j,0]
    #err_y.append(perc*data)
    #data_list.append(data + perc*data*random.randn())
    #data_list.append(data + err_y*random.randn())
    
#print data_list
#print min(err_y)

#data_list = array(data_list)

sig=array([0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1])*2.5
t0=array([1.0,2.0,4.5,2.5,5.9,12.8,4.8,0.5,7.9])*10
#t0=fakes[:]
#u=t0+random.randn(len(t0))*sig
#global_mcmc.mcmc(likelihood,prior,t0,N,sig,fake,'agn_fakesrecovery.txt')

if __name__ = "__main__":
    spec=loadtext(sys.argv[1])
    
