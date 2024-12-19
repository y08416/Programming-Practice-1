
#include <stdio.h> 


int main(void){

int x;

printf("何月ですか:");

scanf("%d", &x);

if(x==1 || x==2 || x==12){
 printf("冬です。");
 }
 
 else if(3<=x && x<=5){
 printf("春です。");
 }

 else if(6<=x && x<=8){
 printf("夏です。");
 }
 
 else if(9<=x && x<=11){
 printf("秋です。");
 }
 else {
 
 printf("そんな月はありませんよ！！");

 }
 return 0;

}

