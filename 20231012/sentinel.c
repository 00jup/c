#include <stdio.h>

int main()
{
    int x, y, r;

    printf("두개의 정수를 입력하시오(큰수, 작은수): ");
    scanf("%d %d", &x, &y);
    for (int i = 0; y != 0; i++)
    {

        r = x % y;
        x = y;
        y = r;
    }
    printf("최대 공약수는 %d입니다. \n", x);

    return 0;
}