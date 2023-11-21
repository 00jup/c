#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10
#define MAX_WORD_LENGTH 50

void printReversedWords(char **words, int wordCount)
{
    for (int i = wordCount - 1; i >= 0; i--)
    {
        printf("%s", words[i]);
        if (i > 0)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
    char *words[MAX_WORDS] = {
        "Apple", "orange", "banana", "grape", "kiwi"};
    int wordCount = strlen(*words);

    printf("Original Strings:\n");
    for (int i = 0; i < wordCount; i++)
    {
        printf("%s", words[i]);
        if (i < wordCount - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("Reversed Strings:\n");
    printReversedWords(words, wordCount);

    return 0;
}
