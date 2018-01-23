#include<stdio.h>
int main(){
	int a[100000],b,c,d;
	int i,j,k;
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&c);
	for(i=0;i<b-c+1;i++){
		d=a[i];
		for(j=i+1;j<i+c;j++){
			if(a[j]>d){
				d=a[j];
			}
		}
		printf("%d ",d);
	}
	
}
