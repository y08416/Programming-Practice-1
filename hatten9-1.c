#include <stdio.h>

#define ROW_A 2
#define COL_A 3
#define COL_B 2

// 行列の積を計算する関数
void matrixMultiplication(int a[ROW_A][COL_A], int b[COL_A][COL_B]) {
    int result[ROW_A][COL_B];

    // 行列の積を計算
    for (int i = 0; i < ROW_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL_A; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 結果を表示
    for (int i = 0; i < ROW_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 2 × 3 行列 A のデータ
    int matrixA[ROW_A][COL_A] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 3 × 2 行列 B のデータ
    int matrixB[COL_A][COL_B] = {
        {2, 3},
        {4, 5},
        {6, 7}
    };

    // 行列の積を計算して結果を表示
    matrixMultiplication(matrixA, matrixB);

    return 0;
}
