t=input()
while(t!=0):
    n=t
    s=map(int,raw_input().strip().split())
    c=map(int,raw_input().strip().split())
    s.sort()
    c.sort()
    c.reverse()
    cost=0
    for i in range(0,n):
        cost=cost+(s[i]*c[i])
    print cost
    t=input()
