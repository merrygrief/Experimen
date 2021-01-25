/*实验5-1程序改错与跟踪调试题程序*/
#include <stdio.h>
#include <string.h>
void strcate(char [],const char []);
void strdelc(char [],char );
int main(void)
{
    char a[]="Language", b[100]="Programming";  //
    printf("%s %s\n", b, a);
    strcate(b,a);
    printf("%s %s\n", b, a);
	strdelc(b, 'a');
    printf("%s\n", b);
    return 0;
}

void strcate(char t[],const char s[])
{
    int i = 0,  j = 0;
    while(t[i++]);
    i--;                                        //新增
    while((t[i++] = s[j++]) != '\0');
}

void strdelc(char s[], char c)
{
        int j, k, len = strlen(s);
        for(j=k=0; s[j] != '\0'; j++)
            if(s[j] != c) s[k++] = s[j];
        for(int t = k; t < len; t++)            //
            s[t] = '\0';
}