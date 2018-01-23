t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    x1=l[0]
    y1=l[1]
    r1=l[2]
    x2=l[3]
    y2=l[4]
    r2=l[5]
    X= x2-x1
    Y= y2-y1
    X= X*X
    Y= Y*Y
    c= pow((X+Y),0.5)
    
    if(c>(r1+r2)):
        tan=4
    if(c==(r1+r2)):
        tan=3
    if(c<(r1+r2)):
        tan=2
    if(c==abs(r1-r2)):
        tan=1
    if(c<abs(r1-r2)):
        tan=0
    if(tan==0):
        print 'I'
    elif(tan==1):
        print 'E'
    else:
        print 'O'
