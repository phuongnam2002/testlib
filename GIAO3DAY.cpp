#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define sp(x) cout<<x<<" "
#define en(x) cout<<x<<endl
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int n,a[N],b[N],c[N];
ll d[100006];
void xuly()
{
   ll n1,n2,n3;
   scanf("%lld%lld%lld",&n1,&n2,&n3);
   ll a[n1],b[n2],c[n3];
   f0(i,n1) scanf("%lld",&a[i]);
   f0(i,n2) scanf("%lld",&b[i]);
   f0(i,n3) scanf("%lld",&c[i]);
   int i=0,j=0,k=0,m=0;
   while(i<n1&&j<n2&&k<n3)
   {
       if(a[i]==b[j]&&b[j]==c[k])
       {
           d[++m]=a[i];
           i++;j++;k++;
       }
       else if(a[i]<b[j]) i++;
       else if(b[j]<c[k]) j++;
       else k++;
   }
   if(m==0) printf("-1\n");
   else
   {
   	 for(int h=1;h<=m;h++) printf("%lld ",d[h]);
   	 printf("\n");
   }
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}
