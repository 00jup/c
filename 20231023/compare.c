#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.1;
    double y = 0.01;

    printf("x-y : %.24lf\n", fabs(x - y));
    printf("x-y = %.24lf", x - y);
    return 0;
}
