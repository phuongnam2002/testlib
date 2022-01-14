#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
long long gt(long long n)
{
	if(n==0||n==1) return 1;
	return gt(n-1)*n;
}
int main()
{
  long long n;
  scanf("%lld",&n);
  if(n<=0)
  {
  	printf("Error");
  	return 0;
  }
  double x;
  scanf("%lf",&x);
  double s=0;
  for(int i=0;i<=n;i++)
  {
  	s+=(pow(x,i)/gt(i));
  }
  printf("%.6lf",s);
}

