#include<stdio.h>
int partition(int A[100000],int p,int r){
	int x,k,i,j;
	x=A[r];
	i=p-1;
	for(j=p;j<=r-1;j++){
		if(A[j]<=x){
			i=i+1;
			k=A[j];
		    A[j]=A[i];
		    A[i]=k;
		}
	}
	k=A[r];
	A[r]=A[i+1];
	A[i+1]=k;
	return i+1;
}
int Quicksort(int A[100000],int p,int r){
	int q;
	if(p<r){
		q=partition(A,p,r);
		Quicksort(A,p,q-1);
		Quicksort(A,q+1,r);
	}
}
int main(){
	int d,f;
	int i,j,k,arr[100],c=0;
	scanf("%d",&d);
	while(d!=0){
		for(i=0;i<d;i++){
			scanf("%d",&arr[i]);
		}
		Quicksort(arr,0,d);
		for (i = 0; i <d-2; i++){
           for (j = i+1; j <d-1; j++){
               for (k = j+1; k <d; k++){
               if (arr[i] + arr[j] < arr[k])
               {
               	 c=c+1;
               }
           }
       }
    }
		printf("%d\n",c);
		c=0;
		scanf("%d",&f);
		d=f;
	}
}
