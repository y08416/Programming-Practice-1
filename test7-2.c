#include <stdio.h>

int main() {
    int num, sum = 0;
    int n = 1;

    while (1) {
        printf("%d 番目の数:", n++);
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        sum += num;
    }

    printf("合計: %d\n", sum);

    return 0;
}