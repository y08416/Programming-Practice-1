#include <stdio.h>
#include <stdlib.h>

#define UNPLACED (-1)
#define EDGE_TILES (3)
#define NUM_TILES (EDGE_TILES * EDGE_TILES)

int put_germ(int size);

int put_germ(int size)
{

    char key;
    int location;

    printf("1文字入力:");
    scanf("%c", &key);
    printf("入力文字は16進数で表現すると0x%xで、これをもとに細菌の位置を決定\n", key);
    srand((unsigned int)key);
    location = rand() % size + 1;
    return location;
}

int check_position(int foot, int size, int already)
{
    if ((foot < 1) || (foot > size))
    {
        printf("足が置けるタイルは1から%dです。\n", size);
        return 0;
    }
    else if (already == foot)
    {
        printf("タイル%dにはすでに別の足が置かれています。\n", already);
        return 0;
    }
    else
        return 1;
}

int put_foot(int size, int already)
{
    int position;
    do
    {
        printf("位置[1-%d]:", size);
        scanf("%d", &position);

    } while (check_position(position, size, already) == 0);
    return position;
}

int judge_infection(int left, int right, int germ)
{
    if ((germ - left) * (germ - right) == 0)
        return 1;
    else
        return 0;
}

void draw_line(void)
{
    printf("+-+-+-+\n");
}

void fill_position(int row, int left, int right, int germ)
{
    int start = 3 * row - 2;
    int end = 3 * row;

    printf("|");

    for (int i = start; i <= end; i++)
    {
        if (i == left)
            printf("L");
        else if (i == right)
            printf("R");
        else if (i == germ)
            printf("@");
        else
            printf("%d", i);

        if (i != end)
            printf("|");
    }

    printf("|\n");
}

void draw_feet(int left, int right, int germ)
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        draw_line();
        printf("\n");
        fill_position(i, left, right, germ);
        printf("\n");
    }
    draw_line();
    printf("\n");
    return;
}

int main(void)
{
    int germ;
    int left, right;

    germ = put_germ(NUM_TILES);
    printf("左足");
    left = put_foot(NUM_TILES, UNPLACED);
    printf("右足");
    right = put_foot(NUM_TILES, left);
    if (judge_infection(left, right, germ) == 1)
        printf("感染してしまいました。");
    else
        printf("無事です。");
    printf("細菌はタイル%dにいました\n", germ);

    draw_feet(left, right, germ);
    return 0;
}