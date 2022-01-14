#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  ll n;
  scanf("%lld",&n);
  ll dem2=0,dem3=0,dem5=0,dem7=0;
  while(n!=0)
  {
  	 int res=n%10;
  	 if(res==2) dem2++;
  	 else if(res==3) dem3++;
  	 else if(res==7) dem7++;
  	 else if(res==5) dem5++;
  	 n/=10;
  }
  if(dem2>0) printf("2 %d\n",dem2);
  if(dem3>0) printf("3 %d\n",dem3);
  if(dem5>0) printf("5 %d\n",dem5);
  if(dem7>0) printf("7 %d",dem7);
  return 0;
}

