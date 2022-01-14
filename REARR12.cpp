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
   ll n;
   scanf("%lld",&n);
   ll a[n+5];
   f1(i,n) scanf("%lld",&a[i]);
   ll ma=-1000000000000000;
   for(int i=1;i<=n;i++)
   {
   	  ll s=1; 
   	  for(int j=i;j<=n;j++)
   	  {
   	     	s*=a[j];
   	     	if(s>ma) ma=s;
	  }
   }
   printf("%lld\n",ma);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

