#include <stdio.h>

int main()
{
    long income;
    printf("소득을 입력하세요 : ");
    scanf("%ld", &income);
    int tax;
    printf("소득세율 : ");
    scanf("%d", &tax);

    printf("(공제전)소득세 %ld\n", income * (tax / 100));
}