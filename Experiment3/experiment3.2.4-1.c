#include <stdio.h>
#include <math.h>
int prime(int n);	//判断是否为质数 
int main()
{
	int n;
	printf("Input an number: ");
	while(scanf("%d", &n) != EOF){
		if(n < 4 || n % 2 == 1) printf("Please input an even number greater than four.\n");
		else {
			for(int i = 2; i <= n/2; i++) if(prime(i) && prime(n-i)) printf("%d=%d+%d\n", n, i, n-i);
		}
		printf("Input an number: ");
	}
	return 0;
}

int prime(int n)
{
	int j = sqrt(n);
	for(int i = 2; i <= j; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
