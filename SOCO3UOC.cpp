#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll ngto(ll n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
void xuly()
{
  ll l,r;
  scanf("%lld%lld",&l,&r);
  ll dem=0;
  ll l1=sqrt(l),r1=sqrt(r);
  for(ll i=l1;i<=r1;i++)
  {
      if(ngto(i)&&(i*i)>=l&&(i*i)<=r) dem++;
  }
  printf("%lld\n",dem);
}
int main()
{
  //ios::sync_with_stdio(false);
  //cin.tie(0);
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}
