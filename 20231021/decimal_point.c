#include <stdio.h>
#include <limits.h>

int main()
{

    float numb;
    numb = 1.23456789;
    printf("%20.4f\n", numb);
    printf("%ld\n", LONG_MAX);
    printf("%lx\n", LONG_MAX);
    int hexa = 255;
    printf("%x\n", hexa);
    hexa = ~hexa;
    hexa += 0x01;
    printf("%x\n", hexa);
    printf("%d\n", hexa);

    int x, y;
    x = y = 1;
    y = (1 + x++) + 10;
    printf("x %d y %d\n", x, y);

    return 0;
}