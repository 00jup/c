#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char words[] = "Hello";
    for (int i = 0; words[i] != NULL; i++)
    {
        printf("%c", words[i]);
        words[i] = tolower(words[i]);
        printf("%c\n", words[i]);
    }
}