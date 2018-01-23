def fun(mid,a,c):
    cow=1
    pos=a[0]
    for i in range(1,len(a)):
        if(a[i]-pos >= mid):
            pos=a[i]
            cow+=1
            if(cow==c):
                return 1
    return 0
    
def binary(a,c):
    ini=0
    last=a[len(a)-1]
    maxx=-1
    while(last>ini):
        mid=(ini+last)/2
        if(fun(mid,a,c)==1):
            if(mid>maxx):
                maxx=mid
            ini=mid+1
        else:
            last=mid
    return maxx
t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    n=l[0]
    c=l[1]
    a=[]
    for i in range(0,n):
        a.append(input())
    a.sort()
    print binary(a,c)
