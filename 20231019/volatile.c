#include <stdio.h>

/// 변수를 건들 때 warning을 띄워준다.
// 만약 있다면 하드웨어를 건드는 프로그램이구나 알 수 있다.

volatile int sum = 1;

int main(void)
{
    int sum = 0;

    printf("sum = %d\n", sum);

    return 0;
}