#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 256
#define NUM_STRINGS 3

int main() {
    char strings[NUM_STRINGS][MAX_STRING_LENGTH];  // 3x256の2次元配列
    int row;  // 配列の行を指定するための変数
    int charCount;  // 各行の文字数を数えるための変数

    // 文字列の入力
    for (row = 0; row < NUM_STRINGS; ++row) {
        printf("%d つめの文字列を入力してください(最大%d文字): ", row + 1, MAX_STRING_LENGTH - 1);
        gets(strings[row]);
    }

    // 文字列の表示と文字数の計算
    for (row = 0; row < NUM_STRINGS; ++row) {
        charCount = 0;
        // 文字列の表示
        printf("%d つめに入力された文字列は%s です．", row + 1, strings[row]);

        // 文字数の計算
        while (strings[row][charCount] != '\0') {
            charCount++;
        }

        // 文字数の表示
        printf("文字数は%d 文字です．\n", charCount);
    }

    return 0;
}
