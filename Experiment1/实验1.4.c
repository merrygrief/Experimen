#include<stdio.h> 
int main()
{
	char c;
	while((c = getchar()) != EOF && c != '\n'){
		unsigned short step = c >> 6;
		unsigned short c1, c2;
		c1 = (c & 0x2a) >> 1 | (c & 0x15) << 1 | step << 6;
		if(!step) c2 = c1;
		else c2 = (c1 & 0x1f) << 1 | (c1 & 0x20) >> 5 | 0x40;
		putchar(c2);
	}
	return 0;
}
