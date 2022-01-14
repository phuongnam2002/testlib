#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
ll giam(ll n)
{
	int a=n%10;
	n/=10;
	while(n!=0)
	{
		int b=n%10;
		if(b>a) return 0;
		n/=10;
		a=b;
	}
	return 1;
}
void xuly()
{
	ll n;
	scanf("%lld",&n);
	ll a1=pow(10,n-1),a2=pow(10,n);
	for(int i=a1;i<a2;i++)
	{
		if(giam(i)) printf("%d ",i);
	}
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}
