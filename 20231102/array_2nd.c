#include <stdio.h>

int main()
{
    int arr[][5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; // 4행 5열의 2차원 배열 //뒤에 0 0 0 으로 채워짐

    // 배열 출력
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
