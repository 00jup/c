#include <stdio.h>
#include <string.h>

int main()
{
    char *fruits[] = {
        "apple",
        "blueberry",
        "orange",
        "melon"};
    int length = sizeof(fruits) / sizeof(fruits[0]);
    for (int i = 0; i < length; i++)
        printf("%s\n", fruits[i]);

    *fruits = "hello1";
    fruits[0] = "hello2";
    printf("\n");
    for (int i = 0; i < length; i++)
        printf("%s\n", fruits[i]);
    printf("\n");

    char words[] = "Helloworld1";
    strcpy(words, "Helloworld2");
    char *pc;
    pc = words;

    char **pc2 = &pc;

    // pc = "Helloworld3";
    // pc가 새 문자열 "Helloworld3"을 가리키도록 변경됩니다. 이로써 pc는 더 이상 words를 가리키지 않습니다.

    *pc2 = "Helloworld4";
    // pc2가 새 문자열 "Helloworld4"을 가리키도록 변경됩니다. 이로써 pc는 더 이상 words를 가리키지 않습니다.

    printf("%s words의 주소 %p\n", words, &words);
    printf("%s pc의 주소 %p\n", pc, &pc);
    printf("%s pc2의 주소 %p\n", *pc2, pc2);

    return 0;
}