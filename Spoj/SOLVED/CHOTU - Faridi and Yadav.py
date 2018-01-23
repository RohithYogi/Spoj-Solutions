t=input()
for i in range(0,t):
    l=map(float,raw_input().strip().split())
    x=l[0]
    y=l[1]
    e=(((x*x)-(y*y))/(x*x))**(0.5)
    ans=2*x*e
    print "%.3f"%ans
    
