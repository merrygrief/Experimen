#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4
void strsort(char **s, int size);
int main()
{
	int i;
	char *s[N], t[50];
	for (i = 0; i < N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
        strcpy(s[i], t);
	}
    strsort(s, i);
	for (i = 0; i < N; i++)	puts(s[i]);
	return 0;
}

/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char *s[], int size)
{
	char *temp;
	char **i, **j;
	for (i = s; i < s + size; i++)
		for (j = s; i - s < s - j + size - 1; j++)
			if (strcmp(*j, *(j + 1)) > 0)
			{
				temp = *j;
				*j = *(j + 1);
				*(j + 1) = temp;
			}
}