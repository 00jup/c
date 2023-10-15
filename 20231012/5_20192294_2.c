#include <stdio.h>

void main()
{
    int N;

    printf("정수를 입력하시오: ");
    scanf("%d", &N);

    int sum = 0;
    // 2로 나누고 나머지가 1이면,,
    for (int i = 1; i <= N; i += 1)
        sum += i;

    printf("1부터 %d까지의 홀수 합은 %d 입니다.\n", N, sum);
}