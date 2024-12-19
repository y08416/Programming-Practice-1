#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 255

void count_chars(char str[], int cnt[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            char uppercase = toupper(str[i]);
            cnt[uppercase - 'A']++;
        }
    }
}

int main() {
    char input[MAX_LENGTH + 1]; // +1 for null terminator
    int charCount[26] = {0};    // Array to store counts for each letter

    printf("文字列を入力してください（最大255文字）: ");
    gets(input);

    count_chars(input, charCount);

    // Display results
    for (int i = 0; i < 26; ++i) {
        char letter = 'A' + i;
        printf("%c は %d 文字ありました．\n", letter, charCount[i]);
    }

    return 0;
}
