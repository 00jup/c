#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end;
    start = time(NULL);
    printf("10초가 되면 누르기\n");
    while (1)
    {
        printf("time %lu \n", time(NULL));
        if (getchar())
            break;
    }
    printf("end\n");
    end = time(NULL);
    printf("경과된 시간 %ld\n", end - start);
    return 0;
}