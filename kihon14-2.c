#include <stdio.h>

int main() {
    // ファイルポインタの宣言
    FILE *inputFile, *maleFile, *femaleFile;
    
    // Seiseki.datを読み取りモードで開く
    inputFile = fopen("Seiseki.dat", "r");
    
    // Seiseki.datが開けない場合
    if (inputFile == NULL) {
        printf("ファイルSeiseki.datをオープンできません．\n");
        return 1; // エラーコード1を返してプログラム終了
    }

    // Male.datを書き込みモードで開く
    maleFile = fopen("Male.dat", "w");
    // Male.datが開けない場合
    if (maleFile == NULL) {
        printf("ファイルMale.datをオープンできません．\n");
        fclose(inputFile); // 開いたファイルをクローズ
        return 1; // エラーコード1を返してプログラム終了
    }

    // Female.datを書き込みモードで開く
    femaleFile = fopen("Female.dat", "w");
    // Female.datが開けない場合
    if (femaleFile == NULL) {
        printf("ファイルFemale.datをオープンできません．\n");
        fclose(inputFile); // 開いたファイルをクローズ
        fclose(maleFile);  // 開いたファイルをクローズ
        return 1; // エラーコード1を返してプログラム終了
    }

    // ファイルからデータを読み取り，性別に応じて別のファイルに書き込む
    char name[100], gender;
    double english, math;

    while (fscanf(inputFile, "%s %c %lf %lf", name, &gender, &english, &math) == 4) {
        // 小数第1位まで表示する
        fprintf((gender == 'm') ? maleFile : femaleFile, "%s %c %.1lf %.1lf\n", name, gender, english, math);
    }

    // ファイルをクローズ
    fclose(inputFile);
    fclose(maleFile);
    fclose(femaleFile);

    return 0; // 正常終了
}
