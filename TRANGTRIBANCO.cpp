#include <iostream>
using namespace std;
 
int main ()
{
	int R, C;
	int A, B;
	cin>>R>>C;
	cin>>A>>B;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=A; j++)
		{
			for (int k=1; k<=C; k++)
			{
				char X;
				if ((i+k)%2==0) X='X';
				else X='.';
				for (int l=1; l<=B; l++)
				{
					cout<<X;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
