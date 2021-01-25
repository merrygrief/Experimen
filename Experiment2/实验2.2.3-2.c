#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
	char c;
	int state = IN;
	while((c = getchar()) != EOF){
		if(c == ' ') state = OUT;
		else if(state == OUT){
			state = IN;
			putchar(' ');
		}
		if(c != ' ') putchar(c);
	}
	return 0;
 } 
