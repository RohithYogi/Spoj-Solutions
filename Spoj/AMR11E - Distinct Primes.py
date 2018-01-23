import math
global p
global distinct
distinct=[]
p=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101]
def prime(n):
    i=0
    c=0
    while(p[i]<=math.sqrt(n)):
        if(n%p[i]==0):
            c+=1
            while(n%p[i]==0):
                n/=p[i]
        i+=1
    if(n>1):
        c+=1
    return c
        
                
  
for i in range(30,2665):
    if(prime(i)>=3):
        distinct.append(i)
    
t=input()
for i in range(0,t):
    p=input()
    p=p-1
    print distinct[p]
