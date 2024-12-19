#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][256]; // 5つの文字列を格納する2次元配列
    char all[1280] = ""; // 文字列を連結するための配列
    int lengths[5]; // 各行の長さを格納する配列
    int i, shortest = 0;

    // ユーザーからの入力と処理
    for (i = 0; i < 5; ++i) {
        printf("%d 行目の文字列を入力してください (最大 255 文字): ", i + 1);
        gets(strings[i]); // gets関数で文字列を取得

        // 文字列の長さを取得し、配列に格納
        lengths[i] = strlen(strings[i]);

        // 最も辞書順で早い文字列を見つける
        if (strcmp(strings[i], strings[shortest]) < 0) {
            shortest = i;
        }

        // all配列に文字列を連結
        strcat(all, strings[i]);
    }

    // 各行の長さを表示
    for (i = 0; i < 5; ++i) {
        printf("%d 行目の文字列は %s で文字数は %d 文字です。\n", i + 1, strings[i], lengths[i]);
    }

    // 最も辞書順で早い文字列を表示
    printf("辞書順で最も早いのは %s でした。\n", strings[shortest]);

    // 連結された文字列を表示
    printf("全て連結された文字列は %s です。\n", all);

    return 0;
}
