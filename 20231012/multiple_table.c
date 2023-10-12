#include <stdio.h>

int main()
{
    int n;
    int a = 1;

    printf("출력하고 싶은 단을 입력하시오: ");
    scanf("%d", &n);
    while (a <= 9)
    {
        printf("%d*%d = %d\n", n, a, n * a);
        a++;
    }
}