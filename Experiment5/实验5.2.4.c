#include <stdio.h>
#include <string.h>
void strnins(char *, const char *, int);
int main(void)
{
	char a[100] = "12345", b[100] = "abcde";
	strnins(b, a, 2);
	puts(b);
	return 0;
}

void strnins(char *origin, const char *in, int position)
{
	int len_origin = strlen(origin), len_in = strlen(in);
	for(int i = len_origin - 1; i > position - 1; i--)
		origin[i + len_in] = origin[i];
	for(int i = position, j = 0; i < position + len_in; i++, j++)
		origin[i] = in[j];
}