#include <stdio.h>

void sub()
{

    static int scount = 0;
    register int acount = 0;

    printf("scount = %d\t", scount);
    printf("acount = %d\n", acount);

    scount++;
    acount++;
}

int main()
{

    sub();
    sub();
    sub();
    sub();
    sub();

    return 0;
}