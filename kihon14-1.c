#include <stdio.h>

// ヒストグラムのビンの幅と個数の定義
#define BIN_WIDTH 25
#define BIN_NUM 8

// ヒストグラムを表示する関数
void display_histogram(int histogram[]) {
    int i, j;

    for (i = 0; i < BIN_NUM; i++) {
        // ビンの範囲と度数を表示
        printf("%d ~ %d : %d ", i * BIN_WIDTH, (i + 1) * BIN_WIDTH - 1, histogram[i]);

        // ヒストグラムの度数分だけ '*' を表示
        for (j = 0; j < histogram[i]; j++) {
            printf("*");
        }

        // 改行
        printf("\n");
    }
}

int main() {
    // ファイルを読み込むためのポインタを宣言
    FILE *file = fopen("Seiseki.dat", "r");

    // ファイルが正しくオープンできなかった場合のエラー処理
    if (file == NULL) {
        printf("ファイルSeiseki.datをオープンできません．\n");
        return 1;
    }

    // 変数の宣言
    char name[50], gender;
    int english, math, total, histogram[BIN_NUM] = {0};

    // ファイルからデータを読み取り、ヒストグラムを作成
    while (fscanf(file, "%s %c %d %d", name, &gender, &english, &math) == 4) {
        total = english + math;

        // ヒストグラムのビンに度数を追加
        histogram[total / BIN_WIDTH] += 1;
    }

    // ファイルを閉じる
    fclose(file);

    // ヒストグラムの表示
    display_histogram(histogram);

    return 0;
}
