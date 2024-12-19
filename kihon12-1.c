#include <stdio.h>

// 文字列のコピーと同時にコピーした文字数を返す関数
int str_copy_count(char *dest, const char *src)
{
    int count = 0;
    do
    {
        *dest = *src;  // destにsrcの文字をコピー
        if (*src != '\0')
        {
            count++;  // コピーした文字数を増やす
        }
        dest++;  // 次の要素に移動
        src++;   // 次の要素に移動
    } while (*(src - 1) != '\0');  // null終端文字が見つかるまで続ける
    return count;  // コピーした文字数を返す
}

int main(void)
{
    char str_i[256];
    char str_o[256];

    printf("文字列を入力してください(最大255文字):");
    gets(str_i);  
    printf("コピー前の配列str_iは%sです\n", str_i);

    int copied_chars = str_copy_count(str_o, str_i);

    printf("コピー後の配列str_oは%sです\n", str_o);
    printf("コピーした文字数は%d文字です\n", copied_chars);

    return 0;
}
