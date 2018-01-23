#include<stdio.h>
#include<stdlib.h>

int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
void constructTree(int arr[50000],int segment[50000],int low,int high,int i){
	if(low==high){
		segment[i]=arr[low];
		return;
	}
	int mid=(low+high)/2;
	constructTree(arr,segment,low,mid,(2*i)+1);
	constructTree(arr,segment,mid+1,high,(2*i)+2);
	segment[i]=min(segment[(2*i)+1],segment[(2*i)+2]);
}
int RMQ(int segment[50000],int qlow,int qhigh,int low,int high,int i){
	if(low>=qlow && high<=qhigh){
		return segment[i];
	}
	if(qlow>high || qhigh<low){
		return 15007;
	}
	int mid=(low+high)/2;
	return min(RMQ(segment,qlow,qhigh,low,mid,(2*i)+1),RMQ(segment,qlow,qhigh,mid+1,high,(2*i)+2));
	
}
void update(int arr[50000],int segment[50000],int value,int i,int n){
	if(i<0 || i>n){
		return;
	}
	arr[i]=value;
}
int main(){
	int i=0,j,n,a,b;
	int segment[50000];
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    constructTree(arr,segment,1,n,1);
    scanf("%d",&j);
    for(i=0;i<j;i++){
    	scanf("%d%d",&a,&b);
    	printf("%d\n",RMQ(segment,a,b,1,n,1));
	}
	
}
