i=input()
g=1
while(i>0):
    l=[]
    k=raw_input()
    for j in range(0,len(k)):
        l.append(k[j])
    p=l.count('1')
    h=l.count('0')
    if(h==(2*p)):
        if(l[len(k)-1]=='1' or l[len(k)-2]=='1'):
            print "Case "+str(g)+": no"
        else:
            print "Case "+str(g)+": yes"
    else:
        print "Case "+str(g)+": no"
    g=g+1
    i=i-1
