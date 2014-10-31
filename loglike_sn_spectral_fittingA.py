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

import pylab as plt

def interpo(wav, wavt, fluxt):
    """becasue the observed spectrum do not have the same wavelength 
    binning as the templates, this function re-maps/re-calculates the template 
    fluxes using the observed spectrum wavelength binning"""
    interpol=np.interp(wav, wavt, fluxt)
    return interpol

def create_spectrum(warr, farr, earr=None, sub_cont=False):
    """Create spectrum object and normalize it to 5500 Angstroms
    """
    spec=Spectrum.Spectrum(warr, farr, earr, stype='continuum')
    #normalize the spectra to 5500
    n5500 = np.interp(5500, spec.wavelength, spec.flux)
    spec.flux = spec.flux/n5500
    if earr is not None:
       spec.var = spec.var/n5500
    #add in continuum subtraction
    if sub_cont:
       coef = np.polyfit(spec.wavelength, spec.flux, 9)
       spec.flux = spec.flux - np.polyval(coef, spec.wavelength) 
    return spec

def loadsdss(hdu):
   """this function converts the sdss gal template spectra from fits format 
    into numpy arrays and creates a 1d spectrum using the 'Spectrum.Spectrum' task
    from the PySpectrograph package"""
   farr=hdu[0].data[0]
   xarr=np.arange(len(farr))
   warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
   return create_spectrum(warr, farr)
   
def loadtext(infile):
   """this creates a spectrum out of the salt reduced, wavelength 
    calib. and flux calib. 1d ascii spectrum"""
   warr, farr, earr=np.loadtxt(infile, usecols=(0,1,2), unpack=True)
   return create_spectrum(warr, farr, earr)

def loadtext2(infile):
    """this is similart to 'loadtxt' except specifically created for Nugent's
    normal SN Ia template spectra which do not have an extra column
    for errors in the observed fluxes"""
    warrsn, farrsn =np.loadtxt(infile, usecols=(0, 1), unpack=True)
    return create_spectrum(warrsn, farrsn)

def likelihood(params,data):  
    """Add description here of inputs"""
    spec, isnflux, igalflux = data
    obswav=spec.wavelength
    obsflux=spec.flux
    obsferr=spec.var

    chi2=0
    modflux = (params[0]*isnflux + params[1]*igalflux)
    chi2 += sum((obsflux - modflux)**2)/((0.05*sum(obsferr)**2)/2.0)
    return np.exp(-chi2/2.0)
    
def prior(old_params,params):
    """old_params is just a requirement by mcmc_global and has no significance
    in the definition of this function. We put a flat prior (zero and unity) on the parameters
    and define their range to be between 0 and 200"""
    
    for s in range(len(params)):
        if params[s] < 0.0 or params[s] > 2:
            return 0
    return 1
           

def fit_spectra(data, t0, sig, N=10000):
    """Fit spectra runs global mcmc on one data set
    
       Parameters:
       -----------
       data: list
           List containing a spectral object, SN template flux at the same 
           wavelengths as the spectral object, and a galaxy template flux at the
           same wavelengths of the spectral object:w

       Output
       ------
       n1: float
           Best normalization for the SN template

       n2: float
           Best normalization for the galaxy template

       likelihood: float
           Likelihood for best fit combination of SN and galaxy template


    """
    global_mcmc.mcmc(likelihood,prior,t0,N,sig,data,'sn_spectral_fitting.txt')

    #read in results from mcmc
    p1, p2, l = np.loadtxt('sn_spectral_fitting.txt', unpack=True)
    i = np.array(l).argmax()
    n1 = p1[i]
    n2 = p2[i]
    return n1, n2, l[i]



if __name__=='__main__':
    """ sizes of the random jumps sig and initial guesses for the parameters
    t0"""
    N=10000
    sig=np.array([0.1,0.1])*2
    t0=np.array([0.5,0.5])
    spec=loadtext(sys.argv[1])
    spec.wavelength = spec.wavelength / (1+float(sys.argv[4]))
    
    sntmpl=loadtext2(sys.argv[2])
    galtmpl=loadsdss(pyfits.open(sys.argv[3]))

    plt.plot(spec.wavelength, spec.flux)
    isnflux=interpo(spec.wavelength, sntmpl.wavelength, sntmpl.flux)
    plt.plot(spec.wavelength, isnflux)
    igalflux=interpo(spec.wavelength, galtmpl.wavelength, galtmpl.flux)
    plt.plot(spec.wavelength, igalflux)
    #plt.show()

    data = [spec, isnflux, igalflux]
    n1, n2, l = fit_spectra(data, t0, sig, N)

    #This is just a blunt method for doing this
    #bestl=0
    #data = []
    #for i in  np.arange(0,20, 0.5):
    #  for j in np.arange(0,20,0.5):
    #     l=likelihood([i,j], data)
    #     if l > bestl:
    #        bestl=l
    #        n1 = i
    #        n2 = j
    #print n1, n2, l


    print n1, n2, l

    #plt.figure()
    #plt.plot(p1, l, marker='o', ls='')
    #plt.figure()
    #plt.plot(p2, np.log(1-l), marker='o', ls='')
    plt.figure()
    plt.plot(spec.wavelength, spec.flux)
    plt.plot(spec.wavelength, n1*isnflux + n2*igalflux)
    plt.show()
    

    
