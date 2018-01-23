def counting(l,i,j):
    h=0
    for k in range(i-1,j):
        if(l[k] not in l[i-1:k]):
            h+=1
        
    print h
k=input()
l=raw_input()
l=l.split()
for i in range(0,len(l)):
    l[i]=int(l[i])
p=input()
for i in range(0,p):
    h=raw_input()
    h=h.split()
    for j in range(0,len(h)):
        h[j]=int(h[j])
    counting(l,h[0],h[1])
