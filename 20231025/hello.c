#include <stdio.h>

int main()
{
    int interest;
    long long sum;
    interest = 2;
    sum = 1;
    for (int i = 0; i < 31; i++)
        sum *= interest;
    sum = sum * 0;
    printf("%lld\n", sum);
}
// 2,147,483,648