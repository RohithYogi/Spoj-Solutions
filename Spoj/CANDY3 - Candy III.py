t=input()
for i in range(0,t):
    raw_input()
    n=input()
    s=0
    for j in range(0,n):
        s+=input()
    if(s%n==0):
        print 'YES'
    else:
        print 'NO'
