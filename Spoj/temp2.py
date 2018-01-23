n=[1,2,3,2,1,5,6,7,9,8,6]
p=[]
k=[]

def incresing(n,i):
    b=[]
    while(i<len(n)-1):
        if(n[i]<n[i+1]):
             b.append(n[i])
        else:
             return b
        i+=1

def decresing(n,i):
     b=[]
     while(i<len(n)-1):
        if(n[i]>n[i+1]):
             b.append(n[i])
        else:
             return b
        i+=1

def merge(p,k):
    o=[]
    i=0
    j=0
    h=0
    while(i<len(p)):
        o.append(p[i])
        i=i+1
    
    while(j<len(k)):
        o.append(k[j])
        j=j+1
        
    return o
i=5
while(i>0):
    if(n[i]>n[i+1]):
       p=decresing(n,i)
    else:
       k=incresing(n,i)
    if(p!=[] and k!=[]):
       p=merge(p,k)
       print p
       k=[]
    i-=1
    
