#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for(int k = 1 ; k <= t ; k++ ){
		char a[200], b[200];
		gets(a);
		gets(b);
		int i,j,check;
		printf("Test %d: ",k);
		for( i = 0 ; i < strlen(a) ; i++ ){
			check = 0;
			if( i == 0 || a[i-1] == ' ' ){
				char x = b[0] + 32;
				char y = b[0] - 32;
				if(a[i] == x || a[i] == y || a[i] == b[0] ){
					int k = i;
					for( j = 0 ; j < strlen(b) ; j++ ){
						char c = a[k] - 32;
						char d = a[k] + 32;
						if(b[j] == c || b[j] == d || b[j] == a[k] ){
							check++;
						}else break;
						k++;
					}
				}
			}
			if( check < strlen(b) ) printf("%c",a[i]);
			else i += strlen(b);
		}
		printf("\n");
	}
	return 0;
}
