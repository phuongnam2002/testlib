#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int max(int a,int b)
{
	return(a>b)?a:b;
}
int min(int a,int b)
{
	return(a<b)?a:b;
}
int main()
{
  int x1,y1,x2,y2,x3,y3,x4,y4;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
  int a1=max(max(x1,x2),max(x3,x4));
  int a2=min(min(x1,x2),min(x3,x4));
  int b1=max(max(y1,y2),max(y3,y4));
  int b2=min(min(y1,y2),min(y3,y4));
  int ans1,ans2;
  if(a2>=0&&a1>0||a2<=0&&a1>=0) ans1=a1-a2;
  else ans1=abs(a1)-abs(a2);
  if(b2>=0&&b1>0||b2<=0&&b2>=0) ans2=b1-b2;
  else ans2=abs(b1)-abs(b2);
  printf("%d",max(ans1,ans2)*max(ans1,ans2));
  return 0;
}

