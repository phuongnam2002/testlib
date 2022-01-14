#include<stdio.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int res,nTest;
int d[10000005];
int max(int a,int b)
{
	return(a>b)?a:b;
}
void calc(char s[],int n) 
{
    int ft =0;
    for (int i = 0; i < n; i++)
        if ( s[i] == '^' ) 
		{
            int hs = 0, sm = 0;
            for (int j = ft; j < i - 2; j++)
                hs = hs * 10 + (s[j] - '0');
            for (int j = i + 1; j < n; j++) 
			{
                if ( s[j] == ' ' ) 
				{
                    ft = j + 3;
                    i = ft;
                    break;
                }
                sm = sm * 10 + (s[j] - '0');
            }
            res=max(res, sm);
            d[sm] += hs;
        }
}
int main() 
{
    scanf("%d\n",&nTest);
    while(nTest--) 
	{
        char s[1000005],t[1000005];
        gets(s);
		gets(t);
        res = 0;
        calc(s,strlen(s));
        calc(t,strlen(t));
        int ft=-1;
        for (int i = 0; i < res; i++)
            if ( d[i] ) break;
            else ft = i;
        for (int i = res; i > ft; i--) {
            if ( !d[i] ) continue;
            printf("%d*x^%d",d[i],i);
            if ( i!=ft+1) printf(" + ");
            d[i]=0;
        }
        printf("\n");
    }
    return 0;
}
