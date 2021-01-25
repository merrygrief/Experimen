#include<stdio.h>
#include<stdlib.h>
#define N 20
#define M 10

char *add(char *a, char *b, char *sum);

int main()
{
    char a[M+N+2], b[M+N+2];
    char *result = malloc((M+N+3) * sizeof(char));
    scanf("%s%s", a, b);
    result = add(a, b, result);
    puts(result);
    return 0;
}

char *add(char *a, char *b, char *sum)
{
    _Bool carry = 0;        //是否进位，参与运算
    int temp;               //用于暂存同位及进位的和
    sum[M+N+2] = '\0';
    for (int i = 30; i >= 0; i--){
        temp = a[i] - '0' + b[i] - '0' + carry;
        sum[i+1] = temp % 10 + '0';
        carry = temp / 10;
    }
    sum[N+1] = '.';
    if(carry == 1) {sum[0] = '1'; return sum;}  //处理最高位情况
    else return (sum--);
}