#include <stdio.h>

#define saidai 500 // 最大データ数の定義

int main()
{
    int data[saidai];
    int x;
    int max = 0; // maxの初期値を0に設定
    int t = 0;   // tの初期値を0に設定

    printf("入力データ数は？(最大%d):", saidai);
    scanf("%d", &x);
    if (x < 0 || x > saidai) // 条件式
    {
        printf("無効なデータ数です。");
        return 1;
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("%d番目のデータ:", i);
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < x; i++) // iを1からではなく0から開始
    {
        if (data[i] > max)
        {
            max = data[i];
            t = i; // 最大値のインデックスをtに代入
        }
    }
    
    // 最大の要素とそのインデックスを表示
    printf("最大の要素は%dで、そのインデックスは%dである。\n", max, t);

    return 0;
} 
