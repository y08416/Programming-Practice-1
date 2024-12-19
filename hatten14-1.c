#include <stdio.h>

// ロジスティック写像を計算する関数
double LogisticMap(double an) {
    return 4 * an * (1 - an);
}

int main() {
    // 変数の初期化
    double x = 0.1, xt = 0.1, xb = 0.1;

    // ロジスティック写像による更新と結果の表示
    printf("1 %.6f %.6f %.6f\n", x, xt, xb);
    for (int n = 2; n <= 30; ++n) {
        x = LogisticMap(x);
        xt = LogisticMap(xt);
        xb = LogisticMap(xb);
        printf("%d %.6f %.6f %.6f\n", n, x, xt, xb);
    }

    // テキストファイルに書き込み
    FILE *textFile = fopen("data.txt", "w");
    if (textFile == NULL) {
        perror("Error opening text file");
        return 1;
    }
    fprintf(textFile, "%.6f\n", xt);
    fclose(textFile);

    // バイナリファイルに書き込み
    FILE *binaryFile = fopen("data.bin", "wb");
    if (binaryFile == NULL) {
        perror("Error opening binary file");
        return 1;
    }
    fwrite(&xb, sizeof(double), 1, binaryFile);
    fclose(binaryFile);

    // ファイルに書き込んだ後のxtとxbの値をリセット
    xt = xb = 0.1;

    // ファイルからの読み取りと再計算
    textFile = fopen("data.txt", "r");
    if (textFile == NULL) {
        perror("Error opening text file for reading");
        return 1;
    }
    fscanf(textFile, "%lf", &xt);
    fclose(textFile);

    binaryFile = fopen("data.bin", "rb");
    if (binaryFile == NULL) {
        perror("Error opening binary file for reading");
        return 1;
    }
    fread(&xb, sizeof(double), 1, binaryFile);
    fclose(binaryFile);

    // 再計算と結果の表示
    for (int n = 31; n <= 60; ++n) {
        xt = LogisticMap(xt);
        xb = LogisticMap(xb);
        printf("%d %.6f %.6f %.6f\n", n, x, xt, xb);
    }

    return 0;
}
