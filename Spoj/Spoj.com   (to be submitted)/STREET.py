s=input()
while(s!=0):
    p=raw_input()
    p=p.split()
    l=[]
    m=[]
    for i in p:
        l.append(int(i))
    i=0
    k=1
    while(i<len(l)):
        if(l[i]==k):
            l.remove(l[i])
            k=k+1
        else:
            m.append(l[i])
            i=i+1
    i=len(m)-1
    while(1==1):
        if(m[i]==k):
            l.remove(m[i])
            i=i-1
            k=k+1
        else:
            break
    if(l==[]):
        print 'yes'
    else:
        print 'no'
    s=input()
