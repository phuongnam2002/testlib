#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const int N=1e7+3;
void add(char s[],int pos,char c)
{
	int n=strlen(s);
	for(int i=n-1;i>=pos;i--) s[i+1]=s[i];
	s[pos]=c;
	s[n+1]='\0';
}
void xuly()
{
   char s[1000],t[1000];
   scanf("%s%s",&s,&t);
   int n=strlen(s),m=strlen(t);
   if(n<m)
   {
   	  int d=m-n;
   	  f1(i,d) add(s,0,'0');
   }
   else if(n>m)
   {
   	int d=n-m;
   	f1(i,d) add(t,0,'0');
   }
   char kq[1000]="";
   int nho=0,so=0,k=0;
   for(int i=strlen(t)-1;i>=0;i--)
   {
   	  so=(s[i]-'0')+(t[i]-'0')+nho;
   	  nho=so/10;
   	  char h=(so%10)+'0';
   	  kq[k++]=h;
   }
   if(nho>0)
   {
   	 char l=(nho%10)+'0';
   	 kq[k++]=l;
   }
   for(int i=k-1;i>=0;i--) printf("%c",kq[i]);
   printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

