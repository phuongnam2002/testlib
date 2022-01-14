#include<stdio.h>
#include<math.h>
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
	ll uc=1;
	for(int i=2;i<=n;i++) uc=bc(uc,i);
	printf("%lld\n",uc);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

