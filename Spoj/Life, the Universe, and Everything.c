#include<stdio.h>
int main(){
	int a[100000],j,i=0;
	while(1==1){
		scanf("%d",&a[i]);
		if(a[i]==42){
			j=i;
			break;
		}
		i=i+1;
	}
	for(i=0;i<j;i++){
		printf("%d\n",a[i]);
	}
}
