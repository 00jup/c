#include <stdio.h>

int main()
{
    double f_temp;
    double c_temp;

    printf("온도 입력 ");
    scanf("%lf", &f_temp);
    c_temp = 5 / 9.0 * (f_temp - 32);
    printf("온도는 %f", c_temp);

    return 0;
}