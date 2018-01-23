#Min difference between two arrays
p=input()
for i in range(0,p):
    k=map(int,raw_input().strip().split())
    l=map(int,raw_input().strip().split())
    k.remove(k[0])
    l.remove(l[0])
    k.sort()
    l.sort()
    d=1000000
    i=0
    j=0
    while(i<len(k) and j<len(l)):
        c=abs(k[i]-l[j])
        if(c<d):
            d=c
        if(k[i]>l[j]):
            j+=1
        else:
            i+=1
    print d
            
    
