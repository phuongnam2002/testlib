#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
ll ngto(ll n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
ll cso(ll n)
{
	while(n!=0)
	{
		ll res=n%10;
		if(!ngto(res)) return 0;
		n/=10;
	}
	return 1;
}
void xuly()
{
  ll a,b,dem=0;
  scanf("%lld%lld",&a,&b);
  for(int i=a;i<=b;i++)
  {
  	 if(ngto(i)&&cso(i)) dem++;
  }
  printf("%lld\n",dem);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--) xuly();
}
