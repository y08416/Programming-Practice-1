#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int X = 50; // 初期のXの数値
    int Y = 50; // 初期のYの数値

    printf("X の値は%d，Y の値は%d です．\n", X, Y);

    while (X > 0 || Y > 0) {
        int choice;
        printf("X を減らすなら1，Y を減らすなら2 を入力して下さい． ");
        scanf("%d", &choice);

        int num;
        if (choice == 1) {
            printf("X を減らす数を入力(1 以上8 以下) ");
            scanf("%d", &num);
            X -= num;
        } else if (choice == 2) {
            printf("Y を減らす数を入力(1 以上8 以下) ");
            scanf("%d", &num);
            Y -= num;
        }

        printf("あなたが入力した数値は%d です．現在のX の数値は%d，Y の数値は%d です．\n", num, X, Y);

        // AIのターン
        if (X > 0 || Y > 0) {
            int aiChoice = rand() % 2 + 1; // AIがXまたはYを減らすかの選択 (1または2)
            int aiNum = rand() % 8 + 1; // AIが減らす数値 (1から8までのランダムな値)

            if (aiChoice == 1) {
                X -= aiNum;
                printf("AI はX を%d 減らしました．", aiNum);
            } else if (aiChoice == 2) {
                Y -= aiNum;
                printf("AI はY を%d 減らしました．", aiNum);
            }

            printf("現在のX の数値は%d，Y の数値は%d です．\n", X, Y);
        }
    }

    printf("数値が２つとも0 以下になったのであなたの負けです\n");

    return 0;
}
