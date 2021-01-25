#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 4
char *del(char *str, int len);
int main()
{
	char *arr[n];			//用于n行存放字符串
	char *position;			//用于删除前置空格、制表符后的字符串起始地址
	int len;
	for (int i = 0; i < n; i++){
		arr[i] = (char *) malloc(81*sizeof(char));	//读入n行字符串
		gets(arr[i]);
	}
	for (int i = 0; i < n; i++){
		len = strlen(arr[i]);
		position = del(arr[i], len);
		puts(position);
		free(arr[i]);				//每输出一个结果，释放一次内存
	}
	return 0;
}

char *del(char *str, int len)
{
	int i = 0;
	for (; str[i] == ' ' || str[i] == '\t'; i++) ;	//查找空格和制表符的总数
	return (str + i);		//返回首个非空格或制表符的位置
}