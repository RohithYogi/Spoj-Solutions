t=input()
for i in range(0,t):
    n=input()
    l=[]
    k=0
    j=0
    while(k<n):
        s=raw_input()
        if(s=='lxh'):
            l.append(0)
        else:
            l.append(1)
        if(j==1):
            if(l[0]==l[1]):
                l[0]=1
                l.remove(l[1])
            else:
                l[0]=0
                l.remove(l[1])
            j=0
        j+=1
        k+=1
    if(l[0]==1):
        print 'hhb'
    else:
        print 'lxh'
