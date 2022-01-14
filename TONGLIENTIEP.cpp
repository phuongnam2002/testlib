#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	ll n;
	scanf("%lld",&n);
	ll d=0;
	n*=2;
	for(ll x=2;x<=sqrt(n);x++)
	{
		if(n%x==0)
		{
			ll y=n/x;
			if((y-x)%2==1&&(y>x)) d++;
		}
	}
	printf("%d\n",d);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
}

