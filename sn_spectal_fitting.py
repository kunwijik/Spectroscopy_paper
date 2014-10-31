import pyfits
import numpy as np
from PySpectrograph import Spectrum

wav, flux, err =np.loadtxt('DES13X1kae.1029_32_1018.spec', usecols=(0, 1, 2), unpack=True)
sn_temp=['spDR2-024.fit', 'spDR2-025.fit', 'spDR2-026.fit', 'spDR2-027.fit',\
'spDR2-028.fit']
gal_temp=['spDR2-024.fit', 'spDR2-025.fit', 'spDR2-026.fit', 'spDR2-027.fit',\
'spDR2-028.fit']

def loadsdss(hdu):
   farr=hdu[0].data[0]
   xarr=np.arange(len(farr))
   warr=10**(hdu[0].header['CRVAL1']+hdu[0].header['CD1_1']*(xarr+1))
   gal=Spectrum.Spectrum(warr, farr, stype='continuum')
   return gal

def residuals(params, sn_temp, gal_temp):
    a, b=params
    for i in range(len(sn_temp)):
        for j in range(len(gal_temp)):
            #sn_t_wav=np.loadtxt(sn_temp[i])[:, 0]
            #sn_t_flux=np.loadtxt(sn_temp[i])[:, 1]
            sn_t_wav=loadsdss(pyfits.open(gal_temp[j])).wavelength
            gal_t_wav=loadsdss(pyfits.open(gal_temp[j])).wavelength
            sn_t_flux=loadsdss(pyfits.open(gal_temp[j])).flux
            gal_t_flux=loadsdss(pyfits.open(gal_temp[j])).flux
            snflux=np.interp(wav, sn_t_wav, sn_t_flux)
            gflux=np.interp(wav, gal_t_wav, sn_t_flux)
            err=(a*snflux - (obs_flux - (b*gflux)))**2/err**2
            peval=(params[0]*snflux + params[1]*gflux) / err
            
    return  err,  peval

#def peval(sn_t_wav, params):
   # return (params[0]*snflux + params[1]*gflux) / obsf_err
params0=np.array([1.2, 0.8])
#sn_temp=['DES13X1kae.1029_32_1018.spec', 'DES13X1kae.1029_32_1018.spec', \
#'DES13X1kae.1029_32_1018.spec', 'DES13X1kae.1029_32_1018.spec',\
#'DES13X1kae.1029_32_1018.spec']
#gal_temp=['DES13X1kae.1029_32_1018.spec', 'DES13X1kae.1029_32_1018.spec', \
#'DES13X1kae.1029_32_1018.spec', 'DES13X1kae.1029_32_1018.spec',\
#'DES13X1kae.1029_32_1018.spec']


from scipy.optimize import leastsq
plsq=leastsq(residuals, params0,  args=(flux, wav))

print(array([a, b]))


