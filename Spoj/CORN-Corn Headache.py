t=input()
for i in range(0,t):
    n=map(float,raw_input().strip().split('e'))
    R=n[0]
    S=n[1]
    H=n[2]
    pi=3.1415
    A=(pi*R)*(pow(((H*H)+(R*R)),0.5))
    Ans=A*S
    Ans=Ans+1
    print int(Ans)
    
