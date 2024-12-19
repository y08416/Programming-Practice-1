#include <stdio.h>

void cal(int *x, int *y, int type);

int main() {
    int x, y, type;
    
    // 最初の数字を入力
    printf("最初の数字を入力してください\n");
    scanf("%d", &x);

    while (1) {
        // 四則演算の種類を入力
        printf("どの四則演算を行うか入力してください\n");
        printf("1: 足し算, 2: 引き算, 3: かけ算, 4: 割り算，5: 終了\n");
        scanf("%d", &type);

        if (type == 5) {
            // 終了コマンドが入力されたらループを抜ける
            printf("終了します\n");
            break;
        }

        // 演算に使用する整数を入力
        printf("%d", x);
        if (type == 4) {
            printf("/?");
        } else {
            printf("%c", "+-*/"[type - 1]);
        }
        scanf("%d", &y);

        // cal関数を呼び出して四則演算を実行
        cal(&x, &y, type);

        // 計算結果を表示
        printf("計算結果は%d です\n", x);
    }

    return 0;
}

void cal(int *x, int *y, int type) {
    switch (type) {
        case 1:
            *x = *x + *y;
            break;
        case 2:
            *x = *x - *y;
            break;
        case 3:
            *x = *x * (*y);
            break;
        case 4:
            if (*y != 0) {
                *x = *x / (*y);
            } else {
                printf("割る数が0です。計算できません。\n");
            }
            break;
        default:
            printf("無効な演算タイプです。\n");
    }
}
