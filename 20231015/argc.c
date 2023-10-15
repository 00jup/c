#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    printf("받은 인자의 개수 : %d \n", argc);
    printf("이 프로그램의 경로 : %s \n", *argv);
    printf("이 프로그램의 경로 : %s \n", argv[0]);
    printf("이 프로그램의 경로 : %s \n", argv[1]);
    printf("이 프로그램의 경로 : %s \n", argv[2]);
    int HelloWorld;
    HelloWorld = 1;
    printf("%d ", HelloWorld);
    float infi1 = INFINITY;
    printf("%f\n", infi1);

    float infi = -INFINITY;
    printf("%f\n", infi);
    int i = 0;
    for (; i < 10; i++)
    {
        printf("helel");
    }
    return 0;
}