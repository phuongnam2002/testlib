#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
ll tn(ll n)
{
	ll m=n,s=0;
	while(n!=0)
	{
		s=s*10+n%10;
		n/=10;
	}
	if(s==m) return 1;
	return 0;
}
ll ktrale(ll n)
{
	if(n%2==0) return 0;
	while(n!=0)
	{
		int res=n%10;
		if(res%2==0) return 0;
		n/=10;
	}
	return 1;
}
ll tcso(ll n)
{
	ll s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	if(s%2==1) return 1;
	return 0;
}
void xuly()
{
	ll n;
	scanf("%lld",&n);
	if(tn(n)&&ktrale(n)&&tcso(n)) printf("YES\n");
	else printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

