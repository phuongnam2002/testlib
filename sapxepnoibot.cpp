#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int a[500],b[500];
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {scanf("%d",&a[i]);b[i]=a[i];}
  for(int i=1;i<=n-1;i++)
  {
  	for(int j=i+1;j<=n;j++)
  	{
  	   if(b[i]>b[j])
		 {
		 	int s=b[i];
		 	b[i]=b[j];
		 	b[j]=s;
		 }	
	}
  }
  for(int i=1;i<=n;i++)
  {
  	 int kt=0;
  	 for(int j=1;j<=n;j++)
  	 {
  	    if(a[j]!=b[j])
		  {
		  	kt=1;
		  	break;
		  }	
	 }
	 if(kt==0) break;
	 for(int j=1;j<=n-1;j++)
	 {
	 	if(a[j]>a[j+1])
	 	{
	 	  int s=a[j];
		   a[j]=a[j+1];
		   a[j+1]=s;	
		}
	 }
	 printf("Buoc %d: ",i);
	 for(int j=1;j<=n;j++) printf("%d ",a[j]);
	 printf("\n");
  }
  return 0;
}

