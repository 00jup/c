#include <stdio.h>

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

void array_copy(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    int A[] = {5, 19, 20, 23, 44};

    print_array(A, sizeof(A) / sizeof(A[0]));
    int B[sizeof(A) / sizeof(A[0])] = {};
    array_copy(A, B, sizeof(A) / sizeof(A[0]));
    print_array(B, sizeof(B) / sizeof(B[0]));
}