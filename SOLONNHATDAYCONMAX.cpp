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
int n,k,a[N];
void xuly()
{
   cin>>n>>k;
   f1(i,n) cin>>a[i];
   deque<int>q;
   f1(i,k)
   {
       while(q.size()&&a[q.back()]<=a[i]) q.pop_back();
       q.push_back(i);
   }
   for(int i=k+1;i<=n;i++)
   {
       cout<<a[q.front()]<<' ';
       while(q.size()&&q.front()+k<=i) q.pop_front();
       while(q.size()&&a[q.back()]<=a[i]) q.pop_back();
       q.pb(i);
   }
   cout<<a[q.front()]<<endl;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
//-----YEU CODE HON CRUSH-----//
