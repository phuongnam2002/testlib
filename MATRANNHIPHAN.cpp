#include<stdio.h>
#include<math.h>
#include<string.h>
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  int n;
  scanf("%d",&n);
  int a[1005][3];
  f1(i,n)
  {
  	f1(j,3)
  	{
  		scanf("%d",&a[i][j]);
	}
  }
  int dem=0;
  f1(i,n)
  {
  	int dem1=0,dem0=0;
  	f1(j,3)
  	{
  		if(a[i][j]==1) dem1++;
  		else dem0++;
	}
	if(dem1>dem0) dem++;
  }
  printf("%d",dem);
  return 0;
}

