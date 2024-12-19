#include <stdio.h>

#define saidai 500 // 最大データ数の定義

int main()
{
    int data[saidai];
    int x;

    printf("ベクトルの要素数は？(最大%d):", saidai);
    scanf("%d", &x);

    if (x <= 0 || x > saidai) // 入力値が範囲外の場合
    {
        printf("要素数は1から%dの範囲内で設定してください。\n", saidai);
        return 1;
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d 番目の要素:", i + 1); // インデックスを1から始める
        scanf("%d", &data[i]);
    }

    // 平均値の計算
    double average = 0;
    for (int i = 0; i < x; i++)
    {
        average += data[i];
    }
    average /= x;

    // 偏差ベクトルの計算と表示
    printf("偏差ベクトルは(");
    for (int i = 0; i < x; i++)
    {
        double deviation = data[i] - average;
        printf("%.1lf", deviation);
        if (i < x - 1)
            printf(", ");
    }
    printf(") です。\n");

    return 0;
}
