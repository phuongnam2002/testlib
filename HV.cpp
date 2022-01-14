#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(c-a==d-b) printf("YES\n");
  else printf("NO\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) xuly();
	return 0;
}
