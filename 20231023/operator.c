#include <stdio.h>

int main()
{
    int x, y;
    x = 1;
    y = 10;
    printf("x : %d\n", x++);
    printf("y : %d\n", y = x);
    int z = 0;
    z = x++ + y++;
    printf("%d\n", z);
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    int a = 10, b = 20, c = 30;
    c = --a + b++;
    c = c <= a ? a++ : b--;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);
}