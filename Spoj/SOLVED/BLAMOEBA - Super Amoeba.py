t=input()
for i in range(0,t):
    l=map(int,raw_input().strip().split())
    y=(pow(l[0],l[1])%1000000007)
    x=0
    for j in range(0,l[1]):
        x=x+(pow(l[0],j))
        x=x%1000000007
    print int(x),
    print int(y)
'''
Got the logic!!!
did the sum
doing this sum in other language is better soooo

#include<bits/stdc++.h>
using namespace std;
long long int M = 1e9 + 7;
long long int power(long long int b,long long int n){
long long int ans(1);
while(n){
 if(n&1)
  ans=(ans*b)%M;
  b=(b*b)%M;
  n>>=1;
 }
 return ans;
}

void f(long long int a,long long int b,long long int &x,long long int &y){
 if(!b){
  x=1;
  y=0;
 }
 else {
  f(b,a%b,x,y);
  long long int temp=x;
  x=y;
  y=temp-(a/b)*y;
 }
}

int main(){
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 int tc;
 cin>>tc;
 while(tc--){
 long long int m,n,mn,x,y;
 cin>>m>>n;
 mn=power(m,n);
 f(m-1,M,x,y);
 cout<<((mn-1)*(x%M+M))%M<<' '<<mn<<endl;
}
'''
}
