/*实验4-1改错与跟踪调试题程序：计算平方差、交换两数*/
#include<stdio.h>
#define SUM (a+b)                                           //替换错误
#define DIF (a-b)
#define SWAP(a,b)  a=a^b;b=a^b;a=a^b;                       //交换表达错误
int main() 
{
    int a,b;
    printf("Input two integers a, b:");                     //提示需要输入两个整形数
    scanf("%d%d", &a,&b);                                   //读入a、b的值
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF); //输出a,b总和以及a,b平方差
    SWAP(a,b);                                              //实现a、b的值交换
    printf("\nNow a=%d,b=%d\n",a,b);                        //输出现在a,b的值
    return 0;
}