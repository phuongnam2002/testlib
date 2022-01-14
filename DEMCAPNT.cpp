#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  ll n,dem=0;
  scanf("%lld",&n);
  ll a[n+5];
  for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
  for(int i=1;i<=n-1;i++)
  {
  	for(int j=i+1;j<=n;j++)
  	{
  	  if(a[i]>a[j]) dem++;
    }
  }
  printf("%lld",dem);
  return 0;
}

