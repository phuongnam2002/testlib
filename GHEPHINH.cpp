#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int scp(int n)
{
	int x=sqrt(n);
	if(x*x==n) return x;
	return 0;
}
int main()
{
  int a,b,c,d,e,f,x,y;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  x=a*b+c*d+e*f;
  y=scp(x);
  if(y==0) printf("NO");
  else
  {
  	 if(a>b) {int s=a;a=b;b=s;}
  	 if(c>d) {int s=c;c=d;d=s;}
  	 if(e>f) {int s=e;e=f;f=s;}
  	 if(b==d&&d==f&&f==y) printf("YES");
  	 else
  	 {
  	    if(d==y) 
		{
		  int s=a;a=c;c=s;
		  int h=b;b=d;d=h;
	    }
  	    if(f==y)
  	    {
		  int s=a;a=e;e=s;
		  int h=b;b=f;f=h;
	    }
  	    if(b==y)
  	    {
  	       a=y-a;
		   if((c==a&&e==a)||(d==a&&e==a)||(c==a&&f==a)||(d==a&&f==a)) printf("YES");
		   else printf("NO");	
		}
		else printf("NO");
	 }
  }
  return 0;
}

