#include<stdio.h>

int main(void)
{
double num1=1, num2=0; /*代入*/

double num3=num2+0.1;
double num4=num3+0.1;
double num5=num4+0.1;
double num6=num5+0.1;
double num7=num6+0.1;
double num8=num7+0.1;
double num9=num8+0.1;
double num10=num9+0.1;
double num11=num10+0.1;
double num12=num11+0.1;

printf("num1-num2=%.30f \n",num1-num12); /*誤差を求める*/

return 0;

}



 
