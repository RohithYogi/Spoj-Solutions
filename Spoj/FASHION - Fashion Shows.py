t=input()
for i in range(0,t):
    k=input()
    m=map(int,raw_input().strip().split())
    w=map(int,raw_input().strip().split())
    m.sort()
    w.sort()
    p=0
    for j in range(0,k):
        p=p+(m[j]*w[j])
    print p
