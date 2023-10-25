#include <stdio.h>

int main()
{
    char A, B;

    printf("숫자 입력\n");

    scanf("%c %c", &A, &B);

    printf("%d %d", A, B);

    int x, y;
    x = 10, y = (1 + x++) + 10;
    printf("\n%d %d\n", x, y);

    int a = 10, b = 20, c = 30;
    c = --a + b++;
    c = c <= a ? a++ : b--;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}