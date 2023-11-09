#include <stdio.h>

int main()
{
    int arr[][5] = {0, 1, 2, 3, 4, 5, 7, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16}; // 4행 5열의 2차원 배열 //뒤에 0 0 0 으로 채워짐

    // 배열 출력
    printf("%d\n", **arr);
    printf("%d\n", *(*(arr) + 1));
    printf("%d\n", *(*(arr) + 2));
    printf("%d\n", *(*(arr) + 3));
    printf("%d\n", **(arr + 1));
    printf("%d\n", *(*(arr + 1) + 1));
    printf("%d\n", *(*(arr + 1) + 2));

    printf("%d\n", **(arr + 2));
    printf("%d\n", **(arr + 3));
    return 0;
}
