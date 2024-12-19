#include <stdio.h>

int main()
{
    int n;

    while (1)
    {
        printf("行数を示す正の奇数: ");
        scanf("%d", &n);

        // 偶奇の判定かつ正の数の判定
        if (n % 2 == 1 && n > 0)
        {
            break;
        }
        else
        {
            // それ以外の数値が入力された場合最初に戻る
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                printf("*"); // 対角線上に*を印字
            }
            else
            {
                printf("-"); // それ以外の位置に空白を印字
            }
        }
        printf("\n"); // 各行の終わりで改行
    }

    return 0;
}
