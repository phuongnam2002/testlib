#include<stdio.h>
#include<string.h>
struct s
{
	char a[100];
};
int SoSanh(char c[],char b[])
{
	char x[1000]="";
	char y[1000]="";
	strcat(x,c);
	strcat(x,b);
	strcat(y,b);
	strcat(y,c);
	if(strcmp(x,y)>0) return 1;
	else if(strcmp(x,y)<0) return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d\n",&n);
		struct s d[n];
		struct s temp;
		for(int i=0;i<n;i++) scanf("%s",&d[i].a);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(SoSanh(d[i].a,d[j].a)==1)
				{
					temp=d[i];
					d[i]=d[j];
					d[j]=temp;
				}
			}
		}
		for(int i=0;i<n;i++) printf("%s",d[i].a);
		printf("\n");
	}
}
