#include<stdio.h>
#include<math.h>
typedef long long ll;
int ngto(ll n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int tang(int n)
{
	int a=n%10;
	n/=10;
	while(n!=0)
	{
		int b=n%10;
		if (b>=a) return 0;
		n/=10;
		a=b;
	}
	return 1;
}
int giam(int n)
{
	int a=n%10;
	n/=10;
	while(n!=0)
	{
		int b=n%10;
		if (b<=a) return 0;
	    n/=10;
	    a=b;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,dem=0;
		scanf("%lld",&n);
		ll a1=pow(10,n-1),a2=pow(10,n);
		for (ll i=a1;i<a2;i++)
		{
			if (tang(i)&&ngto(i)) dem++;
		}
		for(ll i=a1;i<a2;i++)
		{
			if(giam(i)&&ngto(i)) dem++;
		}
		printf("%lld\n",dem);
	}
}
