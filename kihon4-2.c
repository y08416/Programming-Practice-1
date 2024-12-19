#include <stdio.h>

int main()
{
    int n;
    printf("整数を入力してください: ");
    scanf("%d", &n);

    int is_prime = 1; // 素数であることを仮定
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0; // 素数でない
            break;
        }
    }

    if (is_prime)
    {
        printf("%d は素数です。\n", n);
    }
    else
    {
        printf("%d は素数ではありません。\n", n);
    }
}
