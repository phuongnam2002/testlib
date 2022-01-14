#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  int t;
  scanf("%d\n",&t);
  while(t--)
  {
  	  char s[250];
	  gets(s);
	  int dem=0;
	  for(int i=0;i<strlen(s)-1;i++)
	  {
	  	if(s[i]==' '&&s[i+1]!=' ') dem++;
	  }
	  if(s[0]!=' ') dem++;
	  printf("%d\n",dem);
  }
  return 0;
}
