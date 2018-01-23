n=[1,2,3,4,9,8,7,6,5,1,2,3,4]
p=[]
k=0
while(k<len(n)):
    p=[]
    p.append([])
    h=0
    for i in range(0,len(n)-1):
            if(n[i]<n[i+1] and n[i+1]-n[i]==1):
                p[h].append(n[i])
            elif(n[i]<n[i+1]):
                p[h].append(n[i])
                p.append([])
                h=h+1
    print p
            
    k=k+len(p)
