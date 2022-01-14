#include<stdio.h>
#include<string.h>
typedef char xau[200];
int cong(xau a,xau b,int n,xau s)
{
    int d=0;
    for(int i=0;i<n;i++) 
	{
	  d=a[i]-'0'+b[i]-'0'+d;
	  a[i]='0'+d%10; 
	  d=d/10;
	} 
	if(d>0) return 0;
    if(strstr(s,a)) return 1;
    return 0;
}
int main()
{
    int T;
    scanf("%d",&T);
    int ans=0;
    int KQ[10001];
    xau X[10000];
    xau x,z,y,t;
    while(T--)
    {
    	ans++;
    	scanf("%s",&x);
        int ok=1;
        strcpy(X[ans],x);
        int n=strlen(x);
        for(int i=0,j=n-1;i<j;i++,j--)
        {
        	char c=x[i];
        	x[i]=x[j];
        	x[j]=c;
		}
        strcpy(y,x);
        strcat(y,x);
        strcpy(z,x);
        for(int i=2;i<=n&&ok;i++)
        {
            ok=cong(z,x,n,y);
        }
        KQ[ans]=ok;
    }
    for(int i=1;i<=ans;i++)
    {
       if(KQ[i]==1)  printf("YES\n",X[i]);
       else printf("NO\n",X[i]);
    }
} 
