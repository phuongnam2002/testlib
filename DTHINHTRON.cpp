#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  double r,h,s;
  scanf("%lf",&r);
  double pi=3.14159;
  if(r<=0)
  {
  	printf("ERROR");
  	return 0;
  }
  h=2*pi*r;
  s=pi*r*r;
  printf("%.5lf\n",h);
  printf("%.5lf",s);
  return 0;
}

