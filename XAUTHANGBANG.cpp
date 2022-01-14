#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[100005];
	scanf("%s",&s);
	int a[100005],m=0,n=0,b[100005];
	for(int i=1;i<strlen(s);i++)
	{
		a[++m]=abs((s[i]-'0')-(s[i-1]-'0'));
	}
	for(int i=strlen(s)-1;i>=1;i--)
	{
		b[++n]=abs((s[i]-'0')-(s[i-1]-'0'));
	}
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=b[i])
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

