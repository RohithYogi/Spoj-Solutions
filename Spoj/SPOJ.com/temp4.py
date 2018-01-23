n=[1,2,4,5]
k=[]
i=0
j=0
while(i<len(n)):
        j=i+1
        while(j<len(n)):
            if(abs(n[i]-n[j])==1):
                k.append(n[i])
                k.append(n[j])
                j=j+1
                i=i+1
            j=j+1
        i=i+1
print k   
p=[]
for i in range(0,len(k)):
    p.append(k[i])
print p
p.sort()
print p

        
