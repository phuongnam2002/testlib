#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	int n;
	scanf("%d",&n);
	int a[105],b[105],m=0,ans=n;
	for(int i=2;i*i<=n;i++)
	{
		int dem=0;
		while(n%i==0)
		{
			dem++;
			n/=i;
		}
		if(dem>0) {a[++m]=i;b[m]=dem;}
	}
	if(n>1) {a[++m]=n;b[m]=1;}
	printf("%d = ",ans);
	for(int i=1;i<=m-1;i++)
	{
		if(b[i]>=1) printf("%d^%d * ",a[i],b[i]);
	}
	printf("%d^%d",a[m],b[m]);
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

