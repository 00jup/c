#include <stdio.h>

int main()
{

    int i = 10;
    int *p;
    p = &i;

    printf("%d\n", *p);
    printf("p주소 %p\n", p);
    printf("i주소 %p\n", &i);
    printf("%d\n", *p++);
    printf("p주소 %p\n", p);
    printf("i주소 %p\n", &i);
    printf("%d\n", *p--);
    printf("p주소 %p\n", p);
    printf("i주소 %p\n", &i);
    printf("%d\n", (*p)--);
    printf("p주소 %p\n", p);
    printf("i주소 %p\n", &i);
    printf("i 값 %d\n", i);
}