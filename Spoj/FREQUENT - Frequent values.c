#include <stdio.h>
#include <stdlib.h>
struct node
{
  int res,pre,suf,pv,sv;
  void merge(struct node a,struct node b)
  {
    pre = a.pre;
    suf = b.suf;
    pv = a.pv;
    sv = b.sv;
    if(a.pv == b.pv )
      pre = a.pre + b.pre;
    if(a.sv == b.sv)
      suf = a.suf + b.suf;
    res = max(a.res,b.res);
    if(a.sv == b.pv)
      res = max(res , a.suf + b.pre);
  }
    struct node(){
      res = pre = suf = sv = pv = 0;
    }
    struct node(int val){
      res = pre = suf =1;
      sv = pv = val;
    }
}tree[500000];
void create(int pos)
{
  pos>>=1;
  while(pos){
    tree[pos].merge(tree[pos<<1],tree[(pos<<1)+1]);
    pos>>=1;
  }
}
struct node query(int root,int l_most,int r_most,int l,int r)
{
  if(l_most >= l && r_most <= r)
    return tree[root];
  int l_child = (root<<1) , r_child = l_child + 1,mid = (l_most + r_most )>>1;
  struct node left=(struct node*)malloc(sizeof(struct node)),right = (struct node*)malloc(sizeof(struct node));
  if(l<=mid)
    left = query(l_child,l_most,mid,l,r);
  if(r>mid)
    right = query(r_child,mid+1,r_most,l,r);;
  struct node temp = node();
  temp.merge(left,right);
  return temp;
}
int main()
{
  int n,q,i;
  while (1){
  scanf("%d",&n);
  if (n==0) break;
  scanf("%d",&q);
  int k = ceil(log(n)/log(2));
  int pos = (1<<k),temp;
  for( i=0;i<n;i++){
    scanf("%d",&temp);
    tree[pos+i] = node(temp);
    create(pos+i);
  }
  for(i=0;i<q;i++){
    int l,r;
    scanf("%d%d",&l,&r);
    printf("%d\n",query(1,1,pos,l,r).res);
  }}
  return 0;
}
