#include <stdio.h>

int main()
{
    int a[10] = {10, 5, 25, -10, 7, 0, 52, 27, -8, 1}; //初期化





    for(int i=0; i<3; i++){ //要素の反転
        int t= a[i];
        a[i] = a[9-i];
        a[9-i] = t;


    }


    for (int i = 0; i < 10; i++) //要素の値を表示
    {
        printf("%d番目の内容は%dです。\n", 9-i, a[i]); 
    }
    return 0;
}
