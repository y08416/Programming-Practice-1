#include <stdio.h>

void run(char c, int length);

int main() {
    int height;

   
    do {
        printf("正の整数: ");
        scanf("%d", &height);

        if (height <= 0) {
            printf("正の整数を入力してください。\n");
        }

    } while (height <= 0);

    
    for (int i = 1; i <= height; i++) {
        
        int s = i - 1;

        
        int a = height - i + 1;


        printf("%2d: ", i);

        
        run(' ', s);

        
        run('*', a);

        
        printf("\n");
    }

    return 0;
}


void run(char c, int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", c);
    }
}
