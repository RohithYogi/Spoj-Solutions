#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int G[2019][2019]={0,0};
int chec(int a);
int n,top=-1,bottom=-1;
int queue[2019];
int colorArr[2019];
int main()
{
    int t,m,x,y,i,test;
    scanf("%d",&t);
    for(test = 1 ; test <= t ; test++)
    {
        memset(G,0,sizeof(G));
        int flag=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            G[x][y]=1;
            G[y][x]=1;
        }
        int res;
        for ( i = 1; i <= n; i++)
        colorArr[i] = -1;

        for(i=1;i<=n;i++)
        {
            if(colorArr[i]== -1)
            {
                res=chec(i);
                if(res==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            printf("Scenario #%d:\nSuspicious bugs found!\n",test);
        else
            printf("Scenario #%d:\nNo suspicious bugs found!\n",test);
    }
    return 0;
}

void push(int x){
	if(top==-1 && top<=bottom){
		top=0;
	}
	bottom=bottom+1;
	queue[bottom]=x;
}

int pop(){
	int v=queue[top];
	top=top+1;
	return v;
}
int chec(int start)
{   
    colorArr[start] = 1;
    push(start);
    while (top!=-1 && top<=bottom)
    {
       int i,j;
       i=pop();
        for (j = 1; j <= n; j++)
        {
            if (G[i][j] && colorArr[j] == -1)
            {
       
                colorArr[j] = 1 - colorArr[i];
                push(j);
            }
            else if (G[i][j] && colorArr[j] == colorArr[i])
                return 0;
        }
    }
    return 1;
}
