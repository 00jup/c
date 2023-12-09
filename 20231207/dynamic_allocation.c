#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pf;
    char *pc;

    pi = (int *)malloc(sizeof(int));
    pf = (double *)malloc(sizeof(double));
    pc = (char *)malloc(sizeof(char));
    if (pf == NULL || pc == NULL || pi == NULL)
    {
        printf("dynamic allocation error\n");
        exit(1);
    }
    *pi = 100;
    *pf = 3.14;
    *pc = 'a';
    printf("%d\n", *pi);

    free(pi);
    free(pf);
    free(pc);
    return 0;
}
