t=input()
for j in range(0,t):
    n=input()
    l=map(int,raw_input().strip().split())
    l.sort()
    ans=n
    L=n-1
    i = n-2
    while(i >=0):
       if (l[L]==l[i]):
           ans += L+1
       else:
           L= i
           ans += i+1
       i-=1
    print ans
 
        
