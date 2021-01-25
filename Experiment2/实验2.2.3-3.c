#include<stdio.h>
int main()
{
	int a[55], t;
	for(int i = 0; i <= 9; i++){
		for(int blank = 0; blank <= 2*(9-i); blank++) printf(" ");
		for(int j = 0; j <= i; j++){
			if(j == 0) t = 1;
			else t = t*(i-j+1)/j;
			printf("%-4d", t); 
		}
		printf("\n");
	}
	return 0;
 } 
