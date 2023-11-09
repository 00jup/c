#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void print_array(int price[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d ", i + 1);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("--------------------------------------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d ", price[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("--------------------------------------------\n");
}

int main()
{
    srand(time(NULL));
    int price[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        price[i] = rand() % 100 + 1;
    print_array(price);
    int min = price[0];
    int count;
    for (int i = 0; i < SIZE; i++)
        if (price[i] < min)
        {
            min = price[i];
            count = i;
        }

    printf("\n\n%d번 제품이 %d원으로 가장 저렴합니다.\n", count + 1, min);
}