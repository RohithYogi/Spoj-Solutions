import math
def sumfact(n):
    s=0
    for i in range(1,int(math.sqrt(n)+1)):
        if(n%i==0):
            s=s+i
            if(i!=(n/i)):
                s=s+(n/i)
    print s
    for j in range(2,int(math.sqrt(s)+1)):
        if(s%j==0):
            return 0
    return 1
print sumfact(81)
