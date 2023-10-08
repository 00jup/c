#include <stdio.h>

int main()
{
    int income, deduction;
    double tax;
    printf("소득금액을 입력하세요: ");
    scanf("%d", &income);

    if (income < 12000000)
    {
        tax = 6.0;
        deduction = 0;
    }
    else if (income > 12000000 && income <= 46000000)
    {
        tax = 15.0;
        deduction = 1080000;
    }
    else if (income > 46000000 && income <= 88000000)
    {
        tax = 24.0;
        deduction = 5220000;
    }
    else if (income > 88000000 && income <= 150000000)
    {
        tax = 35.0;
        deduction = 14900000;
    }
    else if (income > 150000000 && income <= 300000000)
    {
        tax = 38.0;
        deduction = 19400000;
    }
    else if (income > 300000000 && income <= 500000000)
    {
        tax = 40.0;
        deduction = 25400000;
    }
    else if (income > 500000000 && income <= 1000000000)
    {
        tax = 42.0;
        deduction = 35400000;
    }
    else if (income > 1000000000)
    {
        tax = 45.0;
        deduction = 65400000;
    }
    printf("소득세율: %d%%\n", (int)tax);
    printf("(공제전)소득세: %d\n", (int)((income * tax) / 100.0));
    printf("누진공제액: %d\n", deduction);
    printf("산출세액: %d\n", (int)((income * tax / 100) - deduction));
}