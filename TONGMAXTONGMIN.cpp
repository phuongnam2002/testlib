#include<stdio.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	ll n1,n2;
	scanf("%lld%lld",&n1,&n2);
	ll a[100],b[100],m=0,n=0;
	while(n1!=0)
	{
		a[++m]=n1%10;
		n1/=10;
	}
	while(n2!=0)
	{
		b[++n]=n2%10;
		n2/=10;
	}
	for(int i=1;i<=m;i++)
	{
		if(a[i]==6) a[i]=5; 
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==6) b[i]=5; 
	}
	ll ans1=0,ans2=0;
	for(int i=m;i>=1;i--) ans1=ans1*10+a[i];
	for(int i=n;i>=1;i--) ans2=ans2*10+b[i];
	printf("%lld ",ans1+ans2);
	for(int i=1;i<=m;i++)
	{
		if(a[i]==5) a[i]=6; 
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==5) b[i]=6; 
	}
	ans1=0,ans2=0;
	for(int i=m;i>=1;i--) ans1=ans1*10+a[i];
	for(int i=n;i>=1;i--) ans2=ans2*10+b[i];
	printf("%lld",ans1+ans2);
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

