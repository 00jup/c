#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "BlockDMask. He is a smart man";
    char str2[] = "smart";
    char *ptr = strstr(str1, str2);

    printf("strstr example : %s\n", ptr);
}