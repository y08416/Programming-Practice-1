#include <stdio.h>
#include <math.h>

// ベクトルの最大サイズを定義
#define MAX_SIZE 512

// ベクトルのノルムを計算する関数
double calculateNorm(int vector[], int size) {
    double norm = 0;
    for (int i = 0; i < size; i++) {
        norm += vector[i] * vector[i];
    }
    return sqrt(norm);
}

// ベクトルの内積を計算する関数
int calculateDotProduct(int vector1[], int vector2[], int size) {
    int dotProduct = 0;
    for (int i = 0; i < size; i++) {
        dotProduct += vector1[i] * vector2[i];
    }
    return dotProduct;
}

// ベクトルの要素を入力する関数
void inputVector(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d 番目の要素: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

int main() {
    int size;

    // ベクトルのサイズを入力
    do {
        printf("ベクトルの要素数は？(最大%d): ", MAX_SIZE);
        scanf("%d", &size);

        if (size < 1 || size > MAX_SIZE) {
            printf("要素数が範囲外です。再度入力してください。\n");
        }
    } while (size < 1 || size > MAX_SIZE);

    int vectorX[MAX_SIZE], vectorY[MAX_SIZE];

    // ベクトルの要素を入力
    printf("ベクトルx の要素の入力:\n");
    inputVector(vectorX, size);

    printf("ベクトルy の要素の入力:\n");
    inputVector(vectorY, size);

    // コサイン θ を計算
    double normX = calculateNorm(vectorX, size);
    double normY = calculateNorm(vectorY, size);
    int dotProduct = calculateDotProduct(vectorX, vectorY, size);

    double cosTheta = dotProduct / (normX * normY);

    // 結果を表示
    printf("cos θ の値は%f です．\n", cosTheta);

    return 0;
}
