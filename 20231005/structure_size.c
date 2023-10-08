#include <stdio.h>

typedef struct Person
{
    char a[10];
    int b[4];
    char c;
    int d;
    double e;
    char f;
} Person;
int main()
{
    printf("%lu\n", sizeof(Person));
}