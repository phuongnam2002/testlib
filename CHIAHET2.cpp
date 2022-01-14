#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	int n;
	scanf("%d",&n);
	if(n%2==1) {printf("0\n");return;}
	int dem=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2==0) dem++;
			if((n/i)%2==0) dem++;
			if((n/i)==i) dem--;
		}
	}
	printf("%d\n",dem);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

