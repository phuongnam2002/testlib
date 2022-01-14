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
struct SinhVien
{
    string ma,ten,ns,lop;
    float gpa;
};
bool ss(SinhVien a,SinhVien b) {return a.gpa>b.gpa;}
void nhap(struct SinhVien a[],int n)
{
   f0(i,n)
   {
      cin.ignore();
      getline(cin,a[i].ten);
      cin>>a[i].lop>>a[i].ns>>a[i].gpa;
      if(a[i].ns[1]=='/') a[i].ns='0'+a[i].ns;
      if(a[i].ns[4]=='/') a[i].ns.insert(a[i].ns.begin()+3,'0');
      if(i<9) a[i].ma="B20DCCN00";
      else a[i].ma="B20DCCN0";
      a[i].ma=a[i].ma+to_string(i+1);
   }
}
void sapxep(struct SinhVien a[],int n)
{
    sort(a,a+n,ss);
}
void chuanhoa(string a)
{
    vector<string>b;
    string t="";
    transform(a.begin(),a.end(),a.begin(),::tolower);
    f0(i,a.size())
    {
        if(a[i]==' ') {b.pb(t);t="";}
        else t=t+a[i];
    }
    b.pb(t);
    f0(i,b.size())
    {
        if(b[i]!="")
        {
            b[i][0]-=32;
            cout<<b[i]<<' ';
        }
    }
}
void in(struct SinhVien a[],int n)
{
    f0(i,n)
    {
        cout<<a[i].ma<<' ';
        chuanhoa(a[i].ten);
        cout<<a[i].lop<<' '<<a[i].ns<<' ';
        cout<<fixed<<setprecision(2)<<a[i].gpa<<'\n';
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  struct SinhVien ds[50];
  int N;
  cin>>N;
  nhap(ds,N);
  sapxep(ds,N);
  in(ds,N);
  return 0;
}
//-----YEU CODE HON CRUSH-----//
