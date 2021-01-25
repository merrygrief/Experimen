#include<stdio.h>
int main()
{
    unsigned int left, right;
    long digit;                                     //源数据
    unsigned char *p;
    char arr[8];                                    //用于存放转化后的16进制字符
    char sixteen[] = "0123456789ABCDEF";            //用于将整型数转化为16进制字符
    scanf("%ld", &digit);
    p = (unsigned char *) &digit;                   //通过unsigned char *类型取出每个字节
    for (int i = 0; i < 4; i++){
        if(i != 0) p++;
        left = ((int) *p) >> 4;                     //取前4位2进制数转化为整型数
        right = ((int) *p) & 0xF;                   //取后4位2进制数转化为整型数
        arr[6-2*i] = sixteen[left];                 //将整型数转化为16进制数，单字节内部正序，字节间倒序
        arr[7-2*i] = sixteen[right];
    }
    for (int i = 0; i < 4; i++){                    //输出结果，输出的第n行为第n个字节的两个高字节和低字节的16进制字符
        for (int j = 0; j < 2; j++)
            printf("%c\t", arr[2*i+j]);
        printf("\n");
    }
    return 0;
}