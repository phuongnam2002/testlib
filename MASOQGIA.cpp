#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[100];
	scanf("%s",&s);
	int pos=-5;
	for(int i=0;i<=strlen(s)-3;i++)
	{
		 if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4')
		 {
		 	pos=i;
		 }
	}
	if(pos==-5) printf("%s\n",s);
	else
	{
		for(int i=0;i<pos;i++) printf("%c",s[i]);
		for(int i=pos+3;i<strlen(s);i++) printf("%c",s[i]);
		printf("\n");
	}
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

