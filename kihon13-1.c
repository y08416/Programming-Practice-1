#include <stdio.h>

// 構造体の定義
struct Product {
    char code[10];
    char name[50];
    int price;
};

int main() {
    // 構造体型の変数を宣言
    struct Product product;

    // キーボードからの入力
    printf("商品番号を入力して下さい: ");
    scanf("%s", product.code);

    printf("商品名を入力して下さい: ");
    scanf("%s", product.name);

    printf("価格を入力して下さい: ");
    scanf("%d", &product.price);

    // 入力されたデータの印字
    printf("商品番号：%s\n", product.code);
    printf("商品名：%s\n", product.name);
    printf("価格：%d\n", product.price);

    return 0;
}
