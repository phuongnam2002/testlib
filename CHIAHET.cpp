#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  ll n,k,dem=0;
  scanf("%lld%lld",&n,&k);
  for(int i=2;i<=n;i++)
  {
  	ll x=i;
  	while(x%2==0)
  	{
  		dem++;
  		x/=2;
	}
  }
  if(dem>=k) printf("Yes");
  else printf("No");
  return 0;
}

