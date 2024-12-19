#include <stdio.h>
#include <string.h>

int main() {
    // 要素数3のcharへのポインタによる配列ptrを宣言文で初期化
    char *ptr[] = {"BKC", "NojiHigashi", "Kusatsu"};

    // 3行16列のchar型変数による2次元配列strを用意
    char str[3][16];

    // strの各行にptrの各文字列をstrcpy関数を用いてコピー
    for (int i = 0; i < 3; ++i) {
        strcpy(str[i], ptr[i]);
        printf("%d つめの文字列%s をコピーしました．\n", i + 1, str[i]);
    }

    // strにおいて”BKC”の先頭文字Bのアドレスと，”Kusatsu”が含まれる行の最後の要素のアドレスの差から領域を計算し表示
    printf("str の文字列が占める領域は%d\n", (int)(&str[2][15] - &str[0][0]) + 1);

    // ptrにおいて”BKC”の先頭文字Bのアドレス，”Kusatsu”の末尾のナル文字のアドレスを求め，差から計算して同様に表示
    printf("ptr の文字列が占める領域は%d\n", (int)(&ptr[2][strlen(ptr[2])] - &ptr[0][0]) + 1);

    return 0;
}