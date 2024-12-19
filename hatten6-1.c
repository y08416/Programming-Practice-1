#include <stdio.h>

#define ROWS 4
#define COLS 4

int main() {
    int a[ROWS][COLS] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12},
                         {13, 14, 15, 16}};

    int b[ROWS][COLS] = {0};

    printf("回転前\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    // Rotate the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            b[j][ROWS - 1 - i] = a[i][j];
        }
    }

    printf("回転後\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}