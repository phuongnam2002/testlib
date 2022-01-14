#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct data
{
	char a;
	int vt;
}typedef data;
 
int cmp (data a, data b)
{
	if (a.a<b.a) return 0;
	else if (a.a==b.a)
	{
		if (a.vt>b.vt) return 0;
	}
	return 1;
}
 
int main ()
{
	string xau;
	cin>>xau;
	vector <data> v;
	for (int i=0; i<xau.length(); i++)
	{
		data tg;
		tg.a=xau[i];
		tg.vt=i;
		v.push_back(tg);
	}
	sort (v.begin(), v.end(), cmp);
 
	int vtm=-1;
	for (int i=0; i<v.size(); i++)
	{
		if (v[i].vt>vtm) 
		{
			cout<<v[i].a;
			vtm=v[i].vt;
		}
	}
	return 0;
}
