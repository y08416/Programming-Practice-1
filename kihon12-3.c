#include <stdio.h>
#include <string.h>

int main(void) {
    // 3行16列のchar型2次元配列を初期化
    char str[3][16] = {"BKC", "NojiHigashi", "Kusatsu"};

    char input[256]; // ユーザーからの入力を受け取るための配列

    // ユーザーに文字列の入力を求める
    for (int i = 0; i < 3; ++i) {
        printf("%d つめの文字列を入力してください (最大 15 文字): ", i + 1);
        gets(input); 
        printf("%d 行目に %s をコピーしました。\n", i + 1, input);
        strcpy(str[i], input); // 入力された文字列をstrにコピー
    }

    // 配列strの内容を表示
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 16; ++j) {
            if (str[i][j] == '\0') {
                putchar('*'); // ナル文字は'*'で表示
            } else {
                putchar(str[i][j]);
            }
        }
    }

    return 0;
}
