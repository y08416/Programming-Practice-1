#include <stdio.h>
#include <string.h>

int main() {
    char str[3][256];
    int charCount = 0;

    // 1行目の文字列を入力
    printf("1 つめの文字列を入力してください(最大255 文字): ");
    gets(str[0]);

    // 2行目の文字列を入力
    printf("2 つめの文字列を入力してください(最大255 文字): ");
    gets(str[1]);

    // 3行目に1行目を複写
    int i = 0;
    while (str[0][i] != '\0') {
        str[2][charCount] = str[0][i];
        i++;
        charCount++;
    }

    // 3行目に空白を挿入
    str[2][charCount] = ' ';
    charCount++;

    // 2行目を複写
    i = 0;
    while (str[1][i] != '\0') {
        str[2][charCount] = str[1][i];
        i++;
        charCount++;
    }

    // 3行目の最後にナル文字を追加
    str[2][charCount] = '\0';

    // 結果を表示
    printf("1 つめの文字列は%s でした．\n", str[0]);
    printf("2 つめの文字列は%s でした．\n", str[1]);
    printf("連結された文字列は%s です．\n", str[2]);

    return 0;
}
