def gd(a,b):
    if(b==0):
        return a
    else:
        return gd(b,a%b)
from fractions import gcd
t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    a=l[0]
    b=l[1]
    if(a>b):
        a=a%b
    else:
        b=b%a
    print gcd(l[0],l[1])
    print gd(a,b)

'''
Not accepted in python2 so wrote it in python3
def gd(x, y):

    if(y==0):
        return x
    else:
        return gd(y,x%y)
        
t=int(input())
for j in range(0,t):
    l=str(input())
    l=list(l)
    a=''
    b=''
    c=1
    for k in l:
      if(c==1 and k!=' '):
        a=a+k
      if(k==' '):
        c=2
      if(c==2 and k!=' '):
        b=b+k
    A=int(a)
    B=int(b)
    if(A==0):
      A=0
    elif(B==0):
      B=0
    else:
      if(A>B):
        A=A%B
      else:
        B=B%A
    print(gd(A,B))
'''
