#include <stdio.h>
#include <math.h>
int perfect(long n);
int main()
{
	for(long n = 2; n<=100000; n++){
		if(perfect(n)) {
		printf("%ld=1", n);
		for(long j = 2; j < n; j++) if(n%j == 0) printf("+%ld", j);
		printf("\n");
		}
		else printf("%ld is not a perfect number\n", n);
	}
	return 0;
}

int perfect(long n)
{
	int k = sqrt(n);
	long sum = 1;
	for(int i = 2; i <= k; i++){
		if(n%i == 0) sum += i+n/i;
	}
	if(sum == n) return 1;
	else return 0;
}
