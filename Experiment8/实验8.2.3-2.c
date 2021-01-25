#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

int main()
{
    FILE *fp;
    float num[10];
    fp = fopen("float.dat", "wb+");
    for(int i = 0; i < N; i++){     //将输入的字符存入二进制文件中
        scanf("%f", &num[i]);
    }
    fwrite(num, sizeof(float), 10, fp);

    putchar('\n');
    for(int i = 0; i < N * sizeof(float); i++){     //第一次输出计算机内存中表示的浮点数字节数据
        printf("%02hhX  ", ((unsigned char *) num)[i]);
    }
    putchar('\n');

    rewind(fp);                     //输出二进制文件中的浮点数
    fread(num, sizeof(float), 10, fp);
    for(int i = 0; i < N; i++){
        printf("%f  ", num[i]);
    }
    putchar('\n');
    rewind(fp);                     //按字节读取二进制文件中单精度浮点数

    for(int i = 0; i < N * sizeof(float); i++){     //第二次输出写入文件的浮点数字节数据
        printf("%02hhX  ", ((unsigned char *) num)[i]);
    }
    putchar('\n');

    fclose(fp);
    return 0;
}


/*
1.23
123.3
122.2
12.23
23.23
432.32
23.5
23
134.5
2.12
*/