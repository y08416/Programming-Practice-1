#include <stdio.h>
#include <string.h>

int wordsearch(const char *mes, const char *word) {
    int mes_length = strlen(mes);
    int word_length = strlen(word);

    for (int i = 0; i <= mes_length - word_length; i++) {
        int j;
        for (j = 0; j < word_length; j++) {
            if (mes[i + j] != word[j]) {
                break;
            }
        }
        if (j == word_length) {
            return i + 1; // 1番目から始まる位置
        }
    }
    return -1; // 見つからなかった場合
}

int main() {
    char mes[10001]; // 10000文字 + ヌル文字
    char word[256];

    printf("文章を入力してください（最大 10000 文字）: ");
    fgets(mes, sizeof(mes), stdin);

    printf("検索する単語を入力してください（最大 255 文字）: ");
    fgets(word, sizeof(word), stdin);

    // 改行文字を削除
    mes[strcspn(mes, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    int position = wordsearch(mes, word);
    if (position != -1) {
        printf("単語「%s」は %d 文字目に見つかりました。\n", word, position);
    } else {
        printf("単語「%s」は見つかりませんでした。\n", word);
    }

    return 0;
}
