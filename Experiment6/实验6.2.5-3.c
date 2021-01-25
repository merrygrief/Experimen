#include<stdio.h>
int main(int argc, char *argv[])	//argc为字符串数目，argv为字符串数组
{
	for (int i = 1; i < argc; i++)
		puts(argv[i]);
	return 0;
}