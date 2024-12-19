#include <stdio.h>

int main() {
int input;

printf("月曜：１，日曜：７\n");
printf("曜日を入力してください：");
scanf("%d",&input);
switch(input){
    case 1 : printf("平日です"); break;
    case 2 : printf("平日です"); break;
    case 3 : printf("平日です"); break; 
    case 4 : printf("平日です"); break;
    case 5 : printf("平日です"); break; 
    case 6 : printf("休日です"); break;
    case 7 : printf("休日です");break;
    default : printf("1〜7の範囲で入力してください。"); break;
 }
 return 0;

}