#include <stdio.h>
#include <ctype.h>

// 関数: 大文字と小文字を分離する
void separate_upper_lower(char *str, char *uppers, char *lowers) {
    while (*str != '\0') {
        if (isupper(*str)) {
            *uppers = *str; // 大文字をuppersに追加
            uppers++;
        } else if (islower(*str)) {
            *lowers = *str; // 小文字をlowersに追加
            lowers++;
        }
        str++;
    }
    *uppers = '\0'; // 文字列の終端を設定
    *lowers = '\0'; // 文字列の終端を設定
}

// メイン関数
int main() {
    char input[256];
    char upper[256];
    char lower[256];

    // ユーザーに文字列の入力を促す
    printf("文字列を入力してください(最大256文字):");
    fgets(input, sizeof(input), stdin);

    // 大文字と小文字を分離する関数を呼び出す
    separate_upper_lower(input, upper, lower);

    // 結果を表示
    printf("大文字：%s\n", upper);
    printf("小文字：%s\n", lower);

    return 0;
}