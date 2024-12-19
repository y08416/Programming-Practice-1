#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 256

int main() {
    // 文字列の入力と母音のカウント用の配列の初期化
    char input[MAX_LENGTH];
    int vowels[5] = {0}; 
    
    // ユーザーに文字列の入力を促す
    printf("文字列を入力してください（最大256文字）: ");
    gets(input); 

    // 入力された文字列を走査し、母音の出現回数をカウント
    for (int i = 0; input[i] != '\0'; ++i) {
        char currentChar = tolower(input[i]);

        switch (currentChar) {
            case 'a':
                ++vowels[0];
                break;
            case 'i':
                ++vowels[1];
                break;
            case 'u':
                ++vowels[2];
                break;
            case 'e':
                ++vowels[3];
                break;
            case 'o':
                ++vowels[4];
                break;
            default:
                break;
        }
    }

    // 各母音の出現回数を表示
    printf("aは%d文字ありました。\n", vowels[0]);
    printf("iは%d文字ありました。\n", vowels[1]);
    printf("uは%d文字ありました。\n", vowels[2]);
    printf("eは%d文字ありました。\n", vowels[3]);
    printf("oは%d文字ありました。\n", vowels[4]);

    return 0;
}