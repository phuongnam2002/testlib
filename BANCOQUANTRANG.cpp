#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	char banco[102][102];
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			cin>>banco[i][j];
		}
	}
 
	int xx[]={1, 0, -1, 0};
	int yy[]={0, -1, 0, 1};
	int kt=1;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			int dem=0;
			for (int k=0; k<4; k++)
			{
				int C=j+xx[k];
				int R=i+yy[k];
				if (R>=1 && R<=n && C<=n && C>=1 && banco[R][C]=='o')
				{
					dem++;
				}
			}
			if (dem%2!=0)
			{
				kt=0;
				break;
			}
		}
		if (kt==0) break;
	}
	if (kt==1) cout<<"YES";
	else cout<<"NO";
}
