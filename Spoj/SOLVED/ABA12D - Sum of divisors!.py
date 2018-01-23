
import math
def sumfact(n):
    s=0
    for i in range(1,int(math.sqrt(n)+1)):
        if(n%i==0):
            s=s+i
            if(i!=(n/i)):
                s=s+(n/i)
    for j in range(2,int(math.sqrt(s)+1)):
        if(s%j==0):
            return 0
    return 1


u=[]
for i in range(2,1000):
    u.append(pow(i,2))
    
p=[2]
for i in u:
    if(sumfact(i)==1):
        p.append(i)


'''
p=[2, 4, 9, 16, 25, 64, 289, 729, 1681,2401, 3481,
    4096, 5041, 7921, 10201, 15625, 17161, 27889,
    28561, 29929, 65536, 83521, 85849, 146689,262144,
    279841,458329, 491401,531441,552049,579121,597529,
    683929, 703921, 707281, 734449, 829921]
'''
t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    c=0
    count=0
    while(p[c]<l[0]):
        c+=1
    while(p[c]<=l[1]):
        count+=1
        c+=1
    
    print count
