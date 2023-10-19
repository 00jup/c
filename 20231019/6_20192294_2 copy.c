#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int calculator(int button)
{
    double num;
    double result;
    if (button == 6)
    {
        return 0;
    }
    printf("점수를 입력하시오: ");
    scanf("%lf", &num);
    /// int가 아니라 double로 받아야 하는구나...

    switch (button)
    {
    case 1:
        result = sin(num);
        break;
    case 2:
        result = cos(num);
        break;
    case 3:
        result = tan(num);
        break;
    case 4:
        result = sqrt(num);
        break;
    case 5:
        result = factorial(num);
        break;
    }
    printf("결과 = %.2lf\n", result);
    return 1;
}

int main()
{
    printf("1. 싸인\n");
    printf("2. 코싸인\n");
    printf("3. 탄젠트\n");
    printf("4. 제곱근\n");
    printf("5. 팩토리얼\n");
    printf("6. 종료\n\n");

    int button;
    int result;

    printf("선택해주세요 : ");
    scanf("%d", &button);
    printf("\n");
    calculator(button);

    /// function
}