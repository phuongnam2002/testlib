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
void nhap(struct SinhVien &a)
{
    cin>>a.ma;
    cin.ignore();
    getline(cin,a.ten);
    cin>>a.lop>>a.d1>>a.d2>>a.d3;
}
void sap_xep(struct SinhVien *ds,int n)
{
    f0(i,n)
    {
        f(j,i,n-1)
        {
            if(ds[i].ma>ds[j].ma) swap(ds[i],ds[j]);
        }
    }
}
void in_ds(struct SinhVien *ds,int n)
{
    f0(i,n)
    {
        cout<<i+1<<' '<<ds[i].ma<<' '<<ds[i].ten<<' '<<ds[i].lop<<' ';
        cout<<fixed<<setprecision(1)<<' '<<ds[i].d1<<' '<<ds[i].d2<<' '<<ds[i].d3<<'\n';
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  struct SinhVien *ds=new SinhVien[n];
  for(int i=0;i<n;i++){
     nhap(ds[i]);
  }
  sap_xep(ds,n);
  in_ds(ds,n);
  return 0;
}
//-----YEU CODE HON CRUSH-----//
