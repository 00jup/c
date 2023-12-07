#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct student
{
    int number;
    char name[10];
    double grade;
} STU;

int main()
{
    STU s[10] = {{3, "박정욱", 4.0}, {1, "박", 3.0}};

    printf("number : %d\n", s->number);
    printf("name : %s\n", s->name);
    printf("grade : %lf\n", s->grade);

    printf("number : %d\n", s[1].number);
    printf("name : %s\n", (s + 1)->name);
    printf("grade : %lf\n", (s + 1)->grade);
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        printf("%d  ", rand() % 10);
    }
    return 0;
}