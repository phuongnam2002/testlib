#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[1000];
	scanf("%s",&s);
	if(s[strlen(s)-1]=='6'&&s[strlen(s)-2]=='8') printf("YES\n");
	else printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

