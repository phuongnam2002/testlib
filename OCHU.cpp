#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
	string A, B;
	cin>>A>>B;
	int R=B.length();
	int C=A.length();
	int vth=0, vtc=0;
	int kt=0;
	for (int i=0; i<C; i++)
	{
		for (int j=0; j<R; j++)
		{
			if (A[i]==B[j])
			{
				vtc=i;
				vth=j;
				kt=1;
				break;
			}
		}
		if (kt==1) break;
	}
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
		{
			if (i==vth) cout<<A[j];
			else if (j==vtc) cout<<B[i];
			else cout<<".";
		}
		cout<<endl;
	}
	return 0;
}
