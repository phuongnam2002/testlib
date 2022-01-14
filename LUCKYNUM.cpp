#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll num(ll n)
{
    while(n!=0)
    {
        ll r=n%10;
        if(r==1||r==2||r==3||r==4||r==5||r==7||r==8||r==0) return 0;
        n/=10;

    }
    return 1;
}
int main()
{
  ll n,dem=0;
  cin>>n;
  for(int i=6;i<pow(10,n);i++)
  {
      if(num(i)) cout<<i<<" ",dem++;
  }
  cout<<dem;
}
