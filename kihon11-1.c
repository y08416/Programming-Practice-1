#include <stdio.h>

int main(){
    int a;
    int *b;
    b = &a;

    printf("変数aの値を入力してください:");
    scanf("%d", &a);

    printf("aの中身は%dです。\n", *b);
    printf("aのアドレスは%pです。", b);

}