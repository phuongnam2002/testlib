#include<stdio.h>
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
   ll n;
   scanf("%lld",&n);
   ll am=0,duong=0,amax=-1e18,s=0,sd=0,a;
   f1(i,n)
   {
       scanf("%lld",&a);
       s+=a;
       if(s<0) s=0;
       sd=(s>sd)?s:sd;
       if(a<0)
       {
           am=1;
           amax=(a>amax)?a:amax;
       }
       else duong=1;
   }
   if(duong==0) printf("%lld\n",amax);
   else printf("%lld\n",sd);
}
int main()
{
  int t;
  scanf("%d",&t);

  while(t--) xuly();
  return 0;
}
