#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
char Res[505][102];
int j = 0;
void Sort()
{
	char tmp[102];
	for (int d = 0; d < j; d++)
		for (int k = d + 1; k < j; k++)
		{
			if (strlen(Res[d]) > strlen(Res[k]))
			{
				strcpy(tmp, Res[d]);
				strcpy(Res[d], Res[k]);
				strcpy(Res[k], tmp);
			}
			else if (strlen(Res[d]) == strlen(Res[k]))
			{
				if (strcmp(Res[d], Res[k]) > 0)
				{
					strcpy(tmp, Res[d]);
					strcpy(Res[d], Res[k]);
					strcpy(Res[k], tmp);
				}
			}
		}
}
void Run()
{
	char s[102];
	scanf("%s", &s);
	int len = strlen(s), i = 0;
	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (i < len && s[i] == '0')
				i++;
			if (i == len || s[i] < '0' || s[i] > '9')
			{
				Res[j][0] = '0';
				Res[j][1] = '\0';
				j++;
				continue;
			}
			int x = 0;
			while (i < len && s[i] >= '0' && s[i] <= '9')
			{
				Res[j][x++] = s[i];
				i++;
			}
			Res[j][x] = '\0';
			j++;
		}
		else
			i++;
	}
}
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--)
		Run();
	Sort();
	for (int x = 0; x < j; x++)
		printf("%s\n", Res[x]);
	return 0;
}
