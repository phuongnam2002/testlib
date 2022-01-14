#include<stdio.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[1005][1005];
ll b[1005][1005];
ll c[1005][1005];
ll res[1005][1005];
ll r[1005][1005];
int main()
{
  ll m,n,p,q;
  scanf("%lld%lld%lld%lld",&m,&n,&p,&q);
  f1(i,m)
  {
      f1(j,n) scanf("%lld",&a[i][j]);
  }
  f1(i,n)
  {
      f1(j,p) scanf("%lld",&b[i][j]);
  }
  f1(i,p)
  {
      f1(j,q) scanf("%lld",&c[i][j]);
  }
  f1(i,m)
  {
      f1(j,p)
      {
          res[i][j]=0;
          f1(k,n) res[i][j]+=a[i][k]*b[k][j];
      }
  }
  f1(i,m)
  {
      f1(j,q)
      {
          r[i][j]=0;
          f1(k,p) r[i][j]+=res[i][k]*c[k][j];
      }
  }
  f1(i,m)
  {
      f1(j,q) printf("%lld ",r[i][j]);
      printf("\n");
  }
  return 0;
}
