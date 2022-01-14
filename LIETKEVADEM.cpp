#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct so
{
    char s[50];
	int sl;	
};
struct so a[100000];
int kt(char s[])
{
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]<s[i-1]) return 0;
	}
	return 1;
}
int main()
{
  int k=0;
  char b[50];
  while(scanf("%s",&b)!=-1)
  {
  	if(kt(b)==1)
  	{
  	   	int kt=0;
  	   	for(int i=0;i<k;i++)
  	   	{
  	   	   if(strcmp(b,a[i].s)==0)
			{
					kt=1;
					a[i].sl++;
			}	
		}
		if(kt==0)
		{
			strcpy(a[k].s,b);
			a[k].sl=1;
			k++;
		}
	}
  }
  for(int i=0;i<k-1;i++)
  {
  	for(int j=i+1;j<k;j++)
  	{
  	   if(a[i].sl<a[j].sl)
		 {
		 	struct so t=a[i];
		 	a[i]=a[j];
		 	a[j]=t;
		 }	
	}
  }
  for(int i=0;i<k;i++) printf("%s %d\n",a[i].s,a[i].sl);
  return 0;
}

