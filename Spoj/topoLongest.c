#include<stdio.h>
#include<stdlib.h>

int arr[20][20];
int visited[100];
int dist[100];
int stack[100],top=-1,v;

void addEdge(int source,int dest,int weight){
	if(source>20||dest>20||source<0||dest<0){
		printf("Invalid edge\n");
	}
	else{
		arr[source][dest]=weight;
	}
}

void print(){
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
		
}

void push(int x){
	if(top>=100){
		printf("INVALID\n");
		return;
	}
	top=top+1;
	stack[top]=x;
}

int pop(){
	if(top==-1){
		printf("STACKEMPTY\n");
		return;
	}
	int j=stack[top];
	top=top-1;
	return j;
}


void topo(int i){
	visited[i]=1;
	int j;
	for(j=0;j<v;j++){
		if(visited[j]==0 && arr[i][j]!=-10000){
			topo(j);
		}
	}
	push(i);
}


void topologicalsort(int s){
	int i,k;
	for(i=0;i<v;i++){
		visited[i]=0;
	}
	for(i=0;i<v;i++){
		if(visited[i]==0){
			topo(s);			
		}
	}
	for(i=0;i<v;i++){
		dist[i]=-10000;
	}
	dist[s]=0;
	while(top!=-1){
		k=pop();
		printf("%d ",k);
		for(i=0;i<v;i++){
			if(arr[k][i]!=-10000 && dist[i]<dist[k]+arr[k][i]){
				dist[i]=dist[k]+arr[k][i];
			}
		}
	}
	for(i=0;i<v;i++){
		if(dist[i]==-10000){
			printf("\ninfinity ");
		}
		else{
			printf("%d ",dist[i]);	
		}
	}
}

int main(){
	int i,j;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			arr[i][j]=-10000;
		}
	}
	v=6;
	addEdge(0, 1, 5);
	addEdge(0, 2, 3);
	addEdge(1, 3, 6);
	addEdge(1, 2, 2);
	addEdge(2, 4, 4);
	addEdge(2, 5, 2);
	addEdge(2, 3, 7);
	addEdge(3, 4, -1);
	addEdge(4, 5, -2);
	topologicalsort(1);
}
