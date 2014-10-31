#! usr/bin/python
"""In this script, we generate a fake spectrum from one SN and galaxy template, truncated to match the wavelength range of the SALT spectra. 
We then run mcmc on the fake spectrum to recover the coeffiecients for the input SN and galaxy template and see how well we recover these."""

import global_mcmc
import sys
import numpy as np
import pyfits
from PySpectrograph import Spectrum

import pylab as plt

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
    chi2=0
    modflux = (params[0]*isnflux + params[1]*igalflux)
    chi2 += sum((spec.flux - modflux)**2)/((0.05*sum(spec.var)**2)/2.0)
    return np.exp(-chi2/2.0)
    
def prior(old_params,params):
    """old_params is just a requirement by mcmc_global and has no significance
    in the definition of this function. We put a flat prior (zero and unity) on the parameters
    and define their range to be between 0 and 200"""
    
    for s in range(len(params)):
        if params[s] < -10 or params[s] > 10:
            return 0
    return 1

if __name__=='__main__':
    
    snlist=[]
    """a,b,c,d range of sn Ia templates - there are 91 epoch sn Ia normals,
    94 sn Ia 91ts, 114 epoch sn Ia 91bgs. maximum is thus 91 for b, 94 for c
    and 114 for d. always exclude the 0th epoch as it's a constant function"""
    a=1
    b=91
    c=93
    d=114
    for p in ['sn' + str(i) + '.dat' for i in range(a, b)]:
        snlist.append(p)
        #break
        
    for q in ['sn91t' + str(i) + '.dat' for i in range(a, c)]:
        snlist.append(q)
        #break
        
    for r in ['sn91bg' + str(i) + '.dat' for i in range(a, d)]:
       snlist.append(r)
       #break
       
    gallist=['spDR2-02' + str(j) + '.fit' for j in range(3, 8)]
    fout=open('final_params.dat',  'w')
     #the range can be change to whatever amount of templates are desired for the fitting

    sig=np.array([0.1,0.1])*3
    t0=np.array(np.random.rand(2))
    spec=loadtext(sys.argv[1])

    """We transform the observed spectrum to restframe"""
    spec.wavelength = spec.wavelength / (1+float(sys.argv[2]))

    N=int(sys.argv[3]) #number of steps required for the mcmc

    for snt in snlist:
        for galt in gallist: 
            sntmpl=loadtext2(snt)
            galtmpl=loadsdss(pyfits.open(galt))
            """becasue the observed spectrum do not have the same wavelength 
            binning and therefore corresponding fluxes as the templates, we interpolate 
            the template fluxes using the observed spectrum wavelength binning"""
            isnflux=np.interp(spec.wavelength, sntmpl.wavelength, sntmpl.flux)
            igalflux=np.interp(spec.wavelength, galtmpl.wavelength, galtmpl.flux ) 
            data=[spec, isnflux, igalflux]
            global_mcmc.mcmc(likelihood,prior,t0,N,sig,data, snt + '_' + galt +'.txt')
            #read in results from mcmc
            p1, p2, l = np.loadtxt(snt + '_' + galt + '.txt', unpack=True)
            i = np.array(l).argmax()
            n1 = p1[i]
            n2 = p2[i]
            fout.write('%s %s %f %f %f\n' % (snt,galt, n1, n2, l[i]))

    fout.close()
    fin=open('final_params.dat', 'r')
    fin_lines=file.readlines(fin)
    norm1, norm2,like=np.loadtxt('final_params.dat',usecols=(2, 3, 4), unpack=True)
    k=like.argmax() # index of the maximum likelihood value

    """This prints out the best fit templates, their normalisations
    and the likelihood""" 
    print fin_lines[k] 

    """We select the normalisations corresponding to the maximum likelihood
    as the best fit normalisations and use these to scale the SN and galaxy
    templates accordingly"""
    norm1=float(fin_lines[k].split()[2])
    norm2=float(fin_lines[k].split()[3])

    """bsnt and bgalt are the best fitted sn and galaxy templates"""
    bsnt=loadtext2(str(fin_lines[k].split()[0]))
    bgalt=loadsdss(pyfits.open(str(fin_lines[k].split()[1])))

    ibsntflux=np.interp(spec.wavelength, bsnt.wavelength, bsnt.flux)
    ibgaltflux=np.interp(spec.wavelength, bgalt.wavelength, bgalt.flux )

    plt.plot(spec.wavelength, spec.flux, label='Spectrum' )
    plt.plot(spec.wavelength, ibsntflux,  label='SN template')
    plt.plot(spec.wavelength, ibgaltflux,  label='Gal template')
    plt.xlabel('Wavelength ($\AA$)')
    plt.ylabel('Flux (arbitrary units)')
    plt.title('Spectrum, best fit SN & Gal templates all normalized at 5500$\AA$')
    plt.legend(loc=2)
        
    plt.figure()
    plt.plot(spec.wavelength, spec.flux,  'r',  label='Spectrum' )
    plt.plot(spec.wavelength, norm1*ibsntflux + (1-norm1)*ibgaltflux,  label='Model')
    plt.xlabel('Wavelength ($\AA$)')
    plt.ylabel('Flux (arbitrary units)')
    plt.title('SN and Gal template model fit to observed spectrum')
    plt.legend(loc=2)
    plt.show()
    
    fin.close()
