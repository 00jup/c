#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double mile, km;

    if (argc != 2)
    {
        printf("사용법: mile2km 마일\n");
        return 1;
    }

    mile = atof(argv[1]);
    km = mile * 1.609;
    printf("%f마일은 %f킬로미터입니다.\n", mile, km);

    return 0;
}