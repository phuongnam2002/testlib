#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int main()
{
  int t1;
  scanf("%d",&t1);
  f(l,1,t1)
  {
  	 int n,m;
  	 scanf("%d%d",&n,&m);
  	 int a[20][20];
  	 f(i,0,n-1)
  	 {
  	    f(j,0,m-1) scanf("%d",&a[i][j]);	
	 }
	 f(i1,0,n-1)
	 {
	 	f(j1,0,m-1)
	 	{
	 		f(i2,i1,n-1)
	 		{
	 			f(j2,j1,m-1)
	 			{
	 				if(a[i1][j1]>a[i2][j2])
	 				{
	 					int t=a[i1][j1];
	 					a[i1][j1]=a[i2][j2];
	 					a[i2][j2]=t;
					 }
				 }
			 }
		 }
	 }
	 printf("Test %d:\n",l);
	 f(i,0,n-1)
	 {
	 	f(j,0,m-1) printf("%d ",a[i][j]);
	 	printf("\n");
	 }
  }
  return 0;
}

