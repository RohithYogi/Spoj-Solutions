#include<stdio.h>
int main(){
	long long int j=1; 
	int k,n,i;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		j=1;
		scanf("%d",&n);
		if(n==0){
			printf("1\n");
		}
		else{
		while(n>0){
			j=j*n;
			n--;
		}
		printf("%llu\n",j);
	}
	}
}
