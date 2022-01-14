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
struct NhanVien
{
    string ma,ten,gt,ns,dc,mst,nk;
};
void nhap(struct NhanVien &a)
{
    cin.ignore();
    getline(cin,a.ten);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.mst>>a.nk;
}
void inds(struct NhanVien a[],int n)
{
    f0(i,n)
    {
        int k=i+1,s=0;
        while(k)
        {
            s++;
            k/=10;
        }
        if(s==1) cout<<"0000";
        else cout<<"000";
        cout<<i+1<<' '<<a[i].ten<<' '<<a[i].gt<<' ';
        if(a[i].ns[0]=='/') a[i].ns='0'+a[i].ns;
        if(a[i].ns[4]=='/') a[i].ns.insert(a[i].ns.begin()+3,'0');
        if(a[i].nk[0]=='/') a[i].nk='0'+a[i].nk;
        if(a[i].nk[4]=='/') a[i].nk.insert(a[i].nk.begin()+3,'0');
        cout<<a[i].ns<<' '<<a[i].dc<<' '<<a[i].mst<<' '<<a[i].nk<<'\n';
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  struct NhanVien ds[50];
  int N,i;
  cin>>N;
  for(i=0;i<N;i++) nhap(ds[i]);
  inds(ds,N);
  return 0;
}
//-----YEU CODE HON CRUSH-----//
