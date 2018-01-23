#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	//clock_t c0,c1;
	int t,n,m,i,j,flag;
	scanf("%d",&t);
	while(t-->0)
	{
		scanf("%d%d",&n,&m);
		//c0=clock();
		for(i=n;i<=m;i++)
		{
			if(i==1 || (i%2==0 && i!=2))
				continue;
			flag=1;
 
			for(j=3;j<=sqrt(i);j+=2)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				printf("%d\n",i);
		}
		printf("\n");
	}
	//c1=clock();
	//printf("time:- %f",(float)(c1-c0)/ CLOCKS_PER_SEC);
	return 0;
} 
