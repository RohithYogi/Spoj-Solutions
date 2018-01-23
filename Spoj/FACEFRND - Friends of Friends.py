f=input()
fl=[]
un=[]
for i in range(0,f):
    l=map(int,raw_input().strip().split())
    fl.append(l[0])
    l.remove(l[0])
    l.remove(l[0])
    for j in l:
        if(un.count(j)==0):
            un.append(j)

for i in fl:
    un.remove(i)
print len(un)
        
'''

#include<stdio.h>
int main(){
 int a,i,j,n,m[200],ar[10009]={0},ans=0,b;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d %d",&m[i],&a);
  for(j=0;j<a;j++){
   scanf("%d",&b);
   ar[b]=1;
  }
 }
 for(i=0;i<n;i++){
  ar[m[i]]=0;
 }
 for(i=0;i<10000;i++){
  if(ar[i]==1){
   ans++;
  }
 }
 printf("%d\n",ans);
 return 0;
}
'''
