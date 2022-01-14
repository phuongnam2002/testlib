#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
void qso(int a[],int l,int r)
{
	int m=a[(l+r)/2],i=l,j=r;
	while(i<=j)
	{
		while(a[i]<m) i++;
		while(a[j]>m) j--;
		if(i<=j)
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;j--;
		}
	}
	if(i<r) qso(a,i,r);
	if(l<j) qso(a,l,j);
}
void xuly()
{
   int n;
   scanf("%d",&n);
   int a[n],b[n],m=0;
   f0(i,n) scanf("%d",&a[i]);
   qso(a,0,n-1);
   for(int i=0;i<n;i+=2) b[i]=a[m++];
   for(int i=1;i<n;i+=2) b[i]=a[m++];
   f0(i,n) printf("%d ",b[i]);
   printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

