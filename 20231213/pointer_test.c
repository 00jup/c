#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main()
{
    int *p = NULL;
    // p = (int *)malloc(sizeof(int));
    // scanf("%d", p);
    // printf("%d", *p);

    char a[SIZE] = {"helloworld"};
    char b[SIZE];
    // b = a;
    strcpy(b, a);
    puts(a);
    puts(b);
}