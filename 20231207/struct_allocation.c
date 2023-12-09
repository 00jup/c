#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int number;
    char title[50];
};

int main(void)
{
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));
    if (p == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    p[0].number = 1;
    strcpy(p[0].title, "C programming\n");
    p[1].number = 2;
    strcpy(p[1].title, "Python\n");

    printf("%d \n %d\n", p[0].number, p[1].number);
    printf("%s \n %s", p[0].title, p[1].title);

    return 0;
}