#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	int n,p,x=0;
	scanf("%d%d",&n,&p);
	while(n!=0)
	{
		n/=p;
		x+=n;
	}
	printf("%d\n",x);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

