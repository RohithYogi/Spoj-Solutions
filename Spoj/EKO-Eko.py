p=map(int,raw_input().strip().split())
n=p[0]
k=p[1]
l=map(int,raw_input().strip().split())
m=max(l)
low=0
high=m
c=0
h=0
while(low<=high):
    mid=(low+high)/2
    c=0
    for j in range(0,n):
        temp=l[j]-mid
        if(temp>0):
            c+=temp
    if(c==k):
        h = mid
        break
    elif(c<k):
        high=mid-1
    else:
        low=mid+1
        #if the height is never equal atleast min
        if(mid>h):
            h=mid
print h

'''
Time limit exceeded in python but AC in C
'''
