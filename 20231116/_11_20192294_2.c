#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convert(char *pher, char convert)
{
    int i = 0;

    while (*(pher + i) != '\0')
    {
        if (pher[i] == convert)
        {
            pher[i] = toupper(pher[i]);
        }
        i++;
    }
}

void print_array(char *pher)
{
    for (int i = 0; i < strlen(pher); i++)
    {
        printf("%c", pher[i]);
    }
}

int main()
{
    char cipher[50];
    printf("데이터: ");
    fgets(cipher, 50, stdin);

    printf("알파벳 입력하세요: ");
    char alpha;
    scanf("%c", &alpha);

    convert(cipher, alpha);

    printf("결과: ");
    print_array(cipher);

    return 0;
}
