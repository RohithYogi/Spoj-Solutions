t=input()
l=[]
for i in range(1,4500):
    if(i%2==0):
        p=i
        for j in range(1,i+1):
            numerator=j
            denominator=p
            s=str(j)+'/'+str(p)
            p-=1
            l.append(s)
    else:
        p=i
        for j in range(1,i+1):
            numerator=p
            denominator=j
            s=str(p)+'/'+str(j)
            p-=1
            l.append(s)

for i in range(0,t):
    k=input()
    print 'TERM '+str(k)+' IS '+l[k-1]
