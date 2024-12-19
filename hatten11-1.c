#include <stdio.h>

// 配列を大きい順に並べ替える関数
void sort(int *array) {
    int max, temp;

    // 最大値の添字を探す
    max = (array[0] > array[1]) ? 0 : 1;
    max = (array[max] > array[2]) ? max : 2;

    // array[0]とarray[max]の値を入れ替え
    temp = array[0];
    array[0] = array[max];
    array[max] = temp;

    // array[1]とarray[2]の値を比較し、大きい方を後ろに移動
    if (array[1] < array[2]) {
        temp = array[1];
        array[1] = array[2];
        array[2] = temp;
    }
}

int main() {
    int numbers[3];

    // ユーザーからの入力
    printf("1番目の数値を入力してください: ");
    scanf("%d", &numbers[0]);

    printf("2番目の数値を入力してください: ");
    scanf("%d", &numbers[1]);

    printf("3番目の数値を入力してください: ");
    scanf("%d", &numbers[2]);

    // 配列の要素を大きい順に並べ替え
    sort(numbers);

    // 並べ替えた結果を出力
    printf("%d\n%d\n%d\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}