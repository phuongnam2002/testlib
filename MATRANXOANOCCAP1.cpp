#include<stdio.h>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int a[1005][1005];
int main()
{
  int n;
  scanf("%d",&n);
  int gt=1,hang=n-1,cot=n-1,d=0;
  while(d<=n/2)
  {
      for(int i=d;i<=cot;i++) a[d][i]=gt++;
      for(int i=d+1;i<=hang;i++) a[i][cot]=gt++;
      for(int i=cot-1;i>=d;i--) a[hang][i]=gt++;
      for(int i=hang-1;i>d;i--) a[i][d]=gt++;
      d++;
      hang--;
      cot--;
  }
  f0(i,n)
  {
      f0(j,n) printf("%d ",a[i][j]);
      printf("\n");
  }
  return 0;
}
