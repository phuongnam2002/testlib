#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int a[105][105]={};
ll ckn(ll n,ll k)
{
	int res=1;
	for(int i=1;i<=k;i++,n--) res=res*n/i;
	return res;
}
int main()
{
  ll n;
  scanf("%lld\n",&n);
  char s[105][105];
  for(int i=1;i<=n;i++) scanf("%s",&s[i]);
  for(int i=1;i<=n;i++)
  {
  	for(int j=0;j<strlen(s[i]);j++)
  	{
  	   if(s[i][j]=='C') a[i][j+1]=1;
	   else a[i][j+1]=0;	
	}
  }
  int dem=0;
  for(int i=1;i<=n;i++)
  {
  	int dem1=0;
  	for(int j=1;j<=n;j++)
  	{
  		if(a[i][j]==1) dem1++;
	}
	dem+=ckn(dem1,2);
  }
  for(int j=1;j<=n;j++)
  {
  	int dem1=0;
  	for(int i=1;i<=n;i++)
  	{
  		if(a[i][j]==1) dem1++;
	}
	dem+=ckn(dem1,2);
  }
  printf("%d",dem);
  return 0;
}

