#include<stdio.h>
#include<stdlib.h>
int main(){
	int k= ceil(log(100000)/log(2));;
	printf("%d %d",k,1<<k);
}
