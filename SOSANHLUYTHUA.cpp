#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int n,m,a[N],b[N];
int tinh(int x,int y[],int n,int m[])
{
    if(x==0) return 0;
    if(x==1) return m[0];
    int pos=upper_bound(y,y+n,x)-y;
    int ans=(n-pos);
    ans+=(m[0]+m[1]);
    if(x==2) ans-=(m[3]+m[4]);
    if(x==3) ans+=m[2];
    return ans;
}
void xuly()
{
    int d[5]={0};
    cin>>n>>m;
    ll ans=0;
    f0(i,n) cin>>a[i];
    f0(i,m)
    {
        cin>>b[i];
        if(b[i]<5) d[b[i]]++;
    }
    sort(b,b+m);
    f0(i,n) ans+=tinh(a[i],b,m,d);
    cout<<ans<<endl;
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
