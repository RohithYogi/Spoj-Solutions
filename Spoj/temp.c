#include<stdio.h>
int main(){
	int n[12]={1,2,3,2,1,5,6,7,9,8,6};
	int ptr1,ptr2;
	ptr1=0;
	int i=0,j=0,k=0;
	int b[12],c[12];
	while(ptr1<11){
		if(n[ptr1]>n[ptr1+1]){
			i=ptr1+1;
		}
		else{
			k=ptr1;
		}
		for(j=0;j<i;j++){
			b[j]=n[j];
		}
		for(j=i+1;j<k;j++){
			c[j]=n[j];
		}
		ptr1=ptr1+1;
	}
	for(i=0;i<12;i++){
		printf("%d\t",b[i]);
	}
}
