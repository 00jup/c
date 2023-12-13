#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int *pi = (int *)malloc(sizeof(int));
    char *pc1 = (char *)malloc(sizeof(char) * MAX); // 문자열 저장을 위한 충분한 공간 할당
    char *pc2[MAX];
    pc2[0] = (char *)malloc(sizeof(char) * MAX); // pc2의 첫 번째 요소에 메모리 할당

    printf("입력\n");
    scanf("%d", pi);
    getchar(); // 정수 입력 후 남은 개행 문자 제거
    printf("입력2\n");
    scanf("%s", pc1); // 문자열 입력
    getchar();        // 문자열 입력 후 남은 개행 문자 제거
    printf("입력3\n");
    scanf("%s", pc2[0]); // pc2[0]에 문자열 저장
    getchar();

    printf("pi = %d, pc1 = %s, pc2 = %s\n", *pi, pc1, pc2[0]);

    // 동적 할당된 메모리 해제
    free(pi);
    free(pc1);
    free(pc2[0]);

    return 0;
}
