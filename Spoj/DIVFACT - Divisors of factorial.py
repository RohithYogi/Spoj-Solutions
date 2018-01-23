import math
t=input()
for i in range(0,t):
    p=input()
    f=1
    if(p==0):
        f=1
        print 1
    else:
        for j in range(1,p+1):
            f=f*j
        c=0
    
        for k in range(1,int(math.sqrt(f)+1)):
            if(f%k==0):
                c+=1
                if(k!=(f/k)):
                    c+=1
        c=c%1000000007
        print c

'''
RunTime error
but correct method mentioned below
#include <bits/stdc++.h>
using namespace std;
 
#define lli long long
#define DEBUG(x) cout<<">value ("<<#x<<") : "<<x<<endl;
#define mod 1000000007
#define pb push_back
 
const int limit = 100005;
 
vector<bool> prime(limit,true);
vector<int> primes;
void seive(){
	for(int i=2;i<limit;i++){
		if(prime[i]){
            primes.pb(i);
			for(int j=i;j<limit;j+=i){
				prime[j]=false;
            }
		}
	}
	return;
}
 
int get(int n,int p){
    int ans  = 0;
    lli cur = (long long)p;
    while(true){
        int temp = n/cur;
        if(temp==0) break;
        ans += temp;
        cur *= (long long)p;
    }
    return ans;
}
 
int main() {
    int t,n;
    seive();
    scanf("%d",&t);
    while(t--){
       scanf("%d",&n);
       lli ans = 1;
       for(int i=0;i<primes.size();i++){
            int loc = get(n,primes[i]);
            loc++;
            ans = ( (ans%mod)*((long long)loc%mod))%mod;
       }
       printf("%lld\n",ans);
    }
}
'''
