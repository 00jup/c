#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main(void)
{

    int x = 2;

    printf("3^2 = %d\n", SQUARE(2));
    printf("3^2 = %d\n", SQUARE(++x));

    return 0;
}