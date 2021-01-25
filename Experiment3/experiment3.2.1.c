/*ʵ��3-1�Ĵ�����򣺼���s=1!+2!+3!+��+n!*/
#include <stdio.h>
long long sum_fac(int n);
int main(void)
{
    int k;
    for(k=1;k<=20;k++)
        printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}

long long sum_fac(int n)									//sum_fac()����δ���� �������� ;sum_fac()���� 
{
    long long s=0, fac=1;									//s������Ҫ��sum_fac()����һ�� 
    int i;													//facӦ�ø��г�ʼֵ1 �����ʹ��� 
   	for(i=1;i<=n;i++){										//s+=fac;��fac*=i���γɸ������ 
   		fac*=i;
    	s+=fac;
	}
    return s;
}
