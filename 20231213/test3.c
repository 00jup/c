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
    printf("%d \n %s \n값 변경 : \n\n", pi[1], pc);
    int count = 0;
    // scanf("%d %[^\n]s", pi, pc);
    // getchar();
    for (int i = 0; Test1[i] == 0; i++, count++)
    {
        printf("%d ", Test1[i]);
    }
    printf("%d", count);
}