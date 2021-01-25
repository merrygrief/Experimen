#include<stdio.h>
int main()
{
	int x, a;
	float t;
	printf("工资金额: "); 
	scanf("%d", &x);
	a = x/1000;
	switch (a)
	{
		case 0: t = 0;
				break;
		case 1: t = (x-1000)*0.05;
				break;
		case 2: t = (x-2000)*0.1+50;
				break;
		case 3: t = (x-3000)*0.15+150;
				break;
		case 4: t = (x-4000)*0.2+300;
				break;
		default: t = (x-5000)*0.25+500;
				break;
	}
	printf("应收取税金额度: %f", t);
	return 0;
}
