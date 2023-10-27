#include <stdio.h>
#include <limits.h>
int x;

int sub()
{
    for (x = 0; x < 2; x++)
        printf("*");
}
int main()
{
    for (x = 0; x < 4; x++)
        sub();
    return 0;
}
