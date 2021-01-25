/*实验4-2程序修改替换题程序*/
#include<stdio.h>
#define max(a,b,c) ((a>b?a:b)>c)?(a>b?a:b):c            //a、b的较大值和c比较，得出三个数中的最大值
float sum(float x, float y);
int main(void)
{
	int a, b, c;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	printf("\nThe maximum of them is %d\n",max(a,b,c));
  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}

float sum(float x, float y)
{
	return x+y;
}