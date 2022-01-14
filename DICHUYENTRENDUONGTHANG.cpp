#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int main()
{
  int t=1;
  ll a,b;
  while(t--)
  {
    scanf("%lld%lld",&a,&b);
    ll kq=abs(a-b);
    ll ans=sqrt(kq);
    if(ans*ans==kq) printf("%lld\n",2*ans-1);
    else if(ans*(ans+1)>=kq) printf("%lld\n",2*ans);
    else printf("%lld\n",2*ans+1);
  }
  return 0;
}
