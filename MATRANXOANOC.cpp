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
int n,m,a[1005][1005];
void xuly()
{
    cin>>n>>m;
    f0(i,n)
    {
        f0(j,m) cin>>a[i][j];
    }
    int bc=0,bh=0,hang=n-1,cot=m-1;
    while(bc<=cot&&bh<=hang)
    {
        for(int i=bc;i<=cot;i++) cout<<a[bh][i]<<' ';
        bh++;
        for(int i=bh;i<=hang;i++) cout<<a[i][cot]<<' ';
        cot--;
        if(bh<=hang)
        {
            for(int i=cot;i>=bc;i--) cout<<a[hang][i]<<' ';
            hang--;
        }
        if(bc<=cot)
        {
            for(int i=hang;i>=bh;i--) cout<<a[i][bc]<<' ';
            bc++;
        }
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
}
//-----YEU CODE HON CRUSH-----//
