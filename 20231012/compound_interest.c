#include <stdio.h>

int main()
{
    double money = 1.0;

    for (int i = 2; i <= 30; i++)
    {
        money *= 2.0;
        printf("%d날 현재 금액 = %.0lf\n", i, money);
    }
    return 0;
}