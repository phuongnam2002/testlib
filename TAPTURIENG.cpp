#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int start,int count, char a[],char b[])
{
	int i,j, kiemtra,dem;
	for( i = 0 ; i < strlen(b) ; i++ )
	{
		kiemtra = 0;
		if(b[i-1] ==' '|| i == 0 )
		{
			if(b[i] == a[start])
			{
				int k = i;
				for(j = start; j < start + count ; j++ )
				{
					if(a[j] != b[k++] )
					{
						kiemtra++;
					} 
				}
				if( k == strlen(b) )
				{
					if( kiemtra == 0 ) return 0;
				}else
				{
					if( kiemtra == 0 && b[k] == ' ' ) return 0;
				}
			}
		}
		
	}
	return 1;
}
int check1(int start,int count, char a[]){
	int i,j, kiemtra;
	for( i = 0 ; i < start ; i++ ){
		kiemtra = 0;
		if(a[i-1] == ' ' || i == 0 ){
			if(a[i] == a[start]){
				int k = i;
				for(j = start; j < start + count ; j++ ){
					if(a[j] != a[k++] ){
						kiemtra++;
					} 
				}
				if( kiemtra == 0 ) return 0;
			}
		}
		
	}
	return 1;
}

int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	int i,count,j;
	for( i = 0 ; i < strlen(a) ; i++ ){
		count = 0;
		int start = i;
		while(a[i] != ' ' && i < strlen(a) ){
			count++;
			i++;
		}
		if(check(start,count,a,b) == 0){
			for( j = start ; j < start + count ; j++ ){
				a[j] = ' ';
			}
		}
	}
	int ditmemaycoACkhong = 0;
	for( i = 0 ; i < strlen(a) ; i++ ){
		count = 0;
		int start = i;
		if(a[i] == ' ') continue;
		while(a[i] != ' ' && i < strlen(a) ){
			count++;
			i++;
		}
		if(check1(start,count,a) == 0){
			for( j = start ; j < start + count ; j++ ){
				a[j] = ' ';
			}
		}else{
			ditmemaycoACkhong++;
		}
	}
	char x = 'a';
	while( ditmemaycoACkhong != 0 ){
		for(int i = 0 ; i < strlen(a) ; i++ ){
			if(a[i] == ' ') continue;
			if( a[i] == x && (a[i-1] == ' ' || i == 0) ){
				int y = i;
				while(a[y] != ' ' && y < strlen(a) ){
					printf("%c",a[y]);
					y++;
				}
				printf(" ");
				ditmemaycoACkhong--;
			}
		}
		x++;
	}
	return 0;
}
