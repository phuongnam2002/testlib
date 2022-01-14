#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++) scanf("%d%d",&a[i],&b[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int s=a[i];a[i]=a[j];a[j]=s;
				int h=b[i];b[i]=b[j];b[j]=h;
			}
		}
	}
	//for(int i=0;i<n;i++) printf("%d %d\n",a[i],b[i]);
	ll t=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>t) t=a[i];
		t+=b[i];
	}
	printf("%d",t);
}
int main()
{
  int t=1;
  //scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

