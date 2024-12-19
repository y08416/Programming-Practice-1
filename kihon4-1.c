#include <stdio.h>

int main(void){

int total;

printf("王様,石の数は?:");

scanf("%d", &total);

int height=0;

int remain=total;

while(remain>=(height+1)*(height+1)){

 int current=(height+1)*(height+1);
 remain -=current;

 height++;

}

 printf("その数の石でできるピラミッドは%d段で, 石は%d個残ります。",height,remain);

return 0;

}
