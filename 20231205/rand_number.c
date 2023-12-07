#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int rand_number[10] = {0};

    printf("sizeof rand_number %d\n", sizeof(rand_number) / 4);

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] %d\t", i, rand_number[i]);
    }
    return 0;
}