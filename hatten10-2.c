#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 256

// 関数プロトタイプ
int longest(char strings[MAX_STRINGS][MAX_LENGTH]);

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int lengths[MAX_STRINGS];

    // 文字列の入力
    for (int i = 0; i < MAX_STRINGS; ++i) {
        printf("%d 行めの文字列を入力してください(最大255 文字): ", i + 1);
        gets(strings[i]);
        lengths[i] = strlen(strings[i]);
    }

    // 最も長い文字列のインデックスを取得
    int longestIndex = longest(strings);

    // 結果の表示
    printf("最も長かったのは%d 行めの%s でした．\n", longestIndex + 1, strings[longestIndex]);

    return 0;
}

// 最も長い文字列のインデックスを返す関数
int longest(char strings[MAX_STRINGS][MAX_LENGTH]) {
    int maxLength = 0;
    int longestIndex = 0;

    for (int i = 0; i < MAX_STRINGS; ++i) {
        int length = strlen(strings[i]);
        if (length > maxLength) {
            maxLength = length;
            longestIndex = i;
        }
    }

    return longestIndex;
}
