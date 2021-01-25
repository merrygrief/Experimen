#include <stdio.h>
int main( )
{
 	char c;
 	while((c = getchar()) != EOF){
 		c = (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
		putchar(c);
	}
	return 0; 
}
