#include<stdio.h>
#include<math.h>
int main( )
{ 
	int i, j, a, b, c, k, flag, count = 0;
	printf("所有的三位纯粹合数：\n");
	for(i = 400;i <= 999; i++){
		flag = 0; 
		a = i;
		b = i / 10;
		c = i / 100;
		for(j =2, k = sqrt(a); j <= k; j++)
			if (!(a%j)) {
				flag += 1;
				break;
			}
		for(j =2, k = sqrt(b); j <= k; j++)
			if (!(b%j)) {
				flag += 1;
				break;
			}
		for(j =2, k = sqrt(c); j <= k; j++)
			if (!(c%j)) {
				flag += 1;
				break;
			}
		if(flag == 3) printf("%d\n", i);
	}
	return 0;
}
