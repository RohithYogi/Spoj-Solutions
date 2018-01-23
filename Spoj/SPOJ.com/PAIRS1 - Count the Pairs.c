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

int countPairsWithDiffK(int arr[100000], int n, int k)
{
    int count = 0;
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else 
              r++;
    }   
    return count;
}

int main(){
	int i,n,j,k,a[100000],c=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Quicksort(a,0,n);
	c=countPairsWithDiffK(a,n,k);
	printf("%d\n",c);
}
