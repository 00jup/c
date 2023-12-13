#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int *pi = (int *)malloc(sizeof(int));
    char *pc1 = (char *)malloc(sizeof(char) * MAX);
    char *pc2[MAX];

    pc2[0] = pc1;
    // char *pc2[MAX] = {0};

    printf("입력\n");
    scanf("%d", pi);
    printf("입력2\n");
    scanf("%s", pc1);
    getchar();
    printf("입력3\n");
    scanf("%s", pc2[0]);

    printf("pi = %d, pc = %s, pc2 = %s\n", *pi, pc1, pc2[0]);

    return 0;
}
