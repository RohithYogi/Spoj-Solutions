#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	float t,r,s,h,pi,A,Ans;
	char l[12],*S,*H,*R;
	int i,j,k=0;
	float pie=3.1415;
	int a=0,b=0,c=0;
	float ans;
	int As;
	scanf("%f",&t);
	for(i=0;i<t;i++){
    	scanf("%s",l);
		R=strtok(l,"e");
		S=strtok(NULL,"e");
		H=strtok(NULL,"e");
		r=(float) atof(R);
		s=(float) atof(S);
		h=(float) atof(H);
		//printf("%s %s %s \n",R,S,H);
		//printf("%f %f %f \n",r,s,h);
		ans=(pie*r)*(sqrt((h*h)+(r*r)));
		ans=ans*s;
		As=(int)(ans);
		if(As<ans){
			printf("%d\n",As+1);	
		}
		else{
			printf("%d\n",As);
		}
			
	}
}

