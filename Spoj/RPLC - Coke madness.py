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
        print "Scenario #"+str(i+1)+": 1"
    else:
        print "Scenario #"+str(i+1)+": "+str((-1*temp)+1)
