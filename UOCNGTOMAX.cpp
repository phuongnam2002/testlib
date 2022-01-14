#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	ll n;
	scanf("%lld",&n);
	ll pos=0;
	for(int i=2;i<sqrt(n);i++)
	{
		while(n%i==0)
		{
			pos=i;
			n/=i;
		}
	}
	if(n>1) pos=n;
	printf("%lld\n",pos);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

