#include<stdio.h>
#include<string.h>
int main()
{
	int d=1,i;
	char s[100001];
	scanf("%s",&s);
	if (strlen(s)==1) printf("1");
	else
	{
		int t=0,t1=0;
		for (i=0;i<strlen(s);i++) t=t+s[i]-'0';
		if (t<10) printf("1");
		else
		{
			while(t>=10||t1>=10)
			{
				if (t>=10)
				{
				  d++;
				  t1=0;
				  while (t>0)
				  {
					t1+=t%10;
					t=t/10;
			      }
				if (t1>=10)
				{
					d++;
					t=0;
					while (t1>0)
					{
						t+=t1%10;
						t1=t1/10;
					}
				}
			    }   
		    }
		 printf("%d",d);
		}
	}
}
