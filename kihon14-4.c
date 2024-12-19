#include <stdio.h>

int main() {
    // 変数の宣言
    FILE *file;
    int num1, num2; 
    char line[200];

    // ファイルを開こうとする
    file = fopen("Kesson.dat", "r");
    if (file == NULL) {
        printf("ファイルKesson.dat をオープンできません．\n");
        return 1;
    }

    // fscanfを使用してデータを読み込む
    printf("--fscanf の場合-----------------------\n");
    while (fscanf(file, "%d %d", &num1, &num2) == 2) {
        printf("%d %d\n", num1, num2);
    }

    // ファイルを閉じる
    fclose(file);

    // ファイルを再度開く
    file = fopen("Kesson.dat", "r");
    if (file == NULL) {
        printf("ファイルKesson.dat をオープンできません．\n");
        return 1;
    }

    // fgetsとsscanfを使用してデータを読み込む
    printf("--fgets の場合-----------------------\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%d %d", &num1, &num2) == 2) {
            printf("%d %d\n", num1, num2);
        } else {
            printf("データ欠損\n");
        }
    }

    // ファイルを閉じる
    fclose(file);

    return 0;
}
