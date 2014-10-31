import numpy as np

files=[open('sn%i.dat' %i,  'w') for i in range(0, 91)]

for j in range(0, 91):
    with open('sn1a_flux.v1.2.dat', 'r') as input:
        for line in input:
            columns=line.strip().split()
            print columns
            for k in columns[0]:
                #print k
                if j==k:
                    files[j].write('{:10}{:10}\n'.format(columns[1], columns[2]))

for f in files:
    f.close()

for j in range(len(columns[0])):
    
    
