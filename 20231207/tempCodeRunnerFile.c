#include <stdio.h>
#include <stdlib.h> // exit 함수를 위해 필요함

#define ASSERT(exp)                                                                                                                                              \
    {                                                                                            \
        if (!(exp))                                                                              \
        {                                                                                        \
            printf("가정(" #exp ")이 소스 파일 %s의 %d번째 줄에서 실패.\n", __FILE__, __LINE__); \
            exit(1);                                                                             \
        }                                                                                        \
    } 

int main(void)
{
    int sum = 100;
    ASSERT(sum == 1);

    return 0;
}