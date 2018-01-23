l=map(int,raw_input().strip().split())
R=l[1]
a=map(int,raw_input().strip().split())
S=0
j=0
for i in range(0,len(a)):
    s=0
    while(j<len(a)):
        s=sum(a[i:j+1])
        if(s<=R):
            if(S<s):
                S=s
        else:
            break
        j+=1
print S

'''

TLE

n, m = map(int, raw_input().split())
hotels = map(int, raw_input().split())
s = 0
lo = 0
gt = 0
for x in xrange(n):
    if s + hotels[x] <= m:
        s += hotels[x]
        if gt < s:
            gt = s
    else:
        while (lo <= x) and (s + hotels[x] > m):
            s -= hotels[lo]
            lo += 1
        s += hotels[x]
        if gt < s:
            gt = s
print gt

'''
