#include <stdio.h>

#define N_MAX 15

// 3x3行列の積を計算する関数
void matrix_product(int mat_x[3][3], int mat_y[3][3], int mat_z[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat_z[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                mat_z[i][j] += mat_x[i][k] * mat_y[k][j];
            }
        }
    }
}

// 3x3行列のコピーを行う関数
void matrix_copy(int source[3][3], int destination[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            destination[i][j] = source[i][j];
        }
    }
}

// 3x3行列を出力する関数
void matrix_print(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 元の行列A
    int A[3][3] = {
        {1, 0, -1},
        {1, 2, 1},
        {2, 2, 3}
    };

    int n;
    do {
        // 指数nの入力をユーザーに求める
        printf("n の値を入力してください(最大%d): ", N_MAX);
        scanf("%d", &n);

        // 入力が範囲外の場合は再度入力を促す
        if (n < 1 || n > N_MAX) {
            printf("n は1から%dの範囲内で入力してください。\n", N_MAX);
        }
    } while (n < 1 || n > N_MAX);

    int result[3][3];

    // 一時的な行列tempにAのコピーを保存
    int temp[3][3];
    matrix_copy(A, temp);

    // 指数nまでの累乗を計算
    for (int i = 2; i <= n; i++) {
        matrix_product(temp, A, result);
        matrix_copy(result, temp);
    }

    // 結果を出力
    printf("A^%d:\n", n);
    matrix_print(temp);

    return 0;
}
