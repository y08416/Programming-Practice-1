#include <stdio.h>

// 学生情報を格納する構造体
struct Profile {
    int number;          // 学生番号
    char Jname[20];      // 名前（日本語）
    char Ename[30];      // 名前（ローマ字）
    char address[50];    // 住所
};

int main() {
    // Profile構造体を型とする3つの要素を持つ配列を定義し、初期化
    struct Profile data[3] = {
        {1, "立命 太郎", "Ritumei Taro", "滋賀県草津市野路東1-1-1"},
        {2, "衣笠 花子", "Kinugasa Hanako", "京都府京都市北区等持院北町56-1"},
        {3, "朱雀 二郎", "Suzaku Jiro", "京都府京都市中京区西ノ京朱雀町1"}
    };

    // 各学生の情報を印字
    for (int i = 0; i < 3; i++) {
        printf("学生番号：%d\n", data[i].number);
        printf("名前：%s\n", data[i].Jname);
        printf("名前（ローマ字）：%s\n", data[i].Ename);
        printf("住所：%s\n\n", data[i].address);
    }

    return 0;
}
