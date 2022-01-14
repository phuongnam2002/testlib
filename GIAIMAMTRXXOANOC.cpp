#include <iostream>
#include <vector>
using namespace std;
 
struct data
{
	string Bit;
	char KH;
};
 
struct vector <data> MH;
 
int n=5;
char arr[8];
int BD=65;
int sinh (int u)
{
	if (u==n+1)
	{
		if (BD>90) return 0;
		struct data tg;
		string a="";
		int kt=0;
		for (int i=1; i<=n; i++)
		{
			a=a+arr[i];
			if (arr[i]=='1')
			{
				kt=1;
			}
		}
		tg.Bit=a;
		if (kt==0)
		{
			tg.KH=' ';
			MH.push_back (tg);
		}
		else
		{
			tg.KH=BD-0;
			MH.push_back (tg);
			BD++;
		}
	}
	else
	{
		for (int i=1; i<=2; i++)
		{
			if (i==1)
			{
				arr[u]='0';
				sinh (u+1);
			}
			else
			{
				arr[u]='1';
				sinh (u+1);
			}
		}
	}
}
 
int main ()
{
	sinh (1);	//Sinh Ma Hoa: BIT va Ki hieu;
 
	int t;
	cin>>t;
	for (int k=1; k<=t; k++)
	{
		int r, c;
		cin>>r>>c;
		char Matrix[25][25];
		for (int i=1; i<=r; i++)
		{
			for (int j=1; j<=c; j++)
			{
				cin>>Matrix[i][j];
			}
		}
		//Doc dang xoay oc
		int dem=0;
		int hd=1, hc=r;
		int cd=1, cc=c;
		int ic=hd, jc=cd;
		string B="";
		while (1)
		{
			if (dem==r*c) break;
			ic=hd;
			for (int j=cd; j<=cc; j++)
			{
				B+=Matrix[ic][j];
				dem++;
			}
			if (dem==r*c) break;
			hd++;
			jc=cc;
			for (int i=hd; i<=hc; i++)
			{
				B+=Matrix[i][jc];
				dem++;
			}
			if (dem==r*c) break;
			cc--;
			ic=hc;
			for (int j=cc; j>=cd; j--)
			{
				B+=Matrix[ic][j];
				dem++;
			}
			if (dem==r*c) break;
			hc--;
			jc=cd;
			for (int i=hc; i>=hd; i--)
			{
				B+=Matrix[i][jc];
				dem++;
			}
			cd++;
		}
		cout<<k<<" ";
		for (int i=0; i<B.length(); i=i+5)
		{
			string TG="";
			for (int j=i; j<i+5; j++) TG+=B[j];
			for (int j=0; j<MH.size(); j++)
			{
				if (TG==MH[j].Bit)
				{
					cout<<MH[j].KH;
				}
			}
		}
		cout<<endl;
	}
}
