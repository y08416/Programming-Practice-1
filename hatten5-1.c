#include <stdio.h>

#define max 500 // 最大データ数の定義

int main()
{
    int data_x[max];
    int data_y[max];
    int x;

    printf("ベクトルの要素数は？(最大%d):", max);
    scanf("%d", &x);
    if (x < 0 || x > max) // 条件式
    {
        printf("無効なデータ数です。");
        return 1;
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("ベクトルxの%d番目の要素:", i);
        scanf("%d", &data_x[i]);
     
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("ベクトルyの%d番目の要素:", i);
        scanf("%d", &data_y[i]);
    }
    
    int inner_product = 0;
    for(int i = 0; i < x; i++){
        inner_product +=  data_x[i] * data_y[i];

    }

    printf("ベクトルx,yの内積は%dです。", inner_product);


}
