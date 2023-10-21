#include <stdio.h>

int main()
{
    int x, y;
    x = y = 1;
    int sum = 0;
    sum = -++x + y--;

    printf("x %d y %d sum %d", x, y, sum);
}