#include <stdio.h>

int main()
{
    int A;
    printf("숫자 입력 : ");
    scanf("%d", &A);

    (A % 2 == 0) ? printf("짝수 입니다.\n") : printf("홀수 입니다.\n");
}