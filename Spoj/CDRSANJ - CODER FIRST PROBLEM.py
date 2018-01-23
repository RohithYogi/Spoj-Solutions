k=input()
if(k%2==1):
    print 0
else:
    s=0
    while(k%2!=1):
        s=s+2
        k=k/2
    print s
        
