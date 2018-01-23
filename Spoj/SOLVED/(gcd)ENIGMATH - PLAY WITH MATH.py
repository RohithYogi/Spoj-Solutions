def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x
t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    A=l[0]
    B=l[1]
    r=gcd(A,B)
    if(r!=0):
        x=B/r
        y=A/r
    else:
        x=B
        y=A
    print x,
    print y
