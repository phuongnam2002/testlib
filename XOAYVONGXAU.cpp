#include<stdio.h>
#include<string.h>
void swap(char a[])
{
	char k=a[0];
	int n=strlen(a);
	for(int i=0;i<n-1;i++) a[i]=a[i+1];
	a[n-1]=k;
}
int main()
{
	int n,s=1000000000,ok=1;
	scanf("%d\n",&n);
	char a[100][100];
	for(int i=0;i<n;i++) scanf("%s",&a[i]);
	int k=strlen(a[0]);
	for(int i=0;i<k;i++)
	{
		swap(a[0]);
		int ss=0;
		for(int j=1;j<n;j++)
		{
			int sss=0,m=strlen(a[j]);
			char b[100];
			strcpy(b,a[j]);
			while(strcmp(a[0],b)!=0)
			{
				sss++;
				swap(b);
				if(sss==m) break; 
			}
			if(sss==m)
			{
				ok=0;
				break;
			}
			ss+=sss;
		}
		ss+=(i+1)%k;
		if(ok==0) break;
		if(ss<s) s=ss;
	}
	if(ok==0)
	{
		printf("-1");
		return 0;
	}
	printf("%d",s);
}
