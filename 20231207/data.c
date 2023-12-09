#include <stdio.h>
#include <string.h>

int main()
{
    printf("컴파일 날짜=%s\n", __DATE__);
    int array1[10] = {0};
    int array2[10];

    strcpy(array2, array1);

    array2[1] = 1000;
    printf("%d\n", array1[1]);
    printf("%d\n", array2[1]);

    return 0;
}