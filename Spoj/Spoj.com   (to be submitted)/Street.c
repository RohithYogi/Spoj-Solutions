#include<stdio.h>
int main(){
 int T,arr[1001],size=-1,i,n,k=1;
 scanf("%d",&n);
 while(n!=0){
   int j=0;size=-1;
   k=1;
   for(i=0;i<n;i++){
       scanf("%d",&T);
    if(T!=k){
       arr[++size]=T;
    }
    else{
      k++;
      if(size!=-1){
        while(arr[size]==k){
          k++;size--;
          if(size==-1)break;
          }
       }  
    }
   }
   while(size>=0){
     if(arr[size]!=k)
	 j=1; 
     size--;
     k++;
   }
   if (j==0){
   	 printf("yes\n");
   }
   else{
   	 printf("no\n");
   }
   scanf("%d",&n);
 }
}
