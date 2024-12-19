#include <stdio.h>

void sort(int *left, int *right) {
    int tmp;

    if (*left > *right) {
        tmp = *right;
        *right = *left;
        *left = tmp;
    } else if (*right > *left) {
        //何もしない
    }
   
}

int main() {
    int a;
    int b;

    printf("最初の数字を入力してください:");
    scanf("%d", &a);
    printf("二つ目の数字を入力してください:");
    scanf("%d", &b);

    sort(&a, &b); 

    printf("大きい数字は%dです。",  b);

    return 0; 
}
