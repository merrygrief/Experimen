/*实验4-2程序修改替换题程序*/ 
#include<stdio.h>
int max(int x, int y, int z);                           //在使用函数前未声明，有风险
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
	
int max(int x, int y, int z)
{
	int m=z;
	if (x>y)
		{if(x>z) m=x;}                                  //if和else匹配不符合原意
	else
    	if(y>z) m=y;
    return m;
}

float sum(float x, float y)
{
	return x+y;
}