#include <stdio.h>
#include <time.h>

#define FILENAME "datatime.dat"

// ファイルに時刻を書き込む関数
void putData(char filename[]) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("ファイルのオープンに失敗しました");
        return;
    }

    // 現在の時刻を取得
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // ファイルに時刻を書き込む
    fprintf(file, "%02d %02d %02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

    fclose(file);
}

// ファイルから時刻を読み取り、標準出力に表示する関数
void getData(char filename[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("本プログラムを実行するのは初めてですね．\n");
        return;
    }

    int hour, min, sec;
    fscanf(file, "%d %d %d", &hour, &min, &sec);

    printf("前回は%02d 時%02d 分%02d 秒でした．\n", hour, min, sec);

    fclose(file);
}

int main() {
    getData(FILENAME);  // ファイルから時刻を読み取り表示
    putData(FILENAME);  // ファイルに現在の時刻を書き込み

    return 0;
}
