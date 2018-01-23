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
int binarySearch (int * a, int sum, int left, int right) {
  if (left > right)
    return -1;  // Failure
  if (left == right) {
    if (sum >= a[left])
      return left;
    return -1;  // Failure
  }

  int mid = (left + right) / 2;
  if (a[mid] > sum)
    return binarySearch(a, sum, left, mid-1);
  else if (a[mid] <= sum) {
    if (a[mid+1] > sum)
      return mid;
    return binarySearch(a, sum, mid + 1, right);
  }
}

int main () {
  int n,i,j;
  int tempIndex;
  int finalRs;
  int length[2000];
  while (1==1) {
    scanf ("%d", &n);
    if (n == 0)
      break;
    for (i = 0; i < n; i++)
      scanf ("%d", &length[i]);

    finalRs = 0;
    Quicksort(length,0,n-1);
    for (i = 0; i < n-2; i++)
      for (j = i+1; j < n-1; j++) {
        tempIndex = binarySearch (length, length[i] + length[j], j+1, n-1);
        if (tempIndex != -1)
          finalRs += (n-1-tempIndex);
        else
          finalRs += (n-1-j);
      }
    printf ("%d\n", finalRs);
  }

}
