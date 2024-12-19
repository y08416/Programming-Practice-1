#include <stdio.h>
#include <string.h>

// 構造体Salaryの定義
struct Salary {
    int base;
    int housing;
    int family;
};

// 構造体Profileの定義
struct Profile {
    int id;
    char name[30];
    int age;
    int years;
    struct Salary salary;
};

int main() {
    // 初期データを含む構造体配列の定義
    struct Profile profiles[] = {
        {1001, "立命五郎", 40, 20, {300000, 15000, 20000}},
        {1002, "草津太郎", 38, 18, {280000, 15000, 12000}},
        {1003, "滋賀次郎", 28, 5, {200000, 12000, 0}},
        {1004, "衣笠佳子", 26, 5, {200000, 15000, 12000}},
        {1005, "茨木三郎", 22, 2, {180000, 8000, 0}},
    };

    int input_id;
    printf("社員番号を入力して下さい\n");
    scanf("%d", &input_id);

    // 入力された社員番号に対応するデータを検索
    int found = 0;
    for (int i = 0; i < sizeof(profiles) / sizeof(profiles[0]); i++) {
        if (profiles[i].id == input_id) {
            // 社員が見つかった場合
            found = 1;
            printf("名前：%s，年齢：%d 歳，勤続年数：%d 年，給与：%d 円．\n",
                   profiles[i].name, profiles[i].age, profiles[i].years,
                   profiles[i].salary.base + profiles[i].salary.housing + profiles[i].salary.family);
            break;
        }
    }

    // 該当者がいない場合
    if (!found) {
        printf("該当者なし．\n");
    }

    return 0;
}
