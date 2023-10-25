#include <stdio.h>

int main()
{
    int z = 33;
    int x = 10;
    z /= x++ + 20;

    printf("x : %d z : %d\n", x, z);
    return 0;
}
