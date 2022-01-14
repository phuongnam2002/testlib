#include <iostream>
using namespace std;
 
int main ()
{
	char minP[502][502];
	int R, C, A, B;
	cin>>R>>C>>A>>B;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=C; j++)
		{
			cin>>minP[i][j];
		}
	}
	//BigP;
	for (int i=1; i<=R; i++)
	{
		for (int l=1; l<=A; l++)
		{
			for (int j=1; j<=C; j++)
			{
				for (int k=1; k<=B; k++) cout<<minP[i][j];
			}
			if (l!=A) cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
