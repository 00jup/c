#include <stdio.h>

int main(void)
{
    int i = 100;
    int *p = &i;
    int **q = &p;

    *p = 200;
    printf("%d\n", **q);

    return 0;
}