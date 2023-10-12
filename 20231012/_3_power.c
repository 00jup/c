#include <stdio.h>

int main()
{
    int number;

    printf("숫자 입력");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}