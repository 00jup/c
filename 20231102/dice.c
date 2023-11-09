#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{
    srand(time(NULL));
    int freq[SIZE] = {0};
    int i;

    for (i = 0; i < 1000; i++)
        ++freq[rand() % 6];

    for (i = 0; i < SIZE; i++)
        printf("%3d %3d\n", i, freq[i]);
    int sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum += freq[i];
    }
    printf("%d\n", sum);
    return 0;
}

////////////////// ++a[i]; /////////////// 이렇게 쓰는 것도 되구나..
