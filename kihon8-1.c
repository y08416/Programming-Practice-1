#include <stdio.h>
double multFloat(double , double );
double result;

int main(){
    double x;
    double y;

    while(1){

    printf("最初の数:");
    scanf("%lf", &x);
    printf("つぎの数:");
    scanf("%lf",&y);

        if(x == 0.0 && y == 0.0){
            break;
        }
        printf("%.2f\n",multFloat(x,y));
    }

    return 0;

}

double multFloat(double x, double y){
    result = x * y;
    return result;
}