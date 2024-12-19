#include <stdio.h>

int main() {
    int numbers[100];  // 最大100個の整数を格納するための配列
    int size = 0;      // 配列内の整数の現在のサイズ

    while (1) {
        int input;
        printf("正整数: ");
        scanf("%d", &input);

        if (input == 0) {
            // 0が入力された場合、整数を小さい順に表示して終了
            printf("入力された整数は小さい順に0, ");
            for (int i = 0; i < size; i++) {
                printf("%d", numbers[i]);
                if (i < size - 1) {
                    printf(", ");
                }
            }
            printf(" です.\n");
            break;
        }

        // 配列内の適切な位置に整数を挿入
        int insertIndex = size;
        while (insertIndex > 0 && numbers[insertIndex - 1] > input) {
            numbers[insertIndex] = numbers[insertIndex - 1];
            insertIndex--;
        }
        numbers[insertIndex] = input;

        size++;
    }

    return 0;
}
