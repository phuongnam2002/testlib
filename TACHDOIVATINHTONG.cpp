#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
const char CHAR55=55;
const char CHAR48=48;
typedef long long ll;
const int N=1e6+3;
char s[205];
void them(char s[],int pos,char c)
{
    int n=strlen(s);
    for(int i=n-1;i>=pos;i--) s[i+1]=s[i];
    s[pos]=c;
    s[n+1]='\0';
}
int main()
{
   scanf("%s",&s);
   while(strlen(s)>1)
   {
       char res1[205]="",res2[205]="";
       int j=0;
       for(int i=0;i<strlen(s)/2;i++) {res1[j]=s[i];j++;}
       j=0;
       for(int i=strlen(s)/2;i<strlen(s);i++) {res2[j]=s[i];j++;}
       if(strlen(res1)<strlen(res2))
       {
         int d=strlen(res2)-strlen(res1);
         for(int i=1;i<=d;i++) them(res1,0,'0');
       }
       else if(strlen(res1)>strlen(res2))
       {
         int d=strlen(res1)-strlen(res2);
         for(int i=1;i<=d;i++) them(res2,0,'0');
       }
        int nho=0,ans=0,k=0;
        char kq[205]="";
        for(int i=strlen(res2)-1;i>=0;i--)
        {
            ans=(res1[i]-48)+(res2[i]-48)+nho;
            nho=ans/10;
            kq[k]=(ans%10)+48;
            k++;
        }
        if(nho!=0) kq[k]=nho+48;
        char d[205]="";
        j=0;
        for(int i=strlen(kq)-1;i>=0;i--)
        {
            d[j]=kq[i];
            j++;
        }
        strcpy(s,d);
        printf("%s\n",s);
   }
}
