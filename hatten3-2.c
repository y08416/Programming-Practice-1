#include <stdio.h>

int main(void){

int x;

int x1, x2, x3;

printf("現在の成績情報は, 学生証番号:1234, 英語:94点, 数学78点です。\n");

printf("[0]学生証番号の修正\n[1]英語の点数の修正\n[2]数学の点数の修正\nどのコマンドを実行しますか?");

scanf("%d", &x);

switch(x){

case 0:
 printf("新しい学生証番号を入力してください:");
 scanf("%d", &x1);
 printf("現在の成績情報は, 学生証番号:%d, 英語:94点, 数学:78点です。",x1);
 break;

case 1:
 printf("新しい英語の点数を入力してください:");
 scanf("%d", &x2);
 if(x2>=0 && x2<=100){
 printf("現在の成績情報は, 学生証番号:1234, 英語:%d点, 数学78点です。",x2);}
 else{printf("現在の成績情報は, 学生証番号:1234, 英語:94点, 数学78点です。");} 
 break;

case 2:
 printf("新しい数学の点数を入力してください:");
 scanf("%d", &x3);
 if(x3>=0 && x3<=100){
 printf("現在の成績情報は, 学生証番号:1234, 英語:94点, 数学%d点です。",x3);}
 else{printf("現在の成績情報は, 学生証番号:1234, 英語:94点, 数学78点です。");}
 break;

default:
 printf("該当するコマンドがないため成績情報は更新されませんでした。");
 break;

}

}
