#include <stdio.h>

#define saidai 500 // 最大データ数の定義

int main()
{
    int data[saidai];
    int x;

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
    
    for (int i = 0; i < x / 2; i++) // データの入れ替え
    {
        int temp = data[i];
        data[i] = data[x - i - 1];
        data[x - i - 1] = temp;
    }

    for (int i = 0; i < x; i++) // 要素の値を表示
    {
        printf("%d番目の内容は%dです。\n", x - i - 1, data[i]);
    }
    
    return 0;
}
