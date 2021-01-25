#include <stdio.h>
#include <math.h> 
int power_self(long n);
int main()
{
	int k;
	long min = 1;
	printf("Input: ");
	while(scanf("%d", &k) != 0){
		if(k == 0) break;
		for(int i = 0; i < k-1; i++) min *= 10;
		for(long i = min; i < min*10; i++) if(power_self(i)) printf("%ld\n", i);
		printf("Input: ");
		min = 1;
	}
	return 0;
}

int power_self(long n)
{
	int a[10], t = 0;					//t是位数
	long x = 1, sum = 0, n1 = n;		//x是乘方数 
	while(n1){
		a[t] = n1%10;
		n1 = n1/10;
		t++;
	}
	for(int i = 0; i < t; i++){
		for(int j = 0; j < t; j++){
			x *= a[i]; 
		}
		sum += x;
		x = 1;
	}
	if(sum == n) return 1;
	else return 0;
} 
