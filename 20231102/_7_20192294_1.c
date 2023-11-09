#include <stdio.h>
#define SIZE 5

int main()
{
    int score[SIZE] = {0};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("학생들의 성적을 입력하시오 : ");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("성적 평균 = %d\n", sum / SIZE);
}