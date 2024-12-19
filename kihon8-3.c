#include <stdio.h>
#include <math.h>

double pow(double a, double x);
float interest(double, int);


int main(){
    double r;
    int y;
    int n;

    printf("利率(r):");
    scanf("%lf",&r);
    printf("金額(y):");
    scanf("%d", &y);
    printf("期間(n):");
    scanf("%d",&n);
    printf("返済金額は:%.0f円です。", y * interest(r , n));

    return 0;
   

}

float interest(double r, int n){
    double result =  pow((1+r/100),n);

    return (float)result;
}