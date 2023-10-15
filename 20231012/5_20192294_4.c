#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int input, sum;
    int numb1, numb2;
    while (1)
    {
        numb1 = rand() % 10;
        numb2 = rand() % 10;
        printf("%d + %d = ", numb1, numb2);

        sum = numb1 + numb2;
        scanf("%d", &input);

        if (sum == input)
            printf("맞았습니다.\n");
        else if (input == -1)
            break;
        else
            printf("틀렸습니다.\n");
    }

    return 0;
}