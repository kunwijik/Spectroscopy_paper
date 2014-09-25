import sys
import pyfits
import numpy as np
from PySpectrograph import Spectrum
from PySpectrograph.Utilities.fit import interfit

import pylab as pl

def ncor(x, y):
    """Calculate the normalized correlation of two arrays"""
    d=np.correlate(x,x)*np.correlate(y,y)
    if d<=0: return 0
    return np.correlate(x,y)/d**0.5


def xcor_redshift(spectra, template, template2,  sub=False, z1=0, z2=1, zstep=0.001):
    """Meaure the redshift of a spectra by cross correlating it 
       with a template

       returns an array of correlation values
    """
    zvalue=np.arange(z1,z2,zstep)
    cc_arr=np.zeros(len(zvalue))
    cc_arr2=np.zeros(len(zvalue))
    sflux=continuum_subtract(spectra)
    tflux=continuum_subtract(template)
    tsnflux=continuum_subtract(template2)
    for i,z in enumerate(zvalue):
        nflux=np.interp(spectra.wavelength, template.wavelength*(1+z), tflux)
        n2flux=np.interp(spectra.wavelength, template2.wavelength*(1+z), tsnflux)
        """spectra observed at lambada_observed, i.e. z=0,  template spectra at rest 
        frame (lambda_emitted), hence the multiplication by (1+z) """
        cc_arr[i]=ncor(sflux, nflux)
        cc_arr2[i]=ncor(sflux, n2flux)
  
    return  zvalue, cc_arr, cc_arr2

def continuum_subtract(spec, function='polynomial', order=7):
    """Fit a function to a spectra and subtract the continuum"""
    wc=interfit(spec.wavelength, spec.flux, function=function, order=order)
    wc.interfit()
 
    return spec.flux-wc(spec.wavelength)
    
def loadtext(infile):
   warr, farr=np.loadtxt(infile, usecols=(0,1), unpack=True)
   """create spectrum from an input ascii file"""
   spec=Spectrum.Spectrum(warr, farr, stype='continuum')
   return spec
    

def loadiraf(hdu):
   farr=hdu[0].data
   xarr=np.arange(len(farr))
   warr=hdu[0].header['CRVAL1']+hdu[0].header['CDELT1']*(xarr+hdu[0].header['CRPIX1'])
   mask=(farr>10)
   spec=Spectrum.Spectrum(warr[mask], farr[mask], stype='continuum')
   return spec

def loadsdss(hdu):
   farr=hdu[0].data[0]
   print len(farr)
   xarr=np.arange(len(farr))
   warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
   spec=Spectrum.Spectrum(warr, farr, stype='continuum')
   return spec

def loadsnspec(hdu):
    farr=hdu[0].data[0]
    print len(farr)
    xarr=np.arange(len(farr))
    warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
    spec=Spectrum.Spectrum(warr, farr, stype='continuum')
    return spec
    
    
if __name__=='__main__':
 
   if sys.argv[1].count('fits'):
      hdu=pyfits.open(sys.argv[1])
      spec=loadiraf(hdu)
   else:
      spec=loadtext(sys.argv[1])
 

   thdu=pyfits.open(sys.argv[2])
   template=loadsdss(thdu)
   
   thdu2=pyfits.open(sys.argv[3])
   template2=loadsnspec(thdu2)

   #z_arr, cc_arr=xcor_redshift(spec, template, z1=3.0, z2=5.5, zstep=0.001)
   z_arr, cc_arr, cc_arr2=xcor_redshift(spec, template, template2,  z1=0.0, z2=0.8, zstep=0.0001)
   z=(z_arr[cc_arr.argmax()] + z_arr[cc_arr2.argmax()])/2.0
   print z
   #z_arr, cc_arr=xcor_redshift(spec, template, z1=z-0.05, z2=z+0.05, zstep=0.0001)
   #z=z_arr[cc_arr.argmax()]
   #print z
   pl.figure()
   pl.plot(z_arr, (cc_arr+cc_arr2)/2.0)
   pl.figure()
   cflux=np.convolve(spec.flux, np.ones(10), mode='same')
   pl.plot(spec.wavelength, cflux)
   nflux=np.interp(spec.wavelength, (1+z)*template.wavelength, template.flux)
   nsnflux=np.interp(spec.wavelength,  (1+z)*template2.wavelength,  template2.flux)
   #pl.plot((1+z)*template.wavelength, template.flux*spec.flux.mean()/template.flux.mean())
   pl.plot(spec.wavelength, nflux*cflux.mean()/nflux.mean())
   pl.plot(spec.wavelength, nsnflux*cflux.mean()/nsnflux.mean())
   pl.show()



