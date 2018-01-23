#include <stdio.h>
#include<stdbool.h>
#define MAX 30001
int tree[30009];
int merge(int A[100000],int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int L[100000],R[100000],i,j,k;
	for(i=1;i<=n1;i++){
		L[i]=A[p+i-1];
	}
	for(j=1;j<=n2;j++){
		R[j]=A[q+j];
	}
	L[n1+1]=1000000;
	R[n2+1]=1000000;
	i=1;
	j=1;
	for(k=p;k<=r;k++){
		if(L[i]<=R[j]){
		A[k]=L[i];
		i++;
	}
	else{
	    A[k]=R[j];
		j++;	
	}
	}
	
}
int  mergesort(int A[100000],int p,int r){
	if(p<r){
		int q;
		q=(p+r)/2;
		mergesort(A,p,q);
		mergesort(A,q+1,r);
		merge(A,p,q,r);
	}
}

void update(int pos){
    while(pos<=MAX){
        tree[pos]+=1;
        pos += (pos & -pos);
    }
}
int query(int pos){
    int result = 0;
    while(pos){
        result += tree[pos];
        pos -= (pos & -pos);
    }
    return result;
}
struct data{
    int value , pos;
};
struct query_data{
    int i , j , k , pos;
};
bool compare(struct data a,struct data b){
    return a.value > b.value;
}
bool cmp(struct query_data a , struct query_data b){
    return a.k > b.k;
}
int main(){
    int n;
    scanf("%d",&n);
    struct data arr[n+9];
    int i;
    for(i = 0 ; i < n ; i++)
        scanf("%d",&arr[i].value), arr[i].pos = i+1;
    mergesort(arr , arr+n , compare);
    int q_no;
    scanf("%d",&q_no);
    struct query_data q[q_no+9];
    for( i = 0 ; i < q_no ; i++)
        scanf("%d%d%d",&q[i].i ,&q[i].j , &q[i].k) , q[i].pos = i;
    int result[q_no + 9];
    mergesort(q , q+q_no , cmp);
    int pos = 0;
    for(i = 0 ; i<q_no ; i++){
        while(pos < n && arr[pos].value > q[i].k){
            update(arr[pos].pos);
            pos++;
        }
        result[q[i].pos] = query(q[i].j) - query(q[i].i - 1);
    }
    for(i = 0 ; i < q_no ; i++)
        printf("%d\n",result[i]);
    return 0;
}
