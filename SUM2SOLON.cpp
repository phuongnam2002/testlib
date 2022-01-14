#include<stdio.h>
#include<string.h>
void them(char s[],int pos,char c)
{
    int n=strlen(s);
    for(int i=n-1;i>=pos;i--) s[i+1]=s[i];
    s[pos]=c;
    s[n+1]='\0';
}
void xuly()
{
    char s1[600],s2[600];
    gets(s1);
    gets(s2);
    if(strlen(s1)<strlen(s2))
    {
        int d=strlen(s2)-strlen(s1);
        for(int i=1;i<=d;i++) them(s1,0,'0');
    }
    else if(strlen(s1)>strlen(s2))
    {
        int d=strlen(s1)-strlen(s2);
        for(int i=1;i<=d;i++) them(s2,0,'0');
    }
    int nho=0,ans=0,k=0;
    char kq[600]="";
    for(int i=strlen(s2)-1;i>=0;i--)
    {
        ans=(s1[i]-48)+(s2[i]-48)+nho;
        nho=ans/10;
        kq[k]=(ans%10)+48;
        k++;
    }
    if(nho!=0) kq[k]=nho+48;
    for(int i=strlen(kq)-1;i>=0;i--) printf("%c",kq[i]);
    printf("\n");
}
main()
{
    int t;
    scanf("%d\n",&t);
    for(int i=1;i<=t;i++) xuly();
    return 0;
}
