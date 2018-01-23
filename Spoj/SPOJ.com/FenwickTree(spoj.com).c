#include<stdio.h>
#include<stdlib.h>

long long int T[1000];
long long int Prefixsum(long long int i){
	long long int s=0,j;
	while(i>0){
		s=s+T[i];
		j=i&(-i);
		i=i-j;
	}
	return s;
}

void Update(long long int i,long long int x,long long int n){
	long long int j;
	while(i<n+1){
		T[i]=T[i]+x;
		j=i&(-i);
		i=i+j;
	}
}

long long int RSQ(long long int arr[1000],long long int i,long long int j){
	long long int a=Prefixsum(j)-Prefixsum(i-1);
	return a;
}

void constructTree(long long int arr[1000],long long int n)
{
	long long int i;
    for (i=1; i<=n; i++){
        T[i] = 0;
    }
    for (i=0; i<n; i++){
        Update(i+1,arr[i],n);
    }
    
}

long long int main(){
	long long int n;
	scanf("%lli",&n);
	long long int arr[n];
	char a;
	long long int i,q;
	long long int b,c;
	for(i=0;i<n;i++){
		scanf("%lli",&arr[i]);
	}
	constructTree(arr,n);
	scanf("%lli",&q);
	while(0==0){
		scanf("%c%lli%lli",&a,&b,&c);
		if(a=='q'){
			printf("%lli\n",RSQ(arr,b,c));
		}
		if(a=='u'){
			Update(b,c,n);
		}
	}
}
