#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	int n,s=0,m=0;
	scanf("%d",&n);
	int a[n+5],pos=-5;
	for(int i=1;i<=n;i++) {scanf("%d",&a[i]);s+=a[i];}
	for(int i=1;i<=n;i++)
	{
		s-=a[i];
		if(m==s) {printf("%d\n",i);return;}
		m+=a[i];
	}
	printf("-1\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

