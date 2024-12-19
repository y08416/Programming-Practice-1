#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256
#define NUM_STRINGS 5

int main() {
    char str[NUM_STRINGS][MAX_LENGTH]; // 5つの文字列を格納する2次元配列
    int order[NUM_STRINGS]; // 文字列の並び順を格納する配列

    // ユーザーから文字列を入力
    for (int i = 0; i < NUM_STRINGS; ++i) {
        printf("%d 行めの文字列を入力してください (最大 %d 文字): ", i + 1, MAX_LENGTH - 1);
        fgets(str[i], MAX_LENGTH, stdin);

        // 改行文字を削除する
        if (strchr(str[i], '\n')) {
            *strchr(str[i], '\n') = '\0'; // 改行文字をヌル文字に置き換えて文字列の終端を設定
        }

        order[i] = i; // 初期の並び順を設定
    }

    // 辞書順に並び替え
    for (int i = 0; i < NUM_STRINGS - 1; ++i) {
        for (int j = i + 1; j < NUM_STRINGS; ++j) {
            if (strcmp(str[order[i]], str[order[j]]) > 0) {
                // 順序が間違っている場合は並び替え
                int temp = order[i];
                order[i] = order[j];
                order[j] = temp;
            }
        }
    }

    // 並び替えた結果を表示
    printf("辞書順に並び替えると\n");
    for (int i = 0; i < NUM_STRINGS; ++i) {
        printf("%s\n", str[order[i]]);
    }

    return 0;
}
