#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[1000];
		gets(a);
		int i,check=0;
		for(i=0;i<strlen(a);i++ )
		{
			if(a[i]==' '&&check==0)
			{
				continue;
			}
			else check++;
			if(i==0)
			{
				
				printf("%c",toupper(a[0]));
				continue;
			}
			if(a[i-1]==' ')
			{
				printf("%c",toupper(a[i]));
			}
			else
			{
				printf("%c",tolower(a[i]));
			}
		}
		printf("\n");
	}
	return 0;
}
