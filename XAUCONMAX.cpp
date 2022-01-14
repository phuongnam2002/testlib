#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  char s[100005];
  scanf("%s",&s);
  int pos=-1;
  char c;
  while(1)
  {
  	  c='a';
  	  if(pos+1>strlen(s)-1) break;
  	  for(int i=pos+1;i<strlen(s);i++)
  	  {
  	     if(s[i]>c) c=s[i];	
	  }
	  for(int i=pos+1;i<strlen(s);i++)
	  {
	  	if(s[i]==c)
	  	{
	  	   printf("%c",c);
		   pos=i;	
		}
	  }
  }
}

