#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int score;
};

void start(void);                           //用于开始程序
int choose(void);                           //用于返回选择
void sort(struct student *p, int n);        //用于排序

int main()
{
    puts("What do you want to do?");
    puts("1.sort the score of student");
    puts("2.exit");
    if(choose() == 1) start();
    puts("Thank you for your using");
    return 0;
}

int choose(void)
{
    int choice;
    printf("Please enter your choice, 1 or 2:  ");
    scanf("%d", &choice);
    if(choice == 1 || choice == 2) return choice;
    else return choose();
}

void start(void)
{
    int n;                      //n为用户输入学生人数
    printf("Please enter the number of student: ");
    scanf("%d", &n);
    puts("Enter students and their scores like \"Alice  97\"");
    struct student arr[100];
    for(int i = 0; i < n; i++){
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].score);
    }
    
    sort(arr, n);                                   //排序并输出
    puts("Students and their scores:");
    for(int i = 0; i < n; i++){
        printf("%6s\t%3d\n", arr[i].name, arr[i].score);
    }
}

void sort(struct student *p, int n)
{
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n-i; j++){
            if(p[j-1].score < p[j].score) {
                int t = p[j-1].score;             //交换分数
                p[j-1].score = p[j].score;
                p[j].score = t;
                char temp[100];                     //交换名字
                strcpy(temp, p[j-1].name);
                strcpy(p[j-1].name, p[j].name);
                strcpy(p[j].name, temp);
            }
        }
    }
}