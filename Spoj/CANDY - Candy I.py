p=input()
while(p!=-1):
    l=[]
    k=0
    for i in range(0,p):
        l.append(input())
    for i in range(0,p):
        k=k+l[i]
    if(k%p==0):
        avg=k/p
        total=0
        for i in range(0,p):
            if(l[i]>avg):
                total=total+(l[i]-avg)
        print total
    else:
        print '-1'
    p=input()
