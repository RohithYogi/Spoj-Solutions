#include<stdio.h>
#include<stdlib.h>

struct node{
	int value;
	int sum;
	int max;
};
struct node *arr[100]=NULL;
int k=0;
struct node *Node(int v){
	arr[k]->value=v;
	arr[k]->sum=1;
	arr[k]->max=1;
	k++;
}

int frequent(struct node *arr[100],int i,int j,int low,int high,int c){
	if(arr[i]->value=arr[i+1]->value){
		arr[i]->sum++;
		arr[i+1]->sum++;
	}
}
