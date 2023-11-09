#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    // int score[SIZE];

    // srand(time(NULL));
    // for (i = 0; i < SIZE; i++)
    // {
    //     score[i] = rand() % 100;
    // }
    // for (int i = 0; i < SIZE; i++)
    //     printf("score[%d] = %d\n", i, score[i]);

    // int score[SIZE] = {
    //     31,
    //     61,
    // };
    // for (int i = 0; i < SIZE; i++)
    //     printf("score[%d] = %d\n", i, score[i]);

    int score[SIZE];

    for (int i = 0; i < SIZE; i++)
        printf("score[%d] = %d\n", i, score[i]);
    // 1. 초기화를 잘못하거나

    // 2. 값을 해제 안 했거나.

    return 0;
}