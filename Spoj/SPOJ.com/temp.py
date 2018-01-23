n=[1,2,3,4,5,4,3,2,1,7,8,9]
b=[0,0,0,0,0,0,0,0,0,0,0,0]
k=0
j=0
while(k<len(n)-1):
    if(n[k]<n[k+1]):
        j=k+2
    else:
        break
    k=k+1

i=0
while(i<j):
    b[i]=n[i]
    i=i+1
print b
    
    
