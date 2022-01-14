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
int main()
{
  int n;
  scanf("%d",&n);
  f1(i,n)
  {
      for(int j=1;j<=i;j++) printf("0 ");
      int x=1;
      for(int j=i+1;j<=n;j++)
      {
          printf("%d ",x);
          x++;
      }
      printf("\n");
  }
  return 0;
}
