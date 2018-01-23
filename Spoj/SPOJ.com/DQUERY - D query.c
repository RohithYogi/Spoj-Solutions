#include<bits/stdc++.h>

using namespace std;

int readInt () {
 bool minus = false;
 int result = 0;
 char ch;
 ch = getchar();
 while (true) {
  if (ch == '-') break;
  if (ch >= '0' && ch <= '9') break;
  ch = getchar();
 }
 if (ch == '-') minus = true; else result = ch-'0';
 while (true) {
  ch = getchar();
  if (ch < '0' || ch > '9') break;
  result = result*10 + (ch - '0');
 }
 if (minus)
  return -result;
 else
  return result;
}


struct node
{
 int lf,rt,qno; 
};

int bck_sz,ans=0;

bool cmp(struct node a,struct node b)
{
    int  i,j;
    i=a.rt/bck_sz;
    j=b.rt/bck_sz;
    if(i==j)
    {
        if(a.lf<b.lf)
            return 1;
        else
            return 0;
    }
    else{
        if(i<j)
            return 1;
        else
            return 0;
    }
}



int has[1000005];
 
void add(int num)
{
 if(has[num]==0)
  {
   ans++;
   has[num]=1;
  }
  else
   has[num]++;
}


void del(int num)
{
  if(has[num]==1)
  {
   ans--;
   has[num]=0;
  }
  else if(has[num]>1)
    has[num]--;
}



int main()
{
 int n,i,j,k,l,r,q,x,y;
 n=readInt();
 
 int arr[n+1]; 
 for(i=1;i<=n;i++)
  arr[i]=readInt();
   
     bck_sz=sqrt(n);
   
 q=readInt();
 
 int result[q];
 node a[q];
 for(i=0;i<q;i++)
 {
  l=readInt();
  r=readInt();
  a[i].lf=l;
  a[i].rt=r;
  a[i].qno=i;
 }

   sort(a,a+q,cmp);

  // for(i=0;i<q;i++)
    //cout<<a[i].lf<<" "<<a[i].rt<<endl;

l=1,r=0;
for(i=0;i<q;i++)
{
    x=a[i].lf;
    y=a[i].rt;
    while(r<y)
    {
 
        r++;
        add(arr[r]);
    }
    while(l>x)
    {
        l--;
        add(arr[l]);
    }
    while(l<x)
    {
        del(arr[l]);
        l++;
    }
    while(r>y)
    {
        del(arr[r]);
        r--;
    }
    result[a[i].qno]=ans; 
}


 for(i=0;i<q;i++)
  printf("%d\n",result[i]);

 return 0;
}
