#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int ngto(int n)
{
	if(n<2) return 0;
	if(n<=3) return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0) return 0;
	}
	return 1;
}
int tcs(ll n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	if(ngto(s)) return 1;
	return 0;
}
int cso(int n)
{
	while(n!=0)
	{
		int r=n%10;
		if(!ngto(r)) return 0;
		n/=10;
	}
	return 1;
}
void xuly()
{
	ll a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(cso(i)&&tcs(i)&&ngto(i)) dem++;
	}
	printf("%d\n",dem);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}
