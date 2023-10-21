#include <stdio.h>

int main()
{
    int year;
    printf("연도를 입력하시오 : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d년은 윤년입니다.\n", year);
    }
    else
    {
        printf("윤년아님. \n");
    }
}