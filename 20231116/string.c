#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "HELLO";
    //*str = "World";
    strcpy(str, "World");
    printf("%s\n", str);
}