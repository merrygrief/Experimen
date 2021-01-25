#include<stdio.h> 
int main()
{
	unsigned short x, m, n, t;
	scanf("%x%hd%hd", &x, &m, &n);
	if(m >= 0 && m <= 15 && n >= 1 && n <= 15-m) {
		t = x >> m & ((0x1 << n) - 0x1);
		printf("%#x\n", t << 16 - n);
	}
	else printf("输入错误信息"); 
	return 0;
}