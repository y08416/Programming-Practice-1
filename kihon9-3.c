#include <stdio.h>

#define MAX 512

// 内積を計算する関数
int calculateDotProduct(int x[MAX], int y[MAX], int size) {
    int dotProduct = 0;
    for (int i = 0; i < size; i++) {
        dotProduct += x[i] * y[i];
    }
    return dotProduct;
}

int main() {
    int size;

    // ベクトルの要素数を入力
    do {
        printf("ベクトルの要素数は？(最大%d): ", MAX);
        scanf("%d", &size);
    } while (size <= 0 || size > MAX);

    // ベクトルxの要素を入力
    int x[MAX];
    printf("ベクトルxの各要素を入力してください:\n");
    for (int i = 0; i < size; i++) {
        printf("ベクトルxの%d番目の要素: ", i + 1);
        scanf("%d", &x[i]);
    }

    // ベクトルyの要素を入力
    int y[MAX];
    printf("ベクトルyの各要素を入力してください:\n");
    for (int i = 0; i < size; i++) {
        printf("ベクトルyの%d番目の要素: ", i + 1);
        scanf("%d", &y[i]);
    }

    // 内積を計算して表示
    int dotProduct = calculateDotProduct(x, y, size);
    printf("ベクトルx, y の内積は%d です．\n", dotProduct);

    return 0;
}
