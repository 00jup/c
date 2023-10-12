#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
        sum += i;
    printf("1부터 9까지 정수의 합 = %d\n", sum);
}