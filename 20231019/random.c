#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void rand_func()
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", 1 + rand() % 45);
    }
    printf("\n");
}

int main()
{
    rand_func();

    return 0;
}