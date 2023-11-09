#include <stdio.h>
#define SIZE 10

void print_array(int seat[SIZE], int seats[SIZE])
{
    printf("------------------------\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", seat[i]);
    printf("\n");
    printf("------------------------\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", seats[i]);

    printf("\n");
}

int main()
{

    char flag;
    int reserve;
    int seat[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int seats[SIZE] = {0};
    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf("%s", &flag);
        if (flag == 'y')
        {
            print_array(seat, seats);
            printf("몇 번째 좌석을 예약하시겠습니까? ");
            scanf("%d", &reserve);
            if (seats[reserve] == 1)
                printf("이미 예약된 자리입니다.\n");
            else
            {
                seats[reserve] = 1;
                printf("예약되었습니다.\n");
            }
        }
        else
            break;
    }
    return 0;
}