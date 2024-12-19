#include <stdio.h>
#include <string.h>

#define MAX_PROFILES 3

// 構造体の定義
struct Profile {
    int student_id;
    char name[50];
    char email[50];
};

// プロフィールを表示する関数
void print_profile(struct Profile profile) {
    printf("学籍番号：%d\n氏名:%s\nメールアドレス:%s\n", profile.student_id, profile.name, profile.email);
}

// 学籍番号をもとにプロフィールを検索する関数
int search_by_id(struct Profile profiles[], int num_profiles, int search_id) {
    for (int i = 0; i < num_profiles; ++i) {
        if (profiles[i].student_id == search_id) {
            print_profile(profiles[i]);
            return i; // 該当する場合は添字を返す
        }
    }
    return -1; // 該当なしの場合は-1を返す
}

int main() {
    // 構造体の配列を宣言と同時に初期化
    struct Profile profiles[MAX_PROFILES] = {
        {2021, "太郎 立命", "taro@ed.ritsumei.ac.jp"},
        {2022, "次郎 立命", "jiro@ed.ritsumei.ac.jp"},
        {2023, "花子 立命", "hanako@ed.ritsumei.ac.jp"}
    };

    // 全てのプロフィールを表示
    for (int i = 0; i < MAX_PROFILES; ++i) {
        print_profile(profiles[i]);
    }

    // 検索する学籍番号の入力
    int search_id;
    printf("検索する学籍番号：");
    scanf("%d", &search_id);

    // 学籍番号をもとにプロフィールを検索
    int result = search_by_id(profiles, MAX_PROFILES, search_id);

    if (result == -1) {
        printf("＜該当なし＞\n");
    }

    return 0;
}