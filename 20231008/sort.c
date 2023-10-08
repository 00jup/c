#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // int arr[n];
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    printf("input number : ");
    for (size_t i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}