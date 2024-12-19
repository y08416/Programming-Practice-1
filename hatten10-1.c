#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char in_str[MAX_LENGTH];
    char out_str[MAX_LENGTH];
    int count = 0;

    printf("文字列を入力してください(最大255文字): ");

    // getsを使用して文字列を入力（非推奨であるため注意が必要）
    gets(in_str);

    // 文字数を数える
    while (in_str[count] != '\0') {
        count++;
    }

    // 文字列を逆順にする
    for (int i = 0; i < count; i++) {
        out_str[i] = in_str[count - 1 - i];
    }

    // 逆順になった文字列にナル文字を追加
    out_str[count] = '\0';

    // 結果を表示
    printf("%s を逆順にすると %s です．\n", in_str, out_str);

    return 0;
}
