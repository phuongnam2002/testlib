//Made By Phuong Nam PROPTIT <3//
#pragma GCC Optimize("O3")
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
#define el cout<<'\n'
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
struct nam{int n,s;};
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int x;
  vector<nam>a;
  while(cin>>x)
  {
      bool kt=1;
      f0(j,a.size())
      {
          if(x==a[j].n)
          {
              kt=0;
              a[j].s++;
              break;
          }
      }
      if(kt)
      {
         struct nam b;
         b.n=x;
         b.s=1;
         a.pb(b);
      }
  }
  f0(i,a.size()) cout<<a[i].n<<' '<<a[i].s<<'\n';
}
//-----YEU CODE HON CRUSH-----//
