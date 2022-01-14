#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct hs
{
   int ms;
   char s[200];
   float a,b,c;	
   int kt;
};
struct hs a[1000];
int main()
{
  int i=0;
  while(1)
  {
  	 int n;
  	 scanf("%d",&n);
  	 if(n==1)
  	 {
  	    int t;
		scanf("%d\n",&t);
		while(t--)
		{
		   a[i].ms=i+1;
		   gets(a[i].s);
		   scanf("%f%f%f\n",&a[i].a,&a[i].b,&a[i].c);
		   if(a[i].a<a[i].b&&a[i].b<a[i].c) a[i].kt=1;
		   else a[i].kt=0;
		   i++;
		}
		printf("%d\n",i);
     } 
	 else if(n==2)
	 {
		int t;
		scanf("%d\n",&t);
		char f[1000];
		gets(f);
		float a1,b1,c1;
		scanf("%f%f%f\n",&a1,&b1,&c1);
		strcpy(a[t-1].s,f);
	    a[t-1].a=a1;
	    a[t-1].b=b1;
	    a[t-1].c=c1;
	    if(a1<b1&&b1<c1) a[t-1].kt=1;
	    else a[t-1].kt=0;
	    printf("%d\n",t);
	 }
	 else
	 {
		for(int j=0;j<i;j++)
		{
			if(a[j].kt==1)
			{
				printf("%d %s %.1f %.1f %.1f\n",a[j].ms,a[j].s,a[j].a,a[j].b,a[j].c);
			}
		}
		break;
	 }
  }
  return 0;
}

