p=input()
n=raw_input()
n=n.split()
for i in range(0,p):
    n[i]=int(n[i])
print n
g=input()
m=raw_input()
m=m.split()
for i in range(0,g):
    m[i]=int(m[i])
print m
for i in range(0,p):
    if(n[i] not in m):
        print n[i],
