#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  char s[200];
  scanf("%s",&s);
  int a[200],m=0,f[200];
  for(int i=0;i<strlen(s);i++)
  {
  	 int k=s[i]-'0';
  	 a[++m]=k;
  }
  for(int i=1;i<=m;i++)
  {
  	f[i]=1;
  	for(int j=1;j<i;j++)
  	{
  	   if(a[i]>a[j])
		 {
		    if(f[i]<f[j]+1) f[i]=f[j]+1;	 
		 }	
	}
  }
  int maz=0;
  f(i,1,m) if(f[i]>maz) maz=f[i];
  printf("%d",26-maz);
  return 0;
}

