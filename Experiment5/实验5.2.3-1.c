#include <stdio.h>
int main()
{
    int digit;                      //digit为读入数
    int t;                          //t为除二余数
    int symbol = 0;                 //symbol为digit二进制内存中的符号位
    char arr[33] = "";
    scanf("%d", &digit);
    if(digit < 0){
        symbol = 1;
        digit = -digit;
    }
    for(int i = 0; i < 32; i++){
        if(digit) {
            t = digit % 2;          //将十进制数转换为二进制数，除二取余
            digit = digit / 2;
        }
        else t = 0;                 //在十进制数转换完毕以后，补上高位的0；
        arr[31-i] = (char) t + '0'; //倒叙输出十进制除二余数
    }
    if(symbol){
        int temp = 0;               //temp用于标记是否找到从右向左第一个非0数
        for(int i = 0; i < 32; i++){
            if(!temp && arr[31-i] == '0') continue;             //跳过从右向左找到第一个1前的0
            if(!temp && arr[31-i] == '1') {temp = 1; continue;} //跳过从右向左第一个1
            if(arr[31-i] == '0') arr[31-i] = '1';   //将1变为0，0变为1
            else arr[31-i] = '0';
        }
    }
    puts(arr);                      //输出数组
    return 0;
}