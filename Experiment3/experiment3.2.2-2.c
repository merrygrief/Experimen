/*ʵ��3-2�����޸��滻��(2)����򣺸��ݹ�ʽ���� s*/
#include<stdio.h>
#include<stdlib.h> 
double mulx(double x,int n);
long fac(int n);
double sum(double x,int n)
{
	int i;
	double z=1.0, mul_result = 1.0;
	for(i=1;i<=n;i++)
	{
		z=z+(mul_result *= n)/fac(i);
	}
	return z;
 } 

double mulx(double x, int n)
{
	int i;
	double z = 1.0;
	for (i = 0; i < n; i++)
	{
		z = z * x;
	}
	return z;
}

long fac(int n)
{
	if (n == 0) return 1;
	static int i = 1;
	static long h = 1;
	h *= i++;
	return h;
}

int main()
{
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is: %lf",sum(x,n));
	return 0;	  
}
