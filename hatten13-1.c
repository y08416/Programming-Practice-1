#include <stdio.h>

// 構造体Resultsの宣言
typedef struct {
    int number;
    float english;
    float mathmatic;
    float japanese;
} Results;

int main() {
    // 構造体の配列を定義し、128以上の要素が確保されていることを保証
    Results data[128];

    int i = 0;
    float englishTotal = 0.0, mathTotal = 0.0, japaneseTotal = 0.0;

    // ユーザーからの入力を受け取り、"0000"が入力されるまで続ける
    while (1) {
        printf("学生番号を入力して下さい\n");
        scanf("%d", &data[i].number);

        // "0000"が入力された場合、入力を終了する
        if (data[i].number == 0000) {
            break;
        }

        printf("英語の得点を入力して下さい\n");
        scanf("%f", &data[i].english);

        printf("数学の得点を入力して下さい\n");
        scanf("%f", &data[i].mathmatic);

        printf("国語の得点を入力して下さい\n");
        scanf("%f", &data[i].japanese);

        // 各科目の合計を計算
        englishTotal += data[i].english;
        mathTotal += data[i].mathmatic;
        japaneseTotal += data[i].japanese;

        i++;

        // 128人を超えた場合、処理を終了
        if (i >= 128) {
            printf("データ数が上限を超えました。\n");
            return 1;
        }
    }

    // 平均値を計算して出力
    float englishAverage = englishTotal / i;
    float mathAverage = mathTotal / i;
    float japaneseAverage = japaneseTotal / i;

    printf("英語，数学，国語の平均点は%.1f, %.1f, %.1f 点です．\n", englishAverage, mathAverage, japaneseAverage);

    return 0;
}
