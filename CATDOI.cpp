#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	char s[100];
	scanf("%s",&s);
	int kt=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='0') s[i]='0';
		else if(s[i]=='1') {s[i]='1';kt=1;}
		else if(s[i]=='8') s[i]='0';
		else if(s[i]=='9') s[i]='0';
		else
		{
			printf("INVALID\n");
			return;
		} 
	}
	if(kt==0) printf("INVALID\n");
	else 
	{
		int i=0;
		while(s[i]=='0') i++;
		for(int j=i;j<strlen(s);j++) printf("%c",s[j]);
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

