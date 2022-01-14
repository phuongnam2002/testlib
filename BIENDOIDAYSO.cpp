#include<stdio.h>
#include<math.h>
#include<string.h>
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e6+3;
int check(ll a,ll b,ll c,ll d)
{
	if(a==b&&b==c&&c==d) return 1;
	return 0;
}
int main()
{
  ll a,b,c,d;
  ll f[5];
  while(1)
  {
  	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  	if(a==0&&b==0&&c==0&&d==0) break;
  	if(check(a,b,c,d)) printf("0\n");
  	else
  	{
  	  f[1]=a;f[2]=b;f[3]=c;f[4]=d;
  	  ll dem=0;
  	  while(1)
	  	{
		  a=abs(a-f[2]);b=abs(b-f[3]);c=abs(c-f[4]);d=abs(d-f[1]);
		  f[1]=a;f[2]=b;f[3]=c;f[4]=d;
		  dem++;	
		  if(check(a,b,c,d)==1) break;
		}
		printf("%lld\n",dem);
    }
  }
  return 0;
}

