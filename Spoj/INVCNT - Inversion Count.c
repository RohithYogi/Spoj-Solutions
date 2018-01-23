#include <stdio.h>
#include <stdlib.h>
int _mergeSort(int arr[100000], int temp[100000], int left, int right)
{
  int mid, inv_count = 0;
  if (right > left)
  {

    mid = (right + left)/2;
 
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
 
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
 
int merge(int arr[100000], int temp[100000], int left, int mid, int right)
{
  int i, j, k;
  int inv_count = 0;
 
  i = left; 
  j = mid;  
  k = left; 
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      inv_count = inv_count + (mid - i);
    }
  }
 
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  while (j <= right)
    temp[k++] = arr[j++];
 
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}

int main(){
	int i,a[100000],temp[100000];
    int n,l,c=0;
    scanf("%d",&n);
    while(n>0){
    	c=0;
    	scanf("%d",&l);
    	for(i=0;i<l;i++){
    		scanf("%d",&a[i]);
		}
		c=_mergeSort(a,temp, 0, l- 1);
    	printf("%d\n",c);
    	n--;
	}
}
