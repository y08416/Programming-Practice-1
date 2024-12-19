#include <stdio.h>

// 構造体Profileの宣言
struct Profile {
    int student_id;
    char name[20];
    char romaji[20];
    char address[50];
};

// 関数print_dataのプロトタイプ宣言
void print_data(struct Profile data[], int size);

int main() {
    // 構造体Profileの配列を定義
    struct Profile data[] = {
        {1, "立命　太郎", "Ritumei Taro", "滋賀県草津市野路東1-1-1"},
        {2, "衣笠　花子", "Kinugasa Hanako", "京都府京都市北区等持院北町56-1"},
        {3, "朱雀　二郎", "Suzaku Jiro", "京都府京都市中京区西ノ京朱雀町1"}
    };

    // 関数print_dataを呼び出し、構造体の内容を表示
    print_data(data, sizeof(data) / sizeof(data[0]));

    return 0;
}

// 関数print_dataの定義
void print_data(struct Profile data[], int size) {
    for (int i = 0; i < size; i++) {
        printf("学生番号：%d\n", data[i].student_id);
        printf("名前：%s\n", data[i].name);
        printf("名前（ローマ字）：%s\n", data[i].romaji);
        printf("住所：%s\n\n", data[i].address);
    }
}
