#include <stdio.h>
#define x 3 //行数の指定
#define y 3 //列数の指定

int main()
{
    int matrix[x][y];

    // 行列の各要素の値をキーボードから入力
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++) {
            printf("input u[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is\n");

    // 行列の要素を表示
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++) {
            printf(" %3d", matrix[i][j]);
        }
        printf("\n"); // 各行の要素を表示したら改行する
    }

    return 0;
}
