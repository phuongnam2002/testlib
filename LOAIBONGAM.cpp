#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  char s[105];
  scanf("%s",&s);
  for(int i=0;i<strlen(s);i++)
  {
  	if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
  }
  for(int i=0;i<strlen(s);i++)
  {
  	if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
  	{
  	  printf(".%c",s[i]);	
	}
  }
  return 0;
}

