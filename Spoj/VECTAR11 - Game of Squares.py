t=input()
for i in range(0,t):
    p=input()
    k=0
    while(p!=0):
        s=pow(p,0.5)
        j=int(s)
        p=p-(pow(j,2))
        k+=1
    if(k%2==1):
        print 'Win'
    else:
        print 'Lose'
    
