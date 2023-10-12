#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random = rand() % 100;
    int number;
    while (1)
    {
        printf("숫자를 입력하세요");
        scanf("%d", &number);
        if (number == random)
        {
            printf("random = %d\n", random);
            printf("정답입니다!!\n");
            break;
        }
    }
}