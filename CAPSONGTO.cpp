#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int ngto(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
void xuly()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		int x=n-i;
		if(ngto(i)&&ngto(x)) printf("%d %d ",i,x);
	}
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

