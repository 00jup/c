#include <stdio.h>
#include <math.h>

int main(void)
{

    double a, b;
    a = (0.3 * 3) + 1;
    b = 1;
    printf("a==b의 결과: %d\n", a == b);

    printf("fabs(a-b)<0.0001의 결과: %d \n", fabs(a - b) < 0.0000000001);
    return 0;
}