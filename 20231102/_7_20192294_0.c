#include <stdio.h>

int main()
{
    char choice;

    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        choice = getchar();
        getchar();
        if (choice == 'y')
            printf("예약 처리를 진행한다.\n");
        else if (choice == 'n')
            printf("예약을 취소한다.\n");
        else
            break;
    }
    return 0;
}
