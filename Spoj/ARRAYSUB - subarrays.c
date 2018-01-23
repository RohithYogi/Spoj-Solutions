#include<stdio.h>
int max(int a[100000],int i,int k){
	int j;
	int max=a[i];
	for(j=i+1;j<k;j++){
		if(a[j]>max){
			max=a[j];
		}
	}
	return max;
}
int main(){
	int k,i,a[100000];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	int p;
	scanf("%d",&p);
	i=0;
	while(p<k+1){
		printf("%d\t",max(a,i,p));
		p++;
		i++;
	}
}
