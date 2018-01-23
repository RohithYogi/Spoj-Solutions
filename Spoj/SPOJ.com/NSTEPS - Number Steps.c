#include<stdio.h>
int main(){
	int x,y,n,p=0,i,r=1,q=2,s=3;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d",&x,&y);
	if(x==0 || x==1){
		if(x==y){
			printf("%d\n",x);
		}
		else{
			printf("No Number\n");
		}
	}
	else if(x==y){
		p=0;
		r=1;
		int j=x;
		if(x%2==0){
		while(x%2==0 && j>=2){
		    p=p+4;
		    j=j-2;
	    }
	    printf("%d\n",p);
	    }
	    else{
	    	while(x%2==1 && j>=3){
	    	r=r+4;
			j=j-2;	
			}
			printf("%d\n",r);
		}
	}
	else if(y==(x-2)){
		int j=x;
		q=2;
		s=3;
		if(x==2){
			printf("%d\n",x);
		}
		else if(x==3){
			printf("%d\n",x);
		}
		else if(x%2==0){
		while(x%2==0 && j>2){
			q=q+4;
			j=j-2;
		}
		printf("%d\n",q);
	    }
	    else if(x%2==1){
	    	while(x%2==1 && j>3){
			s=s+4;
			j=j-2;
		}
		printf("%d\n",s);
	    }
		}
	else{
		  printf("No Number\n");	
		}
	}
}
