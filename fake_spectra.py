#! usr/bin/python
"""This script takes one SN and galaxy template and creates fake spectra out of them"""

import sys
import numpy as np
from astropy.io import fits
from PySpectrograph import Spectrum
import pylab as plt
from astropy.modeling import models, fitting


def create_spectrum(warr, farr, earr=None, sub_cont=False,  normalize=True):
    spec=Spectrum.Spectrum(warr, farr, earr, stype='continuum')
    #normalize the spectra to 5500
    if normalize:
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
    """this is similart to 'loadtxt' except specifically created for Nugent's
    normal SN Ia template spectra which do not have an extra column
    for errors in the observed fluxes"""
    warrsn, farrsn =np.loadtxt(infile, usecols=(0, 1), unpack=True)
    return create_spectrum(warrsn, farrsn)
    
def make_fakeSN_spectrum(snfile,  galfile,  params, outfile, err=False,  signal_noise=20.0,  z=0.0,  wave_range=[3842, 8195]):
    """Given the name of a SN template file and a galaxy template, create a artificial spectra 
        which is the combination of the two where the normalization of the two spectra is given 
        in the params list.  Write the results to the outfile
        
        Paramters
        ------------
        snfile: string
            name of SN template file
            
        params: list 
            List of normalizations for the templates
        
        
    """
    snt=loadtext(snfile)
    galt=loadsdss(fits.open(galfile))
    minsalt=list(snt.wavelength).index(3840)
    maxsalt=list(snt.wavelength).index(8200)
    snt.wavelength=snt.wavelength[minsalt:maxsalt+1]
    snt.flux=snt.flux[minsalt:maxsalt+1]
    igal=np.interp(snt.wavelength, galt.wavelength, galt.flux)
    
    #foflux=fake observed flux
    foflux=(snt.flux*params[0] + igal*params[1]) 
    
    if err:
        foflux = signal_noise**2 * foflux
        foflux = np.random.poisson(foflux)
        fofluxerr=foflux**0.5
        
#    if err:
#        foflux = foflux + np.random.normal(0.0, 0.1, foflux.shape)
#        fofluxerr=0.1*foflux
    
    if not err:
         fofluxerr=0.1*foflux
    
    fout=open(outfile, 'w')
    for i in range(len(snt.wavelength)):
        fout.write('%f %f %f\n' % (snt.wavelength[i], foflux[i],  fofluxerr[i]))
    fout.close()
    
    return fout
    
if __name__=='__main__':
    params = [0.7, 0.3]
    make_fakeSN_spectrum(sys.argv[1],  sys.argv[2],  params, outfile='fakespectrum.dat')
    
