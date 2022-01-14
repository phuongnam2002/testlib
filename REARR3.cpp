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
int n,k,x,a[N];
bool c[N];
void sang()
{
    memset(c,true,sizeof(c));
    c[0]=c[1]=false;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(c[i])
        {
           for(int j=i*i;j<=N;j+=i) c[j]=false;
        }
    }
}
int main()
{
   //freopen("baiD.INP","r",stdin);
   //freopen("baiD.OUT","w",stdout);
   sang();
   cin>>n>>k;
   int dem1=0,dem2=0,ans;
   f0(i,n)
   {
       cin>>a[i];
       if(a[i]<=k&&c[a[i]]&&a[i]>=2) dem1++;
   }
   f0(i,dem1) if(a[i]>k||!c[a[i]]||a[i]<0) dem2++;
   ans=dem2;
   for(int i=0,j=dem1;j<n;i++,j++)
   {
   	  if(a[i]>k||!c[a[i]]||a[i]<0) dem2--;
   	  if(a[j]>k||!c[a[j]]||a[j]<0) dem2++;
   	  ans=min(ans,dem2);
   }
   cout<<ans;
}


