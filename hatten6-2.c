#include <stdio.h>

int main() {
    // 初期の3x3行列(matrix)を作成して初期化
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 回転後の行列を5x5のゼロ行列(rotate)として初期化
    int rotate[5][5] = {0};

    // matrixを印刷
    printf("回転前\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 45度回転してrotateに代入
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotate[i + j][2 - i + j] = matrix[i][j];
        }
    }

    // rotateを印刷
    printf("\n回転後\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (rotate[i][j] != 0) {
                printf("%d", rotate[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
