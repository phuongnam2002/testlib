#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
	string xau;
	cin>>xau;
	// Khoi tao demo trang tri;
	char demo[6][6];
	for (int i=1; i<=3; i++)
	{
		for (int j=1; j<=3; j++)
		{
			if (i==3 && j==3) demo[i][j]='X';
			else
			{
				if (j!=3-i+1) demo[i][j]='.';
				else demo[i][j]='?';
				demo[5-i+1][j]=demo[i][j];
				demo[i][5-j+1]=demo[i][j];
				demo[5-i+1][5-j+1]=demo[i][j];
			}
		}
	}
	// Tao tranh.
	char picture[102][102];
	int begin=1;
	for (int k=0; k<xau.size(); k++)
	{
		if (k!=0) begin+=5;
		for (int i=1; i<=5; i++)
		{
			int j_run=begin;
			for (int j=1; j<=5; j++)
			{
				char tmp=demo[i][j];
				if (tmp=='X') tmp=xau[k];
				else if (tmp=='?' && (k+1)%3==0) tmp='*';
				else if (tmp=='?') tmp='#';
				picture[i][j_run]=tmp;
				j_run++;
			}
		}
	}
	//IN Tranh
	for (int i=1; i<=5; i++)
	{
		for (int j=1; j<=5*xau.size(); j++)
		{
			if ((j%5==0 && j!=5*xau.size() && j%15!=0) || (j%15==1 && j!=1))
			{}
			else cout<<picture[i][j];
		}
		cout<<endl;
	}
	return 0;
}
