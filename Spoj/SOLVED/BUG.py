t=input()
for i in range(0,t):
    s=map(int,raw_input().strip().split())
    male=[]
    female=[]
    inter=s[1]
    temp=0
    for j in range(0,inter):
        f=map(int,raw_input().strip().split())
        a=f[0]
        b=f[1]
        if(a in male):
            if(b in male):
                temp=1
            else:
                female.append(b)
        elif(a in female):
            if(b in female):
                temp=1
            else:
                male.append(b)
        elif(b in male):
            if(a in male):
                temp=1
            else:
                female.append(a)
        elif(b in female):
            if(a in female):
                temp=1
            else:
                male.append(a)
        else:
            male.append(a)
            female.append(b)
    print 'Scenario #'+str(i+1)+':'
    if(temp==1):
        print 'Suspicious bugs found!'
    else:
        print 'No suspicious bugs found!'
