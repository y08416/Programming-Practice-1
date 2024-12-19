#include <stdio.h>

int main(void)
{

    int n; // 正n角形の定義
    int r; // 角度
    int m;
    n = 3;

    while (n <= 12)
    {
        r=360/n;
        if(360%n==0){
            printf("正%d角形:",n);
            m=1;
            while(m<=n){
                printf(" %d度 1m",r);
                m++;

 
            }
            printf("\n");

        }
        else{
            //何もしない
        }
        n=n+1;
    }
    return 0;

}
