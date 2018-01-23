def fact(n):
    f=1
    for j in range(1,n+1):
        f=f*j
    return f
t=input()
for i in range(0,t):
    k=map(int,raw_input().strip().split( ))
    n=k[0]
    K=k[1]
    l=0
    f=fact(n)
    g=pow(K,l)
    while(g < f):
        if(f % g == 0):
            m=l
        l+=1
        g=pow(K,l)
    print "Case "+str(i+1)+": "+str(m)
    
