t=input()
for i in range(0,t):
    n=input()
    k=map(int,raw_input().strip().split())
    summ=k[0]
    l=[]
    s=0
    temp=1000000000000000
    for j in range(0,n):
        s+=k[j]
        temp=min(temp,s)
    if(temp>0):
        print 0
    else:
        print (-1*temp)+1
    '''
    for j in range(1,n):
        if(summ >0):
            summ=summ+k[j]
        else:
            l.append(summ)
    if(n==1 and summ==0):
        print 1
    else:
        if(len(l)==0):
            print 0
        else:
            print abs(l[0])+1
    '''
