#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
  ll n;
  scanf("%lld",&n);
  if(n%2==1) printf("NO\n");
  else
  {
  	while(n!=0)
  	{
  	  ll r=n%10;
  	  if(r%2==1) 
  	  {
  	  	printf("NO\n");
  	  	return;
	  }
	  n/=10;
	}
	printf("YES\n");
  }
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) xuly();
}
