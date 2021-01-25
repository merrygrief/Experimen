#include<stdio.h> 
int main()
{
	unsigned long n;
	int a[4];
	while(scanf("%ul", &n) != EOF){
		a[0] = n >> 24;
		a[1] = n >> 16 & 0xff;
		a[2] = n >> 8 & 0xff;
		a[3] = n & 0xff;
		printf("%d.%d.%d.%d\n", a[0], a[1], a[2], a[3]);
	}
	return 0;
}
