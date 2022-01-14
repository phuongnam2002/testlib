#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct hs
{
	int ms;
	char ten[200],sinh[200];
	double d1,d2,d3,sum;
};
struct hs s[200];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	scanf("\n");
    	gets(s[i].ten);
    	scanf("\n");
    	gets(s[i].sinh);
    	scanf("%lf%lf%lf",&s[i].d1,&s[i].d2,&s[i].d3);
    	s[i].ms=i;
    	s[i].sum=s[i].d1+s[i].d2+s[i].d3;
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(s[i].sum<s[j].sum)
			{
				struct hs t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d %s %s %.1lf\n",s[i].ms,s[i].ten,s[i].sinh,s[i].sum);
	}
}

