#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[100],a[102][100];
	gets(s);
	int pos=0,k=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			a[pos][k]=s[i];
			k++;
		}
		else
		{
			a[pos][k]=0;
			pos++;
			k=0;
		}
	}
	a[pos][k]=0;
	for(int i=0;i<=pos;i++)
	{
		if(a[i][0]!=0) 
		{
			for(int j=0;j<strlen(a[i]);j++)
			{
				if(a[i][j]>='A'&&a[i][j]<='Z') a[i][j]+=32;
			}
			if(a[i][0]>='a'&&a[i][0]<='z') a[i][0]-=32;
		}
	}
	int pos1,pos2;
	for(int i=pos;i>=1;i--)
	{
		if(a[i][0]!=0)
		{
			pos2=i;
			break;
		}
	}
	for(int i=0;i<=pos;i++)
	{
		if(a[i][0]!=0)
		{
			pos1=i;
			break;
		}
	}
	for(int i=pos1+1;i<=pos2-1;i++)
	{
		if(a[i][0]!=0) printf("%s ",a[i]);
	}
	printf("%s",a[pos2]);
	printf(",");
	for(int i=0;i<strlen(a[pos1]);i++)
	{
		if(a[pos1][i]>='a'&&a[pos1][i]<='z') a[pos1][i]-=32;
	}
	printf(" %s",a[pos1]);
	printf("\n");
}
int main()
{
  int n;
  scanf("%d\n",&n);
  while(n--) xuly();
  return 0;
}

