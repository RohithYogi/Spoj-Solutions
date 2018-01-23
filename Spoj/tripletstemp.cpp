# include <stdio.h>
 
// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
int find3Numbers(int A[], int arr_size, int sum)
{
    int l, r,c=0;
 
    // Fix the first element as A[i]
    for (int i = 0; i < arr_size-2; i++)
    {
       // Fix the second element as A[j]
       for (int j = i+1; j < arr_size-1; j++)
       {
           // Now look for the third number
           for (int k = j+1; k < arr_size; k++)
           {
               if (A[i] + A[j] < A[k])
               {
               	 c=c+1;
                 printf("Triplet is %d, %d, %d\n", A[i], A[j], A[k]);
                 
               }
           }
       }
    }
    return c;
}
 
/* Driver program to test above function */
int main()
{
    int A[] = {2,5,6,9};
    int p,sum = 22;
    int arr_size = sizeof(A)/sizeof(A[0]);
 
    p=find3Numbers(A, arr_size, sum);
 
    printf("%d\n",p);
}
