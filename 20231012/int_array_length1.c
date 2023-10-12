#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("사이즈 입력: ");
    scanf("%d", &size);

    int *int_array = (int *)malloc(size * sizeof(int));
    int real_size;

    real_size = sizeof(int_array) / sizeof(int_array[0]);
    printf("real_size : %d", real_size);
}