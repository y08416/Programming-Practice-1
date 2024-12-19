#include <stdio.h>
#include <stdlib.h>

void arrayPlus(int *a, int *b, int size);

int main() {
    int size;
    
    // ベクトルの要素数を入力
    printf("ベクトルの要素数を入力してください(最大256): ");
    scanf("%d", &size);
    
    // 配列の動的確保
    int *vector1 = (int*)malloc(size * sizeof(int));
    int *vector2 = (int*)malloc(size * sizeof(int));
    
    // 1つめのベクトルの要素を入力
    printf("1 つめのベクトルの各要素を入力してください\n");
    for (int i = 0; i < size; ++i) {
        printf("%d 番目の要素: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    // 2つめのベクトルの要素を入力
    printf("2 つめのベクトルの各要素を入力してください\n");
    for (int i = 0; i < size; ++i) {
        printf("%d 番目の要素: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    // 配列の和を計算し、結果を表示
    arrayPlus(vector1, vector2, size);

    // 結果の表示
    printf("２つのベクトルの和は\n(");
    for (int i = 0; i < size; ++i) {
        printf("%d", vector1[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf(")\n");

    // 配列の解放
    free(vector1);
    free(vector2);

    return 0;
}

void arrayPlus(int *a, int *b, int size) {
    // ２つのベクトルの和を計算し、結果をaに代入
    for (int i = 0; i < size; ++i) {
        *(a + i) = *(a + i) + *(b + i);
    }
}
