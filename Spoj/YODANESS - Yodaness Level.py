def Merge(a,temp,left,mid,right):
    count=0
    i=left
    j=mid
    k=left
    while(i<=(mid-1) and j<=right):
        if(a[i]<=a[j]):
            temp[k]=a[i]
            k=k+1
            i=i+1
        else:
            temp[k]=a[j]
            k=k+1
            j=j+1
            count=count+(mid - i)
    while(i<=mid-1):
        temp[k]=a[i]
        k=k+1
        i=i+1
    while(j<=right):
        temp[k]=a[j]
        k=k+1
        j=j+1
    i=left
    while(i<=right):
        a[i]=temp[i]
        i=i+1
    return count


def Inversionpair(a,temp,left,right):
    count=0
    if(right>left):
        mid=(right+left)/2
        count=Inversionpair(a,temp,left,mid)
        count+=Inversionpair(a,temp,mid+1,right)
        count+=Merge(a,temp,left,mid+1,right)
    return count


r=input()
k=[[],[]]
while(r>0):
    s=[]
    l=input()
    h=2
    i=0
    p=1
    a=0 
    b=0
    k=[[],[]]
    while(h>0):
       k[i]=raw_input()
       k[i]=k[i].split(' ')
       i=i+1
       h=h-1
    a=0
    b=0
    while(a<len(k[0])):
        while(b<len(k[1])):
            if(a<len(k[0]) and str(k[1][b])==str(k[0][a])):
                s.append(a+1)
                b=b+1
                a=0
            else:
                a=a+1
        a=a+1      
    c=0
    o=[]
    for j in range(0,len(s)):
        o.append(0)
    c=Inversionpair(s,o,0,len(s)-1)
    print c
    r=r-1
    
'''2
6
in the force strong you are
you are strong in the force
6
or i will help you not
or i will not help you'''
        
    
