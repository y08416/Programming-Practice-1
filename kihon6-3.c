#include <stdio.h>

#define NUM_STUDENTS 10

int main() {
    // 2x10の二次元配列を宣言し、点数と順位を初期化
    int score_rank[2][NUM_STUDENTS];

    // 1行目に点数を格納
    int scores[NUM_STUDENTS] = {67, 48, 56, 97, 30, 88, 76, 55, 66, 78};
    for (int i = 0; i < NUM_STUDENTS; i++) {
        score_rank[0][i] = scores[i];
        score_rank[1][i] = 0; // 順位を初期化
    }

    // 順位付けを行う
    int rank = 1;
    for (int i = 100; i >= 0; i--) {
        for (int j = 0; j < NUM_STUDENTS; j++) {
            if (score_rank[0][j] == i) {
                score_rank[1][j] = rank;
                rank++;
                break;
            }
        }
    }

    // 結果を表示
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d %d\n", score_rank[0][i], score_rank[1][i]);
    }

    return 0;
}