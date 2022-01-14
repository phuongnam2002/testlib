#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
const char CHAR55=55;
const char CHAR48=48;
typedef long long ll;
const int N=1e6+3;
void xuly()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int i;
    char a[25];
    int cou=0,m,nho=n;
    while(nho>0)
    {
        if(b>10)
        {
            m=nho%b;
            if(m>=10)
            {
                a[cou]=(char)(m+CHAR55);
                cou++;
            }
            else
            {
                a[cou]=(char)(m+CHAR48);
                cou++;
            }
        }
        else
        {
            a[cou]=(char)((nho%b)+CHAR48);
            cou++;
        }
        nho=nho/b;
    }
    for(int i=cou-1;i>=0;i--) printf("%c",a[i]);
    printf("\n");
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--) xuly();
}
