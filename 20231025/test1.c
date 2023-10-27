#include <stdio.h>

int is_big(int x, int y)
{
    int result;
    result = x > y ? x : y;
    return result;
}

int main()
{
    int a, b, result;
    scanf("%d %d", &a, &b);

    result = is_big(a, b);
    printf("%d", result);

    return 0;
}