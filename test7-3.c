#include <stdio.h>

int main() {
    int a[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        printf("%d つ目の入力:", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    double ave = (double)sum / 5;

    int n = 0;
    for (int i = 0; i < 5; ++i) {
        if (a[i] > ave) {
            ++n;
        }
    }

    printf("平均値:%.3lf\n", ave);
    printf("平均値よりも大きい要素の数:%d\n", n);

    return 0;
}