#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
void xuly()
{
	int n,dem=0;
	scanf("%d",&n);
	ll a[n+1];
	f1(i,n) 
	{
		scanf("%lld",&a[i]);
		if(a[i]==0) dem++;
	}
	f1(i,n)
	{
		if(a[i]!=0) printf("%lld ",a[i]);
	}
	f1(i,dem) printf("0 ");
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

