#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main(void)
{

    int x = 2;

    printf("3^2 = %d\n", SQUARE(2));

    int number[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("%d, %d\n", i, number[i]);
    }
    return 0;
}