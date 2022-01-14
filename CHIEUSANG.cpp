#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  int n,m,k;
  scanf("%d%d%d",&n,&m,&k);
  int a,d[n+5];
  for(int i=0;i<=n;i++) d[i]=0;
  d[0]=1;d[n+1]=1;
  int ans=0;
  for(int i=1;i<=m;i++)
  {
  	int x;
  	scanf("%d",&a);
  	if(a-k<=1) x=1;
  	else x=a-k;
  	int y;
  	if(a+k>n) y=n;
  	else y=a+k;
  	for(int j=x;j<=y;j++) d[j]=1;
  }
  for(int i=1;i<=n;i++)
  {
  	int dem=0;
  	while(d[i]==0)
  	{
  	  dem++;i++;	
	}
	int p=dem/(2*k+1);
	int r=dem%(2*k+1);
	if(r==0) ans+=p;
	else ans+=p+1;
	if(dem!=0) i--;
  }
  printf("%d",ans);
  return 0;
}

