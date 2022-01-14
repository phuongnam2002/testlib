#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
void xuly()
{
   int n;
   scanf("%d",&n);
   int a[n];
   f0(i,n) scanf("%d",&a[i]);
   for(int i=0;i<n-1;i++)
   {
   	  if(a[i]==a[i+1])
   	  {
   	  	a[i]*=2;
   	  	a[i+1]=0;
	  }
   }
   int dem=0;
   f0(i,n) 
   {
   	 if(a[i]!=0) printf("%d ",a[i]);
   	 else dem++;
   }
   f0(i,dem) printf("0 ");
   printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

