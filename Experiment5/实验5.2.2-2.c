#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
	int a[M], b[M];						//数组a存放是否出圈（1为出圈），数组b存放出圈人的编号
	int i, j, k;                                //i用于循环，j用于标记当前数，k用于计数
    for(i = 0; i < M; i++)					/* 对圈中人按顺序编号1—M */
		a[i] = i + 1;
	for(i = 0, j = M-1; i < M-1; i++){          //循环输出至只剩一个数
        k = 0;                                  //初始化计数
        while(k != 3){
            if(++j > M - 1) j = 0;              //j指到下一位
            if(a[j]) k++;                  //当数未出圈时计数有效
        }
        b[i] = j+1;                             //出圈数存入b数组
        a[j] = 0;                               //将出圈数标记为出圈
	}
	for(i = 0; i < M-1; i++)                    //按次序输出出圈人的编号
		printf("%6d", b[i]);
    for(i = 0; i < M; i++)                      //输出最后一个未出圈的数
        if(a[i] != 0) {printf("%6d\n", i+1); break;}
	return 0;
}