#include<stdio.h>
int main()
{
    int n, m;   //n为行数，m为列数
    scanf("%d%d", &n, &m);
    int arr[n][m];                  //用于存放原矩阵的数
    int b[m][n];                    //用于存放修改后矩阵的数
    for (int i = 0; i < n; i++){    //读入原矩阵数
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            b[i][j] = arr[j][m-i-1];    //将原矩阵数位置调整到修改后矩阵中
    }
    for (int i = 0; i < m; i++){        //输出修改后矩阵数
        for (int j = 0; j < n; j++)
            printf("%5d", b[i][j]);
        printf("\n");
    }
    return 0;
}