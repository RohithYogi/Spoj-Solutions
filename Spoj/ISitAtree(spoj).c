#include<stdio.h>
struct set{
 int parent;
 int rank; 
};
int find(struct set ar[],int a){
 if(ar[a].parent==-1){
  return a;
 }
 find(ar,ar[a].parent);
}
int main(){
 int a,b,c,d,e,x,i=0;
 scanf("%d %d",&a,&b);
 struct set ar[a+1];
 for(x=0;x<=a;x++){
  ar[x].parent=-1;
  ar[x].rank=0;
 }
 while(b--){
  scanf("%d %d",&c,&d);
  int g=find(ar,c);
  int f=find(ar,d);
  if(g==f){
   i=1;
  }else{
    if(ar[g].rank<ar[f].rank)
          ar[g].parent=f;
       else if(ar[g].rank>ar[f].rank)
          ar[f].parent=g;
      else{
          ar[f].parent=g;
          ar[g].rank++;
      }
  }
 }
 if(i==0){
  printf("YES\n");
 }else{
  printf("NO\n");
 }
 return 0;
}



/*You are given an unweighted, undirected graph. Write a program to check if it's a tree topology.

Input
The first line of the input file contains two integers N and M --- number of nodes and number of edges in the graph 
(0 < N <= 10000, 0 <= M <= 20000). Next M lines contain M edges of that graph --- Each line contains a pair (u, v) 
means there is an edge between node u and node v (1 <= u,v <= N).

Output
Print YES if the given graph is a tree, otherwise print NO.*/
