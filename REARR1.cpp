#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
int f[N];
void xuly()
{
	int n;
	cin>>n;
	memset(f,0,sizeof(f));
	f1(i,n)
	{
		ll x;
		cin>>x;
		if(x>=0&&x<=10000000) f[x]=1;
	}
	f0(i,n)
	{
		if(f[i]) cout<<i<<" ";
		else cout<<-1<<" ";
	}
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

