#include<stdio.h>

void task0(void);
void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void execute(void (**pass)(void), int num);
void scheduler(void);

int main()
{
    scheduler();
    return 0;
}

void scheduler(void)
{
    void (*p[8])(void) = {task0, task1, task2, task3, task4, task5, task6, task7};  //用于传递各task函数使用顺序
    void (*pass[100])(void);    //用于存储各task函数使用顺序
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n') {   //读取输入内容直至输入结束
        pass[i] = p[ch-'0'];            //存储各task函数使用顺序
        i++;
    }
    execute(pass, i);
}

void execute(void (**pass)(void), int num)
{
    for (int i = 0; i < num; i++)       //一次使用各task函数
        pass[i]();
}

void task0(void)
{
    puts("task0 is called!");
}
void task1(void)
{
    puts("task1 is called!");
}
void task2(void)
{
    puts("task2 is called!");
}
void task3(void)
{
    puts("task3 is called!");
}
void task4(void)
{
    puts("task4 is called!");
}
void task5(void)
{
    puts("task5 is called!");
}
void task6(void)
{
    puts("task6 is called!");
}
void task7(void)
{
    puts("task7 is called!");
}