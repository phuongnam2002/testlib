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
  int demt=0,demh=0;
  for(int i=0;i<strlen(s);i++)
  {
  	if(s[i]>='A'&&s[i]<='Z') demh++;
  	else if(s[i]>='a'&&s[i]<='z') demt++;
  }
  if(demh>demt)
  {
  	for(int i=0;i<strlen(s);i++)
  	{
  		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	printf("%s",s);
  }
  else
  {
  	for(int i=0;i<strlen(s);i++)
  	{
  		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	printf("%s",s);
  }
  return 0;
}

