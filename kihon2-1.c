
#include <stdio.h>

int main(void)
{
int x,y;
 
 printf("二つの整数を入力せよ\n");

 printf("整数x:"); scanf("%d", &x);
 printf("整数y:"); scanf("%d", &y);

 printf("x割るyの商は%d\n", x/y);
 printf("x割るyのあまりは%d\n", x%y);
 
 return 0;
}
  
