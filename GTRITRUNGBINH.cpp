#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  double s;
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  	s+=a[i];
  }
  printf("%.3lf",s/(double)n);
  return 0;
}

