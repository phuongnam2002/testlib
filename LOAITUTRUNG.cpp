#include<stdio.h>
#include<string.h>
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
typedef long long ll;
const int N=1e7;
const int MOD=1e9+7;
int main()
{
   char a[105][100],b[105];//ky tu thu j cua xau thu i
   int pos=0;
   while(scanf("%s",&b)!=-1) strcpy(a[pos++],b);
   for(int i=0;i<pos;i++)
   {
       for(int j=i+1;j<pos;j++)
       {
           if(strcmp(a[j],a[i])==0) a[j][0]=0;
       }
       if(a[i][0]!=0) printf("%s ",a[i]);
   }

}
