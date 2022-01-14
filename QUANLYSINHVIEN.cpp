#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct hs
{
   int ma;
   char s[200];
   float a,b,c;	
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
   	  	   a[i].ma=i+1;
		   gets(a[i].s);
		   scanf("%f%f%f\n",&a[i].a,&a[i].b,&a[i].c);
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
	  	strcpy(a[t-1].s,f);
	  	float a1,b1,c1;
	  	scanf("%f%f%f\n",&a1,&b1,&c1);
	  	a[t-1].a=a1;
	  	a[t-1].b=b1;
	  	a[t-1].c=c1;
	  	printf("%d\n",t);
	  }
	  else
	  {
	  	 for(int j=i-1;j>=0;j--)
	  	 {
	  	 	printf("%d %s %.1f %.1f %.1f\n",a[j].ma,a[j].s,a[j].a,a[j].b,a[j].c);
		 }
		 break;
	  }
   }
}

