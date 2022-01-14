#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[105];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i+=2)
	{
		char c=s[i];
		int k=(int)s[i+1]-48;
		for(int j=0;j<k;j++) printf("%c",c);
	}
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

