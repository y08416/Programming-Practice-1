#include <stdio.h>

#define p 2
#define q 3
#define r 4

int main() {
    int matrixA[p][q] = {
        {2, 4, 8},
        {7, 3, 3}
    };

    int matrixB[q][r] = {
        {4, 5, 2, 7},
        {5, 6, 2, 8},
        {1, 2, 3, 6}
    };

    int matrixC[p][r];  // 新しい行列Cを定義

    // 行列Cの要素を0で初期化
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            matrixC[i][j] = 0;
        }
    }

    printf("行列A=\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("行列B=\n");
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("行列A * B =\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
