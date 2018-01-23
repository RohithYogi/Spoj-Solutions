while(True):
    p=map(float,raw_input().strip().split())
    if(p[0]==0 and p[1]==0):
        break
    N=p[0]
    M=p[1]
    if(N>M):
        print "0.000000"
    else:
        print "{0:.6f}".format(((M-N+1)/(M+1)))
    
