#include <stdio.h>

typedef struct 
{
    int number;
    char name[50];
    int year;
    int height;
    int weight;
    char from[50];
    char character[50];
} Profile;

// プロトタイプ宣言
void swap(Profile *x, Profile *y);
void sort(Profile code[], int n);
void print_data(Profile data[]);

int main() {
    // プロファイルのデータ
    Profile data[5] = {
        {0, "立命 太郎", 20, 175, 70, "滋賀", "英会話"},
        {1, "草津 二郎", 22, 180, 65, "京都", "プログラミング"},
        {2, "衣笠 花子", 21, 160, 52, "大阪", "スポーツ全般"},
        {3, "茨木 華子", 20, 162, 55, "京都", "プログラミング"},
        {4, "滋賀 三郎", 22, 168, 70, "大阪", "英語"}
    };

    // データのソートと表示
    sort(data, 5);
    print_data(data);				
    return 0;
}

// プロファイルの入れ替え
void swap(Profile *x, Profile *y) {
    Profile a = *x;
    *x = *y;
    *y = a;
}

// バブルソートによる降順ソート
void sort(Profile std[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // 身長で比較して入れ替え
            if (std[j].height < std[j + 1].height) {
                swap(&std[j], &std[j + 1]);
            }	
        }
    }
}

// データの表示
void print_data(Profile data[]) {
    for (int i = 0; i < 5; i++) {
        // プロファイルの各要素を表示
        printf("番号:%d\n", data[i].number);
        printf("名前:%s\n", data[i].name);
        printf("年齢:%d\n", data[i].year);
        printf("身長:%d\n", data[i].height);
        printf("体重:%d\n", data[i].weight);
        printf("出身地:%s\n", data[i].from);
        printf("特技:%s\n", data[i].character);	
        putchar('\n');
    }
} 