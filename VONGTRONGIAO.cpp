#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
	int a[127]={0},b[127]={0},check[127]={0};
	char s[100];
	scanf("%s",&s);
	int i,j;
	for (i=0;i<strlen(s);i++)
	{
		if(check[s[i]]==0) 
		{
			a[s[i]]=i;
			check[s[i]]=1;
		}
		else b[s[i]]=i;
	}
	int count=0;
	for (i=65;i<=90;i++)
	{
		for(j=65;j<=90;j++)
			if(a[i]<a[j]&&a[j]<b[i]&&b[j]>b[i]) count++;
	}
	printf("%d",count);
	return 0;
}  
