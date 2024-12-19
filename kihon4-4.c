#include <stdio.h>
int main(void)
{
    int n;
    // キーボードから整数n入力
    printf("正の整数:");
    scanf("%d", &n);

    // nが1未満の整数の時プログラムを終了
    if (n < 1)
    {
        printf("正の整数ではありません。");
        return 1; // プログラム終了
    }

    // 三角形を表示する
    for (int m = 1; m <= n; m++)
    {

        //空白を表示する
        for (int l = 0; l < n - m; l++)
        {
            printf(" ");
        }

        //*を表示する
        for (int k = 0; k < 2 * m - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
