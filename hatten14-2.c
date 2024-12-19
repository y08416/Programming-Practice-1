#include <stdio.h>
#include <stdlib.h>

// 構造体の定義
struct data {
    int idnum;
    char name[50];
    char gen;
    double eng;
    double math;
};

// マクロ定義
#define MAX_ID 1000

int main() {
    // 構造体配列の定義
    struct data yomikomi[MAX_ID];
    struct data kakikomi[MAX_ID];

    // ファイルポインタの宣言
    FILE *inputFile, *outputFile;

    // ファイルSeiseki.datをオープンし、データを読み取る
    if ((inputFile = fopen("Seiseki.dat", "r")) == NULL) {
        perror("Error opening Seiseki.dat");
        exit(EXIT_FAILURE);
    }

    // ファイルSeiseki.binをバイナリ形式でオープンし、データを書き込む
    if ((outputFile = fopen("Seiseki.bin", "wb")) == NULL) {
        perror("Error opening Seiseki.bin");
        exit(EXIT_FAILURE);
    }

    // データの読み取りと書き込み
    int i = 0;
    while (fscanf(inputFile, "%s %c %lf %lf", kakikomi[i].name, &kakikomi[i].gen, &kakikomi[i].eng, &kakikomi[i].math) == 4) {
        kakikomi[i].idnum = i;
        fwrite(&kakikomi[i], sizeof(struct data), 1, outputFile);
        i++;
    }

    // ファイルをクローズ
    fclose(inputFile);
    fclose(outputFile);

    // ファイルSeiseki.binを再びオープンし、データを一気に読み取る
    if ((inputFile = fopen("Seiseki.bin", "rb")) == NULL) {
        perror("Error opening Seiseki.bin");
        exit(EXIT_FAILURE);
    }

    // データの一気に読み取り
    fread(yomikomi, sizeof(struct data), MAX_ID, inputFile);

    // ファイルをクローズ
    fclose(inputFile);

    // 標準入力からIDを受け取る
    int queryID;
    printf("どのデータを参照しますか ID=[0-%d]: ", MAX_ID - 1);
    if (scanf("%d", &queryID) != 1 || queryID < 0 || queryID >= MAX_ID) {
        printf("整数で正しい範囲のIDを入力してください。\n");
        exit(EXIT_FAILURE);
    }

    // 指定したIDに対応するデータの表示
    if (queryID < i) {
        printf("%s %c %.1f %.1f\n", yomikomi[queryID].name, yomikomi[queryID].gen, yomikomi[queryID].eng, yomikomi[queryID].math);
    } else {
        printf("そのようなIDのデータは存在しません\n");
    }

    return 0;
}
