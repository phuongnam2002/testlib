#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int a[15][15]={};
void change(int i,int j)
{
	for(int row=i;row;row--)
	{
		for(int col=j;col;col--)
		{
			a[row][col]^=1;
		}
	}
}
int main()
{
	int n;
	scanf("%d\n",&n);
	char c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%c",&c);
			a[i][j]=c-'0';
		}
		scanf("%c",&c);
	}
	int ans=0;
	for(int i=n;i;i--)
	{
		for(int j=n;j;j--)
		{
			if(!a[i][j]) continue;
			ans++;
			change(i,j);
		}
	}
	printf("%d",ans);
}
