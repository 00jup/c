#include <stdio.h>

typedef struct student
{
    int number;
    char name[10];
    int id;
} STUDENT;

int main()
{
    STUDENT s;
    STUDENT *p;
    p = &s;
    scanf("%d", &(p->number));
    scanf("%d", &(p->id));
    while (getchar() != '\n')
        ;

    scanf("%[^\n]s", p->name);

    printf("%d %d %s\n", p->number, p->id, p->name);
}