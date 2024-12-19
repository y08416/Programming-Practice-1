#include <stdio.h>

int main(void)
{

double x,y;

printf("身長を入力せよ:");

scanf("%lf", &x);

printf("体重を入力せよ:");

scanf("%lf", &y);

double std=(x-100)*0.9;

printf("身長:%.1lf\n 体重:%.1lf\n 標準体重は%.1lfkgです\n", x, y, std);

if((y-std)>8)

printf("少し太っています。");

return 0;

}
