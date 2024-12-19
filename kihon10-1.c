#include <stdio.h>

int main(){

    //配列とiを定義する。
    char fig[256];
    int i = 0;

    printf("文字列を入力してください。\n");
    gets(fig);

    //文字数を計算
    while(i < fig[i])
    {
        i++;
        
        if(fig[i] == "\0"){
        break;
     }
    }
    
    //結果の出力
    printf("入力された文字列は%sです。文字数は%d文字です。\n",fig,i);

}