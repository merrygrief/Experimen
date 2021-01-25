#include<stdio.h>
#include<string.h>

char u[]="UVWXYZ";
char v[]="xyz";
struct T{
	int x;
	char c;
	char *t;
}a[]={{11,'A',u},{100, 'B',v}},*p=a;
struct T b[] = {{11,'A',u},{100, 'B',v}};
void renew(void);

int main()
{
    printf("(++p)->x\t\t%d\n", (++p)->x);         //100
    renew();
    printf("p++,p->c\t\t%c\n", (p++, p->c));    //B
    renew();
    printf("*p++->t,*p->t\t\t%c\n", (*p++->t, *p->t)); //x
    renew();
    printf("*(++p)->t\t\t%c\n", *(++p)->t);       //x
    renew();
    printf("*++p->t\t\t\t%c\n", *++p->t);         //V
    renew();
    printf("++*p->t\t\t\t%c", ++*p->t);           //V
    renew();
    return 0;
}

void renew(void)
{
    strcpy(u, "UVXWYZ");
    strcpy(v, "xyz");
    a[0] = b[0];
    a[1] = b[1];
    p=a;
}