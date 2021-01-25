#include<stdio.h>
int main()
{
	int t;
	for(int i = 100; i <= 999; i++){
		t = i*i%1000;
		if(t == i) printf("%d\n", i);
	}
	return 0;
}
