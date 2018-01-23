#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int r,c;
int d[1001][1001]; //Array to store distance
bool vis[1001][1001]; //Visited Array
void dfs(int i,int j)
{
	vis[i][j]=true;
	//Taking Dfs of all adjacent cells(i.e. the ones that share a common side)
	if(!vis[i+1][j]&&a[i+1][j]=='.'&&(i+1)<r) {  d[i+1][j]=d[i][j]+1; dfs(i+1,j); }
	if(!vis[i][j+1]&&a[i][j+1]=='.'&&(j+1)<c) {  d[i][j+1]=d[i][j]+1; dfs(i,j+1); }
	if(!vis[i][j-1]&&a[i][j-1]=='.'&&(j-1)>=0) {  d[i][j-1]=d[i][j]+1; dfs(i,j-1); }
	if(!vis[i-1][j]&&a[i-1][j]=='.'&&(i-1)>=0) {  d[i-1][j]=d[i][j]+1; dfs(i-1,j); }
}
int main() 
{
	int t;
	scanf("%d",&t);
	while( t-- )
	 {
	 	scanf("%d%d",&c,&r);
	 	int maxy=0,maxx=0,x,y,i,j,max=0;
	 	bool found=false;
	 	for(i=0;i<r;i++)
	 	 {
	 	 	for(j=0;j<c;j++)
	 	 	 {
	 	 	 	cin>>a[i][j];
	 	 	 	d[i][j]=0;
				vis[i][j]=false;
				//To find the first occurrence of '.' in the matrix 
	 	 	 	if(!found&&a[i][j]=='.') { found=true; x=i; y=j; }
	 	 	 }
	 	 }
		//If all elements are '#'
		if(!found) { printf("Maximum rope length is 0.\n"); break; }
	 	//Dfs from the first '.' found in the matrix
		dfs(x,y);
	 	//To find the position of the largest distance after the first dfs()
		for(i=0;i<r;i++)
	 	 {
	 	 	int max1=max_element(d[i],d[i]+c)-d[i];
	 	 	if(d[i][max1]>max)
	 	 	 { maxx=i; maxy=max1; max=d[i][max1]; }
	 	 }
	 	//Initialising visited array and distance array to default values for next dfs()
		for(i=0;i<r;i++)
	 	 {
	 	 	for(j=0;j<c;j++)
	 	 	 {
	 	 	 	vis[i][j]=false;
	 	 	 	
				d[i][j]=0;
				
	 	 	 }
			
	 	 }
	 	dfs(maxx,maxy);
	 	//Finding largest distance after second dfs() i.e. the answer
		for(i=0;i<r;i++)
	 	 {
	 	 	int max1=max_element(d[i],d[i]+c)-d[i];
	 	 	if(d[i][max1]>max)
	 	 	 {  max=d[i][max1]; }
	 	 }
	 	printf("Maximum rope length is %d.\n",max); 
	 }
	return 0;
}
