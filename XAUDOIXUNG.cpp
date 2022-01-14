#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  char s[100005];
  gets(s);
  ll len=strlen(s);
  printf("%lld",len-1);
  return 0;
}

