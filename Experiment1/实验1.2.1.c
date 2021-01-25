#include<stdio.h>
#define PI 3.14159
int main( void )
{
	int f ;
	unsigned short p, k, newint;
    double c, r, s ;
    /* for task 1 */
    printf("Input Fahrenheit: " );
    scanf("%d", &f);
    c = 5.0/9.0 * (f-32.0) ;
    printf(" \n %d (F) = %.2f (C)\n\n", f, c);
    /* for task 2 */
    printf("input the radius r:");
    scanf("%lf", &r);
	s = PI * r * r;
	printf("\nThe acreage is %.2f\n\n", s);
	/* for task 3 */
	k = 0xa1b2, p = 0x8432;
	newint = p&0xff00|k>>8;
	printf("new int = %#x\n\n", newint);
    return 0;
}

