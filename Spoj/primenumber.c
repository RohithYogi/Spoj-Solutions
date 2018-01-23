#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int i,j,k,x,y,t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        k=n-m+1;
        int a[n-m+1];
        for(i=0;i<n-m+1;i++){
            a[i]=1;
        }
        for(i=2;i<=sqrt(n);i++){
            for(j=m/i;j<=n/i;j++)
                if((i*j>=m)&&(j!=1))
                    a[i*j-m]=0;
        }
        for(i=0;i<n-m+1;i++){
            if((a[i]==1)&&(i+m>=2))
                printf("%d\n",i+m);
        }
        printf("\n");
    }
 
    return 0;
}
