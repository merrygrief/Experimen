#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp_in, *fp_out;
    char string1[256], string2[256] = "", *p1;      //String1数组用于处理字符，string2，p1起辅助处理作用
    int count = 0;                              //用于记录替换的数目
    if(argc != 4){
		printf("Arguments error!\n");
		exit(EXIT_FAILURE);
    }
    if((fp_in = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s file!\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    fp_out = fopen("temp.txt", "w");                //创建并以写入形式打开辅助文件
    rewind(fp_in);
    while(fgets(string1, 256, fp_in) != NULL){      //单次取256个字符进行处理
        if((p1 = strstr(string1, argv[2])) != NULL){    //判断是否存在待替换字符
            count++;                                    //若存在，则计数加一
            strncpy(string2, string1, p1-string1);      //将待替换字符串前面的字符复制到string2中
            strcpy(string2+(p1-string1), argv[3]);      //将给定字符串复制到string2中
            strcpy(string2+(p1-string1)+strlen(argv[3]), p1+strlen(argv[2]));//将待替换字符串后面的字符复制到string2中
            strcpy(string1, string2);                   //将string2中的字符串更新到string1中，则此时string1中为替换后的字符
            while((p1 = strstr(string1, argv[2])) != NULL){ //单次取出的字符中不止一个待替换字符串时重复操作直至替换完全
                strncpy(string2, string1, p1-string1);
                strcpy(string2+(p1-string1), argv[3]);
                strcpy(string2+(p1-string1)+strlen(argv[3]), p1+strlen(argv[2]));
                strcpy(string1, string2);
            }
        }
        fputs(string1, fp_out);             //将替换后的字符存入辅助文件temp.txt中
    }

    freopen(argv[1], "w", fp_out);
    freopen("temp.txt", "r", fp_in);
    rewind(fp_in);
    rewind(fp_out);
    while(fgets(string1, 200, fp_in) != NULL){  //将辅助文件中的内容写回原文件，完成替换
        fputs(string1, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
    printf("%d", count);
    system("del temp.txt");                 //删去辅助文件
    return 0;
}