k=input()
l=raw_input()
l=l.split()
print l
for i in range(0,k):
    l[i]=int(l[i])
print l
p=input()
i=0
while(p<k+1):
    print max(l[i:p]),
    p=p+1
    i=i+1
