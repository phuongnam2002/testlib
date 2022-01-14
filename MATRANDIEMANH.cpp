#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const int N=1e6+3;
int a[1005][1005],cot[1005][2],hang[1005][2];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  	int n,m;
  	scanf("%d%d\n",&n,&m);
  	for(int i=1;i<=m;i++) {cot[i][0]=0;cot[i][1]=0;}
  	for(int i=1;i<=n;i++) {hang[i][0]=0;hang[i][1]=0;}
  	char c;
  	for(int i=1;i<=n;i++)
  	{
  	   for(int j=1;j<=m;j++)
		 {
			   scanf("%c",&c);
			   a[i][j]=c-'0';
			   if(a[i][j]==1)
			   {
			   	 hang[i][0]++;
			   	 cot[j][0]++;
			   } 
			   else if(a[i][j]==2)
			   {
			   	 hang[i][1]++;
			   	 cot[j][1]++;
			   }	
		 }	
	  scanf("%c",&c);
	}
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==1) dem+=(hang[i][1]*cot[j][1]);
			else if(a[i][j]==2) dem+=(hang[i][0]*cot[j][0]);
		}
	}
	printf("%d\n",dem+1);
  }
  return 0;
}

