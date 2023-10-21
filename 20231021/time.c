#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("%ld\n", time(NULL));
        sleep(1);
    }

    return 0;
}