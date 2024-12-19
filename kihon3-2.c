#include <stdio.h>

int main(void)
{

double x;

printf("点数を入力せよ:");

scanf("%lf", &x);

if(0<x && x<59){
 printf("あなたの評価値はFです。");
 }

 else if(60<x && x<69){
 printf("あなたの評価値はCです。");
 } 

else if(70<x && x<79){
 printf("あなたの評価値はBです。"); 
 } 
else if(80<x && x<89){
 printf("あなたの評価値はAです。");
 } 

else if(90<x && x<100){
 printf("あなたの評価値はA+です。");
 } 
else {

 printf("入力エラーです。");

 }


return 0;

}



