#include<stdio.h>
int main()
{
	int x, m, n, a[10], flag;	
	scanf("%d", &x);
	for(n = 1234; n < 50000; n++){
		m = n*x;
		if(m > 98765) continue;
		flag = 1;
		a[0] = m/10000;
		a[1] = m/1000%10;
		a[2] = m/100%10;
		a[3] = m/10%10;
		a[4] = m%10;
		a[5] = n/10000;
		a[6] = n/1000%10;
		a[7] = n/100%10;
		a[8] = n/10%10;
		a[9] = n%10;
		for(int i = 1; i<=9; i++){
			for(int j = 0; j <i; j++)
				if(a[j] == a[i]) {flag = 0;break;}
			if(!flag) break;
		}
		if(flag) {
			if(n < 10000) printf("%d/0%d=%d\n", m, n, x);
			else printf("%d/%d=%d\n", m, n, x);
		}
	}
	return 0;
}
