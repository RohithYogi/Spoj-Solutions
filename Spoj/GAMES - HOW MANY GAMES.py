t=input()
for i in range(0,t):
    a=raw_input()
    b=''
    c=0
    for j in a:
        if(j=='.'):
            c=1
        elif(c==1):
            b=b+j
    if(c==0):
        print 1
    else:
        n=int(b)
        d=10**(len(b))
        while(True):
            if(n%5==0 and d%5==0):
                n=n/5
                d=d/5
            elif(n%2==0 and d%2==0):
                n=n/2
                d=d/2
            else:
                break
        print d
    
    
    

