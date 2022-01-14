#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define pi 3.141592653589793238
typedef long long ll;
const int N=1e6+3;
int main()
{
  int n,m;
  scanf("%d",&n);
  int a[105][105],b[105][105];
  f1(i,n)
  {
      f1(j,n)
      {
          scanf("%d",&a[i][j]);
      }
  }
  scanf("%d",&m);
  f1(i,m)
  {
      f1(j,m)
      {
          scanf("%d",&b[i][j]);
      }
  }
  f1(i,n)
  {
      f1(j,n)
      {
          int pos1=i%m,pos2=j%m;
          if(pos1==0) pos1=m;
          if(pos2==0) pos2=m;
          a[i][j]*=b[pos1][pos2];
      }
  }
  f1(i,n)
  {
      f1(j,n)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }
}
