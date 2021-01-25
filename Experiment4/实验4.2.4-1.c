#include <stdio.h>
#include <math.h>
#define s(a,b,c) (a+b+c)/2.0                    //宏函数实现求s
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c)) //宏函数实现求面积
int main()
{
    float a, b, c, s, area;
    scanf("%f%f%f", &a, &b, &c);                //读取输入的三个数
    s = s(a,b,c);                               //使用宏函数求s
    area = area(s,a,b,c);                       //使用宏函数求面积
    printf("area=%f",area);                     //输出求得的面积
    return 0;
}