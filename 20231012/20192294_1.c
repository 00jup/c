#include <stdio.h>

int main()
{
    int N;
    int sum = 0;

    while (N != -1)
    {
        printf("값을 입력하시오: ");
        scanf("%d", &N);
        sum += N;
    }

    sum += 1;
    printf("합계는 %d 입니다.\n", sum);

    return 0;
}