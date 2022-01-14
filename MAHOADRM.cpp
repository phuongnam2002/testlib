#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[20000],s1[10000],s2[10000];
	int x,i,j,n,d,t,m,d1,d2,k;
	long long c;
	scanf("%d",&t);
	while (t--)
	{
		int t1=0,t2=0;
		scanf("%s",&s);
		int n=strlen(s);
		x=0;
		for (i=0;i<n/2;i++) s1[x++]=s[i];
		s1[x]='\0';
		x=0;
		for(i=n/2;i<n;i++) s2[x++]=s[i];
		s2[x]='\0';
		n=n/2;
		for (i=0;i<n;i++)
		{
			t1=t1+s1[i]-'A';
			t2=t2+s2[i]-'A';
		}
		for (i=0;i<n;i++)
		{
			s1[i]=(s1[i]-'A'+t1)%26 +'A';
			s2[i]=(s2[i]-'A'+t2)%26 +'A';
		}
		for (i=0;i<n;i++) s1[i]=(s1[i]-'A'+s2[i]-'A')%26 +'A';
		printf("%s\n",s1);
	}
}
