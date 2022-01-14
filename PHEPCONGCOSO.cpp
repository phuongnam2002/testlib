#include <iostream>
#include <string>
using namespace std;
 
struct data
{
	string a;
};
 
int main ()
{
	//Khoitao;
	struct data cs[16];
	cs[0].a="{}";
	cs[1].a="{{}}";
	for (int i=2; i<=15; i++)
	{
		cs[i].a='{';
		for (int j=0; j<i; j++)
		{
			cs[i].a+=cs[j].a;
			if (j==i-1) cs[i].a+='}';
			else cs[i].a+=',';	//Dau: , dau: };
		}
	}
	int n;
	cin>>n;
	string a, b;
	int soA, soB;
	for (int i=1; i<=n; i++)
	{
		cin>>a>>b;
		int lenA=a.length();
		int lenB=b.length();
		for (int j=0; j<=15; j++)
		{
			if ((lenA)==cs[j].a.length()) soA=j;
			if ((lenB)==cs[j].a.length()) soB=j;
		}
		cout<<cs[soA+soB].a;
		cout<<endl;
	}
	return 0;
} 
