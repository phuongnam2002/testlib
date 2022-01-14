#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define pi 3.141592653589793238
typedef long long ll;
const int N=1e6+3;
void xuly()
{
    double a1,a2,b1,b2,c1,c2;
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
    double a=sqrt(pow(a1-b1,2)+pow(a2-b2,2));
    double b=sqrt(pow(a1-c1,2)+pow(a2-c2,2));
    double c=sqrt(pow(b1-c1,2)+pow(b2-c2,2));
    if(a>=b+c||b>=a+c||c>=a+b)
    {
        printf("INVALID");
        printf("\n");
        return;
    }
    double p=(a+b+c)/2;
    double s=sqrt(p*(p-a)*(p-c)*(p-b));
    double r=(a*b*c)/(4*s);
    double ans=pi*r*r;
    printf("%.3lf\n",ans);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}
