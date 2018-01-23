def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
ln=map(int,raw_input().strip().split())
t=ln[0]
B=ln[1]
lcm=[]
lcm.append(0)
x=1
lcm.append(1)
i=2
while(i<10002):
    l=len(lcm)-1
    x=lcm[l]
    x=(i*x)/gcd(i,x)
    lcm.append(x)
    i=i+1
for j in range(0,t):
    A=input()
    print lcm[A]%B
