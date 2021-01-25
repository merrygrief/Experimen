#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CHANGE 0
int main()
{
    char str[1000];
    int len;
    gets(str);              //读取输入内容到str数组中形成字符串
    len = strlen(str);      //求输入字符长度
    #if CHANGE              //在宏定义CHANGE为1的情况下执行，为0的情况下不执行
    for (int i = 0; i<len; i++){
        if (islower(str[i])) str[i] = toupper(str[i]);      //将小写字母改为大写
        else if (isupper(str[i])) str[i] = tolower(str[i]); //将大写字母改为小写
    }
    #endif
    puts(str);              //输出字符串
    return 0;
}