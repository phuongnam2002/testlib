#include<stdio.h>
#include<math.h>
#define f1(i,n) for(int i=1;i<=n;i++)
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max=0;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			int x=0,y=0,k=0;
			while(k<=i&&k<=j&&i+k<n&&j+k<n)
			{
				x+=a[i-k][j-k]+a[i+k][j+k];
				y+=a[i-k][j+k]+a[i+k][j-k];
				if(x-y>max) max=x-y;
				k++;
			}
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			int x=0,y=0,k=0;
			while(k<=i&&k<=j&&i+k+1<n&&j+k+1<n)
			{
				x+=a[i-k][j-k]+a[i+k+1][j+k+1];
				y+=a[i-k][j+k+1]+a[i+k+1][j-k];
				if(x-y>max) max=x-y;
				k++;
			}
		}
	}
	printf("%d",max);
}
