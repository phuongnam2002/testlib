#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
ll gcd(ll a,ll b)
{
	if(a==0||b==0) return (a+b);
	return gcd(b,a%b);
}
void xuly()
{
	ll a,b,c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	ll m=gcd(a,b),n=gcd(c,d);
	if(m==n) printf("YES\n");
	else printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

