#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int n;
char s1[400],s2[400],s[400];
int tinh()
{
	char res[400];
	int i,step;
	for(step=1;step<=2*n;step++)
	{
		int d=0;
		f(i,0,n-1)
		{
			res[d++]=s2[i];
			res[d++]=s1[i];
		}
		res[d]='\0';
		if(strcmp(s,res)==0) return step;
		f(i,0,n-1) 
		{
			s1[i]=res[i];
			s2[i]=res[i+n];
		}
	}
	return -1;
}
int main()
{
  while(1)
  {
  	scanf("%d",&n);
  	if(n==0) break;
  	scanf("%s%s%s",&s1,&s2,&s);
  	printf("%d\n",tinh());
  }
  return 0;
}
