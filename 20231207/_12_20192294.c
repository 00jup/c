#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct movie
{
    char title[MAX];
    double rating;

} MOVIE;

int main()
{
    char name[MAX];
    double rate;
    int size;
    int i = 0;
    MOVIE *movies;

    printf("영화의 개수: ");
    scanf("%d", &size);
    getchar();

    movies = (MOVIE *)malloc(sizeof(MOVIE) * size);

    while (i < size)
    {
        printf("영화 제목: ");
        scanf("%[^\n]s", movies[i].title);
        printf("영화 평점: ");
        scanf("%lf", &movies->rating);
        while (getchar() != '\n')
            ;
        i++;
    }
    printf("=============================\n");

    for (int i = 0; i < size; i++)
    {
        printf("영화 제목: %s\n", movies[i].title);
        printf("영화 평점: %.2lf\n", movies[i].rating);
    }
    printf("=============================\n");

    free(movies);

    return 0;
}