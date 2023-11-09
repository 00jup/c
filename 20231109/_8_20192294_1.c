
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void getSensorData(double *x, double *y, double *z)
{
    srand(time(NULL));
    *x = rand() % 100;
    *y = rand() % 100;
    *z = rand() % 100;
}

int main()
{
    double a, b, c;
    getSensorData(&a, &b, &c);
    printf("왼쪽 센서과 장애물과의 거리: %lf\n중간 센서과 장애물과의 거리: %lf\n오른쪽 센서과 장애물과의 거리: %lf\n", a, b, c);
}