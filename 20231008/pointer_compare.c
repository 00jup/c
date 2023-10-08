#include <stdio.h>

int main()
{
    int none_pointer;
    int *pointer;
    int **double_pointer;

    none_pointer = 100;
    pointer = &none_pointer;
    double_pointer = &pointer;

    // 주소 확인
    printf("none_pointer 값: %d\n", none_pointer);
    printf("&none_pointer 값: %p\n", (void *)&none_pointer);
    printf("none_pointer 값 (pointer를 통해): %d\n", *pointer);
    printf("pointer 값 (즉, none_pointer의 주소): %p\n", (void *)pointer);
    printf("&pointer의 주소: %p\n", (void *)&pointer);
    printf("pointer의 값 (double_pointer를 통해): %p\n", (void *)*double_pointer);
    printf("double_pointer의 값 (즉, pointer의 주소): %p\n", (void *)double_pointer);
    printf("&double_pointer 주소: %p\n", (void *)&double_pointer);

    return 0;
}
