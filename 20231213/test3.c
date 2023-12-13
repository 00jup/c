#include <stdio.h>
#define SIZE 100
int main()
{
    int Test1[SIZE] = {0, 0, 0, 0, 0, 0};
    char Test2[SIZE] = {"Hello\0 world!\n"};
    printf("%d \n %s \n", Test1[0], Test2);

    char *pc;
    int *pi;

    pc = Test2;
    pi = Test1;
    printf("%d \n %s \n값 변경 : ", pi[1], pc);

    scanf("%d %[^\n]s", pi, pc);
    getchar();
    printf("%d \n %s \n", *pi, pc);
}