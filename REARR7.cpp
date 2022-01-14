#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
void xuly()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    f0(i,n)
    {
    	scanf("%d",&a[i]);
    	b[i]=a[i];
	}
	a[0]*=b[1];
	a[n-1]*=b[n-2];
	for(int i=1;i<=n-2;i++)
	{
		a[i]=b[i-1]*b[i+1];
	}
	f0(i,n) printf("%d ",a[i]);
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

