#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[1000];
	scanf("%s",&s);
	for(int i=0;i<strlen(s)-1;i++)
	{
		if((int)s[i]>(int)s[i+1])
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

