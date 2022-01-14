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
string add(string a,string b)
{
   while(a.size()<b.size()) a='0'+a;
   while(b.size()<a.size()) b='0'+b;
   int nho=0;
   string kq="";
   for(int i=b.size()-1;i>=0;i--)
   {
      nho=nho+(a[i]-'0')+(b[i]-'0');
      char k=nho%10+'0';
      kq=k+kq;
      nho/=10;
   }
   if(nho>0) kq='1'+kq;
   return kq;
}//tao ra 2 sum dau tien r sau do de quy dan dan
bool kt(string s,int l,int r,int t)
{
    string s1=s.substr(l,r);
    string s2=s.substr(l+r,t);
    string s3=add(s1,s2);
    int sz=s3.size();
    if(s3.size()>s.size()-l-r-t) return 0;
    if(s3==s.substr(l+r+t,sz))
    {
        if(l+r+t+sz==s.size()) return 1;
        return kt(s,l+r,t,sz);
    }
    return 0;
}
bool check(string s)
{
    f1(i,s.size()-1)
    {
        for(int j=1;i+j<=s.size()-1;j++)
        {
            if(kt(s,0,i,j)) return 1;
        }
    }
    return 0;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      if(check(s)) cout<<"Yes"<<'\n';
      else cout<<"No"<<'\n';
  }
  return 0;
}
//-----YEU CODE HON CRUSH-----//
