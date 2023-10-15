#include <stdio.h>

int main()
{
    int a = 0;
start: // 라벨 정의
    if (a < 5)
    {
        printf("a의 값은 %d\n", a);
        a++;
        goto start; // 라벨 'start'로 이동
    }
    return 0;
}
