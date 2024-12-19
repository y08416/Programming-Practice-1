#include <stdio.h>
#include <math.h>

#define MAX 512

// ノルムを計算する関数のプロトタイプ宣言
double calculateNorm(int n, int vector[]);

int main(void) {
    // 変数の宣言
    int n;
    
    // ユーザーにベクトルの要素数を入力してもらう
    do {
        printf("ベクトルの要素数は？(最大%d): ", MAX);
        scanf("%d", &n);

        // 入力が不正な場合、再度入力を促す
        if (n < 1 || n > MAX) {
            printf("要素数は1から%dの範囲内で入力してください。\n", MAX);
        }
    } while (n < 1 || n > MAX);

    // ベクトルの要素を入力してもらう
    int vector[MAX];
    
    for (int i = 0; i < n; i++) {
        printf("%d番目の要素: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // ノルムを計算して表示する
    printf("このベクトルのノルムは%f です．\n", calculateNorm(n, vector));

    return 0;
}

// ノルムを計算する関数
double calculateNorm(int n, int vector[]) {
    double norm = 0.0;
    
    // 各要素の二乗を合計してから平方根を取る
    for (int i = 0; i < n; i++) {
        norm += vector[i] * vector[i];
    }
    
    return sqrt(norm);
}
