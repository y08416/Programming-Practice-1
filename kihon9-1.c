#include <stdio.h>

#define MAX 512

// 関数のプロトタイプ宣言
double average(int array[], int size);

int main() {
    // 変数の宣言
    int size;
    int array[MAX];

    // 配列のサイズをユーザーに入力してもらう
    printf("配列のサイズを入力してください: ");
    scanf("%d", &size);

    // ユーザーに配列の各要素の値を入力してもらう
    for (int i = 0; i < size; i++) {
        printf("u[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // 平均を計算して表示する
    printf("平均は%.1f です．\n", average(array, size));

    return 0;
}

// 平均を計算する関数
double average(int array[], int size) {
    double sum = 0.0;

    // 配列の各要素を合計する
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    // 平均を計算して返す
    return sum / size;
}
