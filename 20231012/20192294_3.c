#include <stdio.h>

int main()
{
    int seed_money, interest, duration;
    double sum;

    printf("원금: ");
    scanf("%d", &seed_money);
    printf("이율(%%): ");
    scanf("%d", &interest);
    printf("기간(년): ");
    scanf("%d", &duration);

    printf("================\n");
    printf("연도 원리금\n");
    printf("================\n");
    //    for (int i = 1; i++; i <= duration)
    sum = seed_money;
    for (int i = 1; i <= duration; i++)
    {
        sum = sum + sum * interest / 100;
        printf("%d    %.1lf\n", i, sum);
    }

    return 0;
}