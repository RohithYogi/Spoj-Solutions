#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n!=0)
    {
        long int a[n];
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        long long int work=0;
        for(i=1;i<n;i++)
        {
            a[i]+=a[i-1];
            work+=fabs(a[i-1]);
        }
        printf("%lld\n",work);
        n--;
    }
    return 0;
}
