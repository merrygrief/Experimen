#include<stdio.h>
// #include<_________>
#include<stdlib.h>
#include<string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char *s[], int size)
{
	// _______temp;
    char *temp;
	int i, j;
    for (i = 0; i < size - 1; i++)
	    for (j = 0; j < size - i - 1; j++)		//题目出错
		    // if (___________)
            if(strcmp(s[j], s[j+1]) > 0)
		    {
		    	temp = s[j];
                // ___________;
                s[j] = s[j+1];
		    	s[j+1] = temp;
	    	}
}

int main()
{
	int i;
	char *s[N], t[50];
	for (i = 0; i < N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		// strcpy(_______);
        strcpy(s[i], t);
	}
	// strsort(________);
    strsort(s, N);
	for (i = 0; i < N; i++)	puts(s[i]);
	return 0;
}