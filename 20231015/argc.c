#include <stdio.h>
int main(int argc, char **argv)
{
    printf("받은 인자의 개수 : %d \n", argc);
    printf("이 프로그램의 경로 : %s \n", *argv);
    printf("이 프로그램의 경로 : %s \n", argv[0]);
    printf("이 프로그램의 경로 : %s \n", argv[1]);
    printf("이 프로그램의 경로 : %s \n", argv[2]);

    return 0;
}