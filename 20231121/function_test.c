#include <stdio.h>

int i = 0;

void return_function()
{
    for (i = 0; i < 10; i++)
    {
        printf("return_function %d\n", i);
    }
    printf("\n");
}

int main()
{
    return_function();
    for (; i < 10; i++)
    {
        printf("main %d \n", i);
    }
}