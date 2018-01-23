import math
def fact(n):
    s=0
    l=[]
    for i in range(1,int(math.sqrt(n)+1)):
        if(n%i==0):
            l.append(i)
            if(i!=(n/i)):
                l.append(n/i)
    return l

t=input()
for i in range(0,t):
    k=map(int,raw_input().strip().split())
    a=fact(k[0])
    b=fact(k[1])
    if(a==b):
        print len(a)
    else:
        c=0
        for j in a:
            if(j in b):
                c+=1
        print c

'''
My code is fine and fast runs for even 10^6 so problem with spoj ide's
Time limit exceeded
#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
 int t,a,b,num,sqt,i,ans;
 scanf("%d",&t);
 while(t--)
 {
  ans=0;
  scanf("%d %d",&a,&b);
  num=gcd(a,b);
  sqt=sqrt(num); 
  for(i=1;i<=sqt;i++)
  {
   if(num%i==0){
    ans+=2;
   if(i==num/i)
    ans--;
   }
  } 
  printf("%d\n",ans);
 }
 return 0;
}
'''
