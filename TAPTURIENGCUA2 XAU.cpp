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
void xuly()
{
   char s1[200],s2[200];
   gets(s1);
   gets(s2);
   cin.ignore();
   char a1[102][100],a2[102][100];
   int pos1=0,pos2=0,k1=0,k2=0,n1=strlen(s1),n2=strlen(s2);
   for(int i=0;i<n1;i++)
   {
       if(s1[i]!=32)
       {
           a1[pos1][k1]=s1[i];
           k1++;
       }
       else
       {
           a1[pos1][k1]=0;
           pos1++;
           k1=0;
       }
   }
   for(int i=0;i<n2;i++)
   {
       if(s2[i]!=32)
       {
           a2[pos2][k2]=s2[i];
           k2++;
       }
       else
       {
           a2[pos2][k2]=0;
           pos2++;
           k2=0;
       }
   }
   a1[pos1][k1]=0;
   a2[pos2][k2]=0;
   for(int i=0;i<=pos1;i++)
   {
       for(int j=0;j<=pos2;j++)
       {
           if(strcmp(a1[i],a2[j])==0) a1[i][0]=0;
       }
   }
   for(int i=0;i<=pos1-1;i++)
   {
       for(int j=i+1;j<=pos1;j++)
       {
           if(strcmp(a1[i],a1[j])>0)
           {
               char t[200];
               strcpy(t,a1[i]);
               strcpy(a1[i],a1[j]);
               strcpy(a1[j],t);
           }
           else if(strcmp(a1[i],a1[j])==0) a1[j][0]=0;//tranh trung nhau
       }
   }
   for(int i=0;i<=pos1;i++)
   {
      if(a1[i][0]!=0) printf("%s ",a1[i]);
   }
   cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) xuly();
}
