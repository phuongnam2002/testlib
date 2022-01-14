#include<stdio.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int f[N];
int a[1005][1005],b[1005][1005];
void quick(int a[],int l,int r)
{
    int m=a[(l+r)/2];
    int i=l,j=r;
    while(i<=j)
    {
        while(a[i]<m) i++;
        while(a[j]>m) j--;
        if(i<=j)
        {
            int s=a[i];
            a[i]=a[j];
            a[j]=s;
            i++;j--;
        }
    }
    if(i<r) quick(a,i,r);
    if(l<j) quick(a,l,j);
}
int main()
{
  int n,m,ans=0;
  scanf("%d%d",&n,&m);
  f0(i,n)
  {
      f0(j,m) scanf("%d",&a[i][j]);
  }
  f0(i,n)
  {
      f0(j,m)
      {
        f[ans++]=a[i][j];
      }
  }
  quick(f,0,m*n-1);
  //f0(i,ans) printf("%d ",f[i]);
  int k=0,hang=n-1,cot=m-1,bh=0,bc=0;
  while(bh<=hang&&bc<=cot)
  {
      for(int i=bc;i<=cot;i++) b[bh][i]=f[k++];
      bh++;
      for(int i=bh;i<=hang;i++) b[i][cot]=f[k++];
      cot--;
      if(bh<=hang)
      {
          for(int i=cot;i>=bc;i--) b[hang][i]=f[k++];
          hang--;
      }
      if(bc<=cot)
      {
          for(int i=hang;i>=bh;i--) b[i][bc]=f[k++];
          bc++;
      }
  }
  f0(i,n)
  {
      f0(j,m) printf("%d ",b[i][j]);
      printf("\n");
  }
  return 0;
}
