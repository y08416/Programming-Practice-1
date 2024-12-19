#include <stdio.h>

int main(void){

int x,y;

printf("2001年の8月の曜日を調べます。");

printf("調べたい日付は？");

scanf("%d", &x);

y=(x+3-1)%7;

if(x<=0){
 printf("2001年8月は1日から始まります。");
 }
 else if(x>=32){
 printf("2001年8月には31日までしかありません。");
 }
 else{

switch(y){

case 0: 
 printf("2001年8月%d日は日曜日です。", x);
 break;

case 1:
 printf("2001年8月%d日は月曜日です。", x);
 break;

case 2:
 printf("2001年8月%d日は火曜日です。", x);
 break;

case 3:
 printf("2001年8月%d日は水曜日です。", x);
 break;

case 4:
 printf("2001年8月%d日は木曜日です。", x);
 break;

case 5:
 printf("2001年8月%d日は金曜日です。", x);
 break;

case 6:
 printf("2001年8月%d日は土曜日です。", x);
 break;

}

return 0;

}

} 
