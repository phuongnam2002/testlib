#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[1005];
	scanf("%s",&s);
	int a[1005],m=0;
	for(int i=0;i<strlen(s);i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='C') a[++m]=2;
		if(s[i]>='D'&&s[i]<='F') a[++m]=3;
		if(s[i]>='G'&&s[i]<='I') a[++m]=4;
		if(s[i]>='J'&&s[i]<='L') a[++m]=5;
		if(s[i]>='M'&&s[i]<='O') a[++m]=6;
		if(s[i]>='P'&&s[i]<='S') a[++m]=7;
		if(s[i]>='T'&&s[i]<='V') a[++m]=8;
		if(s[i]>='W'&&s[i]<='Z') a[++m]=9;
	}
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=a[m-i+1])
		{
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

