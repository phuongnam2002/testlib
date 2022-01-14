#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  	int x;
  	scanf("%d\n",&x);
  	char a[100],b[100][100];
  	gets(a);
  	int n=strlen(a),p1=0,p2=0,p;
  	f0(i,n)
  	{
  		if(a[i]==' ')
  		{
  			b[p1][p2]=0;
  			p1++;p2=0;
		}
		else
		{
			if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
			b[p1][p2]=a[i];
			p2++;
		}
	}
	b[p1][p2]=0;
	p1++;
	if(x==1)
	{
		for(int i=p1-1;i>=0;i--)
		{
			if(b[i][0]!=0)
			{
				b[i][0]-=32;
				printf("%s ",b[i]);
				p=i;
				break;
			}
		}
		for(int i=0;i<p;i++)
		{
			if(b[i][0]!=0)
			{
				b[i][0]-=32;
				printf("%s ",b[i]);
			}
		}
	}
	else
	{
		char xx[100];
		f0(i,p1)
		{
			if(b[i][0]!=0)
			{
				b[i][0]-=32;
				strcpy(xx,b[i]);
				p=i;
				break;
			}
		}
		for(int i=p+1;i<p1;i++)
		{
			if(b[i][0]!=0)
			{
				b[i][0]-=32;
				printf("%s ",b[i]);
			}
		}
		printf("%s",xx);
	}
	printf("\n");
  }
}

