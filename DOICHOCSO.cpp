#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int check(char s[])
{
	for(int i=1;i<strlen(s);i++)
    {
		if (s[i]<=s[i-1]) return 1;
	}
	return 0;
}
int check0(char s[])
{
	if (s[0]=='0') return 0;
	return 1;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
    {
		char s[1005];
		scanf("%s",&s);
		if (check(s)==0)
        {
			printf("-1\n");
			continue;
		}
		int index=strlen(s)-1;
		for (int i=strlen(s)-1;i>=1;i--)
		{
			if (s[i-1]>s[i])
            {
				index=i;
				break;
			}
		}
		int move1=index;
		char maxx=s[index];
		for(int i=index+1;i<strlen(s);i++)
		{
			if (s[i]>maxx&&s[i]<s[index-1])
			{
				move1=i;
				maxx=s[i];
			}
		}
		char c=s[index-1];s[index-1]=s[move1];s[move1]=c;
		if (check0(s)==0) printf("-1\n");
		else printf("%s\n",s);
	}
    return 0;
}
