n=input()
l=map(int,raw_input().strip().split())
f=input()
for i in range(0,n-f+1):
    m=l[i]
    for j in range(i+1,i+f):
        if(l[j]>m):
            m=l[j]
    print m,
        
