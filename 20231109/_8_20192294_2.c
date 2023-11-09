#include <stdio.h>
#include <stdlib.h>

int sum(int *res, int *x, int *y)
{
    *res = *x + *y;
    return *res;
}

int sub(int *res, int *x, int *y)
{
    *res = *x - *y;
    return *res;
}
int main()
{
    int A, B;
    int *result = (int *)malloc(sizeof(int));

    printf("A, B를 입력하세요: ");
    scanf("%d %d", &A, &B);
    int *pi1 = NULL, *pi2 = NULL;
    pi1 = &A, pi2 = &B;
    printf("두 수의 합 : %d \n", sum(result, pi1, pi2));
    printf("두 수의 합 : %d \n", sum(result, &A, &B));
    printf("두 수의 차 : %d \n", sub(result, pi1, pi2));
    printf("두 수의 차 : %d \n", sub(result, &A, &B));
}