#include <stdio.h>
#include <string.h>

typedef struct student
{
    int number;
    char name[10];
    double grade;
} STU;

int main()
{
    STU s;

    s.number = 200;
    // s.name = "박정욱";
    // 이렇게 하면 안 됨!!
    strcpy(s.name, "박정욱");
    s.grade = 4.3;
    // printf("입력 : ");
    // scanf("%d", &s.number);
    // scanf("%s", s.name);
    // scanf("%lf", &s.grade);
    STU *p;
    p = &s;

    printf("number : %d\n", s.number);
    printf("name : %s\n", s.name);
    printf("grade : %lf\n", s.grade);

    return 0;
}