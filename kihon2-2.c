#include<stdio.h>

int main(void)
{
 double x,y;

 printf("二つの整数を入力せよ\n");

 printf("不動少数点数x:"); scanf("%lf", &x);
 printf("不動少数点数y:"); scanf("%lf", &y);

 printf("xとyの積は%lfである",  x * y);

 return 0;
}



