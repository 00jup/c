#include <stdio.h>

int main()
{
    int score[] = {1, 2, 3, 4, 5, 6};
    int i, size;
    size = sizeof(score) / sizeof(score[0]);

    printf("%d", size);
    int b[size];
    //b = score;
    printf("%d", b);
}