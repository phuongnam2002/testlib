#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
struct pok
{
   char t[500];
   ll a,b,c;	
};
struct pok s[500];
int main()
{
   ll n,dem=0,maz=0;
   scanf("%lld",&n);
   f(i,1,n)
   {
   	   scanf("\n");
   	   scanf("%s",&s[i].t);
   	   scanf("%d%d",&s[i].a,&s[i].b);
   }
   char d[500];
   f(i,1,n)
   {
   	 while(1)
   	 {
   	 	 if(s[i].a>s[i].b) break;
   	 	 else
   	 	 {
   	 	 	s[i].b=s[i].b-s[i].a+2;
   	 	 	s[i].c++;
   	 	 	dem++;
		 }
	 }
   }
   printf("%lld\n",dem);
   f(i,1,n)
   {
   	  if(s[i].c>maz)
   	  {
   	     maz=s[i].c;
		 strcpy(d,s[i].t);	
	  }
   }
   printf("%s",d);
}

