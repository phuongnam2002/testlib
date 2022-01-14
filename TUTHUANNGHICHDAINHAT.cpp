#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct data
{
   char s[50];
   int sl;	
};
int tn(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=s[strlen(s)-i-1]) return 0;
	}
	return 1;
}
struct data a[1000];
int main()
{
  char b[50];
  int k=0,ma=0;
  while(scanf("%s",&b)!=-1) 
  {
  	 if(tn(b)==1) 
  	 {
  	 	  if(strlen(b)>ma)
  	 	  {
  	 	  	 ma=strlen(b);
  	 	  	 k=0;
		  }
  	 	  else if(strlen(b)<ma) continue;
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
  for(int i=0;i<k;i++) printf("%s %d\n",a[i].s,a[i].sl);
}

