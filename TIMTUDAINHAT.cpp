#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct tu
{
   char s[50];
   int sl;	
};
struct tu a[1000];
int main()
{
	int maz=0,k=0;
	char b[50];
	while(scanf("%s",&b)!=-1)
	{
		int kt=0;
		for(int i=0;i<k;i++)
		{
			if(strcmp(b,a[i].s)==0) 
			{
				kt=1;
				a[i].sl++;
			}
		}
		if(kt==0) 
		{
			strcpy(a[k].s,b);
			a[k].sl=1;
			k++;
		}
	}
	for(int i=0;i<k;i++) if(strlen(a[i].s)>maz) maz=strlen(a[i].s);
	for(int i=0;i<k;i++)
	{
		if(strlen(a[i].s)==maz)
		{
			printf("%s %d %d\n",a[i].s,maz,a[i].sl);
		}
	}
}
