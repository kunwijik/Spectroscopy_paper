#General mcmc code for use in any project
#Author: Michelle Knights
#Input: likelihood - log-likelihood function
#       prior - a "function of functions". A function containing the prior (as probability
#               distribution) for each parameter. An integer specifies which prior to use.
#       t0 - the initial vector of parameters to use
#       N   - the number of tim  es to run the loop
#       save_step - how often to save the chain to file
#       sig - vector of standard deviations for each parameter ("stepsize")
#       data - 1d vector of data
#       OPTIONAL KWARGS
#       restart - boolean, whether or not to read from file to get first parameters (still provide some arb t0)
#       covariance - supply a known covariance matrix
from numpy import *
import matplotlib.mlab as mlab
import matplotlib.pyplot as plt

    
def mcmc(likelihood,prior,t0,N,sig,data,filename,**kwargs):
    save_step=1000 #How often we save the chain to file and reset the matrix
    COV=False #Turn the use of the covariance matrix on and off
    LOG=False #Using loglikelihood instead of likelihood
    n = len(t0) #Number of parameters
    sucsteps = 0 #Number of successful steps

    if 'restart' in kwargs:
        chain = loadtxt(filename)
        t0 = chain[-1,:]
    
    else:
        #Output file
        f = open(filename,'w')
        f.close()

    like = likelihood(t0,data) #Calculate the log-likelihood with the starting paramters

    bad = 0 #Number of times likelihood hits infinity

    #If a covariance matrix is given, we diagonalise and adjust step direction accordingly      
    if 'covariance' in kwargs:
        covmat = loadtxt(kwargs['covariance'])
        #Perform a Cholesky decomposition
        Q = linalg.cholesky(covmat)
        
    else:
        covmat = mat(0)

    CHAIN=zeros([save_step, n+1])       #save_step=1000 (from line 20)
                                        #n=len(t0) - line 23, t0-initial parameters
    for step in range(N):
        
        if step%1000 == 0:
            print step
        
        if step%save_step==0 and step!=0:  #write to chain after every 1000 steps
            f = open(filename,'a')
            savetxt(f, CHAIN)
            f.close()
            CHAIN=zeros([save_step, n+1]) # initial chain to zeros again
        
        CHAIN[step%save_step, :n]=array(t0[:])
        CHAIN[step%save_step, -1]=like

        #If we've done 5000 steps, calculate the covariance matrix
        if step==5000 and COV:
            #Read in the chain
            chain_all = loadtxt(filename)
            #Only take the columns that are being varied
            first = True
            for i in range(n):
                if sig[i] != 0:
                    if first: #First column in the chain
                        chain = chain_all[:,i]
                        first = False
                    else:
                        chain = column_stack((chain,chain_all[:,i]))
            covmat = covariance(chain)
            savetxt('covmat.txt', covmat) #Save the covariance matrix for future use
            Q = linalg.cholesky(covmat)
              

        if covmat.size>1:    
            #Create a random number vector (delta theta)
            dt = random.randn(len(Q[:, 0]))

            vec = dot(Q,dt)
            new_vec=zeros(len(sig))
            new_vec[sig!=0]=vec
            u=t0+new_vec
            
        else:
            u = t0+random.randn(len(t0))*sig
            
       
        #Find the likelihood value for the new parameters.
        pri=prior(t0, u)
        if pri==0:
            like_u=0
        else:
            like_u = likelihood(u,data)
            
        #Use the priors to weight the likelihood
        P1=pri
        
        #For some reason, sometimes a jump is so big R gets so high it is infinity to Python. 
        #The safest is to set R=1 (obviously it's a better step). This should be very rare 
        #for small step sizes
        if LOG and isinf(exp(float(like_u-like))) : #Floats specified to convert Decimal class
            R = 1.0
            bad+=1
            print 'bad'
        elif LOG==False and isinf(float(like_u/like)):
            R = 1.0
            bad+=1
            print 'bad'
        else:
            #Finally calculate the ratio of probabilities between the old and new step
            if LOG:                                 #LOG=True (line 22) 
                R = P1*float(exp(like_u-like))
            else:
                R = P1*(like_u/like)
        #Sometimes, the likelihood does crazy things (like if p>1). If P1 is zero, R should simply be set to zero
        if P1==0:
            R = 0

        r=random.random()
        if r<=R:
            t0 = u
            like = like_u
            sucsteps += 1
            #print 'accept',u
        #Else, step is rejected and t0 remains
    
    #Write the last part of the chain
    if step%save_step!=0:
        CHAIN=CHAIN[CHAIN[:, -1]!=0, :]
        f = open(filename,'a')
        savetxt(f, CHAIN)
        f.close()
    A = 100.0*sucsteps/N
    print 'Acceptance ratio: ',A
    #print 'bad steps: ',bad





#Given a chain (or subset thereoff), calculates the covariance matrix (likelihood removed)
def covariance(chain):
    n = len(chain[0,:])
    N = len(chain[:,0])
    #Find the means
    mu = mean(chain,axis=0)

    cov = zeros([n,n])
    for i in range(n):
        for j in range(n):
            #Sum over all values in the data range
            total = sum((chain[:,i]-mu[i]) * (chain[:,j]-mu[j]))
            cov[i,j] = total/N
    return cov
    

