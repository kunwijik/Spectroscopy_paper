import numpy as np

files=[open('sn91t%i.dat' %i,  'w') for i in range(0, 94)]
wav, flux=np.loadtxt('sn91t_flux.v1.1.dat', usecols=(1, 2), unpack=True) 

k=0
for j in range(0, len(wav), 2401):
    np.savetxt(files[k], np.column_stack((wav[j:j+2401], flux[j:j+2401])))
    k+=1

for f in files:
    f.close()

    
