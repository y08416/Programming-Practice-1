#include <stdio.h>

int main(void)
{
    int s; 
    int t; 
    int u; 

    while (1) 
    {
        printf("1日の曜日は?: 日(1) 月(2) 火(3) 水(4) 木(5) 金(6) 土(7):"); 
        scanf("%d", &s); //曜日の選択

        if (s >= 1 && s <= 7) 
        {
            break; //正しい曜日が入力されたらループを終了する
        }
        else 
        {
            printf("正しい曜日を入力してください。\n"); //間違った曜日を入力すると前に戻る
        }
    }

    while (1) 
    {
        printf("月末の日付は?: 28 日以上, 31 日以下：");
        scanf("%d", &t); //日付の入力

        if (t >= 28 && t <= 31) 
        {
            u = t; 
            break; //正しい日付が入力をされたらループを終了する
        }
        else
        {
            printf("正しい日付を入力してください。\n"); //間違った日付を入力すると前に戻る
        }
    }

    printf("SUN MON TUE WED THU FRI SAT\n"); 

    for (int i = 1; i < s; i++) //カレンダーの最初の週の空白を印字する
    {
        printf("    ");
    }

    for (int day = 1; day <= u; day++) //カレンダーの日付の印字
    {
        printf("%3d ", day);

        if ((day + s - 1) % 7 == 0 || day == u) //日付が週の終わりに達したかの判断
        {
            printf("\n");
        }
    }

    return 0;
}