#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
ll gcd(ll a,ll b)
{
	if(a==0||b==0) return (a+b);
	return gcd(b,a%b);
}
ll bc(ll a,ll b)
{
	return (a*b)/gcd(a,b);
}
void xuly()
{
	ll n;
	scanf("%lld",&n);
	ll a[n+5];
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	printf("%lld ",a[1]);
	for(int i=2;i<=n;i++)
	{
		printf("%lld ",bc(a[i],a[i-1]));
	}
	printf("%lld\n",a[n]);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

