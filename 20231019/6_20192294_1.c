#include <stdio.h>
#include <string.h>

double convert(char menu)
{

    double result, cels, fah;
    printf("hello conver\n");
    if (menu == 'c')
    {
        printf("섭씨온도: ");
        scanf("%lf", cels);
        fah = cels * 1.8 + 32;
        printf("화씨온도: %.3lf", fah);
        printf("=========================\n");
    }
    else if (menu == 'f')
    {
        printf("화씨온도: ");
        scanf("%lf", fah);
        cels = (fah - 32) / 1.8;
        printf("섭씨온도: %.3lf", cels);
        printf("=========================\n");
    }
    else if (menu == 'q')
    {
        return 0;
    }

    return result;
}

int main()
{
    char menu;
    int temperature;
    double conclusion;

    printf("=========================\n");
    printf("'c'섭씨온도에서 화씨온도로 변환\n'f'화씨온도에서 섭씨온도로 변환\n'q'종료\n");
    printf("=========================\n");
    printf("메뉴에서 선택하세요: ");
    scanf("%s", &menu);
    // conclusion =
    convert(menu);
    if (convert(menu) == 0)
    {
        printf("0");
    }
    // function

    return 0;
}