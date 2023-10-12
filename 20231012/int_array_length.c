#include <stdio.h>

int main()
{

    int n, sum = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
}