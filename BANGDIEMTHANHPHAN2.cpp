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
struct SinhVien
{
    string ma,ten,lop;
    float d1,d2,d3;
};
bool ss(SinhVien a,SinhVien b) {return a.ten<b.ten;}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  struct SinhVien a[n];
  f0(i,n)
  {
      cin.ignore();
      getline(cin,a[i].ma);
      getline(cin,a[i].ten);
      getline(cin,a[i].lop);
      cin>>a[i].d1>>a[i].d2>>a[i].d3;
  }
  sort(a,a+n,ss);
  f0(i,n)
  {
      cout<<i+1<<' '<<a[i].ma<<' '<<a[i].ten<<' '<<a[i].lop<<' ';
      cout<<fixed<<setprecision(1)<<a[i].d1<<' '<<a[i].d2<<' '<<a[i].d3<<'\n';
  }
}
//-----YEU CODE HON CRUSH-----//
