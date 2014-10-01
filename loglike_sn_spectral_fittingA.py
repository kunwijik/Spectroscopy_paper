#! usr/bin/python
"""This script makes use of the likehood and prior functions as input to the imported mcmc module 
(global_mcmc authored by Michelle Knights) to obtain the best fit parameters for the amplitudes of the 
supernova (SN) and galaxy templates fitted to an observed SN spectrum contaminated with host galaxy 
light in an attempt to quantify the amount of host galaxy light contamination"""

import global_mcmc
import sys
import numpy as np
import pyfits
from PySpectrograph import Spectrum

def interpo(wav, wavt, fluxt):
    interpol=np.interp(wav, wavt, fluxt)
    """becasue the observed spectrum do not have the same wavelength 
    binning as the templates, this function re-maps/re-calculates the template 
    fluxes using the observed spectrum wavelength binning"""
    return interpol

def loadsdss(hdu):
   """this function converts the sdss gal template spectra from fits format 
    into numpy arrays and creates a 1d spectrum using the 'Spectrum.Spectrum' task
    from the PySpectrograph package"""
   farr=hdu[0].data[0]
   xarr=np.arange(len(farr))
   warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
   gal=Spectrum.Spectrum(warr, farr, stype='continuum')
   return gal
   
def loadtext(infile):
   warr, farr, earr=np.loadtxt(infile, usecols=(0,1,2), unpack=True)
   """this creates a spectrum out of the salt reduced, wavelength 
    calib. and flux calib. 1d ascii spectrum"""
   spec=Spectrum.Spectrum(warr, farr, earr, stype='continuum')
   return spec 

def loadtext2(infile):
    """this is similart to 'loadtxt' except specifically created for Nugent's
    normal SN Ia template spectra which do not have an extra column
    for errors in the observed fluxes"""
    warrsn, farrsn =np.loadtxt(infile, usecols=(0, 1), unpack=True)
    snspec=Spectrum.Spectrum(warrsn, farrsn, stype='continuum')
    return snspec

def likelihood(params,data):  
    obswav=spec.wavelength
    obsflux=spec.flux
    obsferr=spec.var
    snwav=sntmpl.wavelength
    snflux=sntmpl.flux
    galwav=galtmpl.wavelength
    galflux=galtmpl.flux
    isnflux=interpo(obswav, snwav, snflux)
    igalflux=interpo(obswav, galwav, galflux)
    chi2=0
    chi2 += sum((params[0]*isnflux - (obsflux - (params[1]*igalflux)))**2)/((0.05*sum(obsferr)**2)/2.0)
             
    return -chi2/2.0  
    
def prior(old_params,params):
    """old_params is just a requirement by mcmc_global and has no significance
    in the definition of this function. We put a flat prior (zero and unity) on the parameters
    and define their range to be between 0 and 200"""
    for s in range(len(params)):
        if params[s] < 0.0 or params[s] > 200:
            return 0
        else:
            return 1
           

spec=loadtext('DES13X1kae.1029_32_1018.spec')
sntmpl=loadtext2('sn8.dat') # this is a Nugent normal SN Ia template at epoch 8
galtmpl=loadsdss(pyfits.open('spDR2-027.fit'))

N=100000 # number of steps

""" sizes of the random jumps sig and initial guesses for the parameters
t0"""
sig=np.array([0.1,0.1])*2.5
t0=np.array([1.0,2.0])*10

global_mcmc.mcmc(likelihood,prior,t0,N,sig,spec,'sn_spectral_fitting.txt')

"""if __name__=='__main__':
    spec=loadtext(sys.argv[1])
    sntmpl=loadtext2(sys.argv[2])
    galtmpl=loadsdss(pyfits.open(sys.argv[3]))"""
    

    
