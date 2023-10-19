#include <stdio.h>

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else if (x < y)
    {
        return y;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int a, b;
    int result;
    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &a, &b);
    result = max(a, b);
    if (result != 0)
        printf("더 큰 값은 %d 입니다.\n", result);
    else
        printf("값이 동일합니다.\n");
}