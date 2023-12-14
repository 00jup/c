#include <string.h>
#include <stdio.h>

int main()
{
    char *array[] = {"abcd", "abcd2", "abcd3", "abcd4"};
    printf("%s\n", array[1]);
    printf("%s\n", *(array + 1));

    strcpy(array[1], "hello");
    *(array + 2) = "hello2";

    printf("%s\n", array[1]);
    printf("%s\n", *(array + 2));
}