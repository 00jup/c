#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char s[] = "language";
    char c = 'g';
    char *p;
    int loc;

    p = strchr(s, c);
    if (p == NULL)
    {
        printf("%c가 발견되지 않았음\n", c);
    }
    else
    {
        loc = (int)(p - s);
        printf("%d\t", p);
        printf("%d\n", s);
        printf("%s에서 첫 번째 %c가 %d에서 발견되었음", s, c, loc);
    }
}