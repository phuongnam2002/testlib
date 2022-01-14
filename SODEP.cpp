#include<stdio.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[100];
	scanf("%s",&s);
	int a1=s[0]-'0',a2=s[strlen(s)-1]-'0';
	if(a1==a2*2||a1*2==a2)
	{
		int n=strlen(s)-2;
		for(int i=1;i<=n;i++)
		{
			if(s[i]!=s[n-i+1])
			{
				printf("NO\n");
				return;
			}
		}
		printf("YES\n");
	}
	else printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

