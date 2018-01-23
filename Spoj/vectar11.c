#include<stdio.h>
#include<math.h>
int arr[1000001]={0};
void update(int ind)
{
	int s=sqrt(ind),i;
	for(i=s;i>=1;i--)
	{
		if(arr[ind-i*i]==0)
		{
			arr[ind]=1;
			break;
		}
	}
}
void fun()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		arr[i*i]=1;
	}
	for(i=1;i<=1000000;i++)
	{
		if(!arr[i])
		{
			update(i);
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	fun();
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(arr[n]==1)
		printf("Win\n");
		else
		printf("Lose\n");
	}
return 0;
}
