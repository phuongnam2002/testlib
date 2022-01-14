#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  int k;
  char s[100005];
  char P[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
  while(1)
  {
  	scanf("%d",&k);
  	if(k==0) break;
  	scanf("%s",&s);
  	for(int i=0;i<strlen(s);i++)
  	{
  		int pos=0;
  		for(int j=0;j<strlen(P);j++)
  		{
  		  	if(s[i]==P[j]) pos=j;
		}
	    s[i]=P[(pos+k)%28];
    }
	for(int i=strlen(s)-1;i>=0;i--) printf("%c",s[i]);
	printf("\n");
  }
  return 0;
}

