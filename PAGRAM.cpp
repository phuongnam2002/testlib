#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	string S;
	cin>>S;
	int dd[125];
	for (int i=0; i<=123; i++)
	{
		dd[i]=0;
	}
	for (int i=0; i<n; i++)
	{
		int so=S[i];
		if (so>=97 && so<=122) so-=32;
		dd[so]++;
	}
	int kt=1;
	for (int i=65; i<=90; i++)
	{
		if (dd[i]==0)
		{
			kt=0;
			break;
		}
	}
	if (kt==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
