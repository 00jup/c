#include <stdio.h>

enum days
{
    A = 7,
    B = 1,
    C,
    D,
    E,
    F,
    G = 6
};

int main()
{
    enum days d;
    d = G;
    printf("%d", d);
}