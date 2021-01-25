#include<stdio.h>
struct bits {
	unsigned char bit0 : 1;
	unsigned char bit1 : 1;
	unsigned char bit2 : 1;
	unsigned char bit3 : 1;
	unsigned char bit4 : 1;
	unsigned char bit5 : 1;
	unsigned char bit6 : 1;
	unsigned char bit7 : 1;
};

void f0(void) {printf("f0 is called\n");}
void f1(void) {printf("f1 is called\n");}
void f2(void) {printf("f2 is called\n");}
void f3(void) {printf("f3 is called\n");}
void f4(void) {printf("f4 is called\n");}
void f5(void) {printf("f5 is called\n");}
void f6(void) {printf("f6 is called\n");}
void f7(void) {printf("f7 is called\n");}

int main(void)
{
	void (*p_fun[8])(void) = {f0, f1, f2, f3, f4, f5, f6, f7};
	struct bits num;
	scanf("%u", (unsigned *)&num);
    if(num.bit0) f0();
    if(num.bit1) f1();
    if(num.bit2) f2();
    if(num.bit3) f3();
    if(num.bit4) f4();
    if(num.bit5) f5();
    if(num.bit6) f6();
    if(num.bit7) f7();
	return 0;
}