#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_scores(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a - b;
}

int compare_score_desc(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return b - a;
}

typedef struct {
    int width;
    int height;
} rectangle;

int area(rectangle *r)
{
    return r->width * r->height;
}

int compare_areas(const void* a, const void* b)
{
    rectangle* rect_a = (rectangle*)a;
    rectangle* rect_b = (rectangle*)b;

    return area(rect_a) - area(rect_b);
}

int compare_names(const void* a, const void* b)
{
    char** sa = (char**)a;
    char** sb = (char**)b;
    return strcmp(*sa, *sb);
}

int compare_areas_desc(const void* a, const void* b)
{
    return -compare_areas(a, b);
}

int compare_names_desc(const void* a, const void* b)
{
     return -compare_names(a, b);
}

int main()
{
    int scores[] = { 543, 323, 32, 554, 11, 3, 112 };
    int i;
    qsort(scores, 7, sizeof(int), compare_score_desc);
    puts("These are the scores in order");
    for (i = 0; i < 7; i++) {
         printf("Scores = %i\n", scores[i]);
    }
    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names, 4, sizeof(char*), compare_names);
    puts("These are the names in order:");
    for (i = 0; i < 4; i++) {
         printf("%s\n", names[i]);
    }

    qsort(names, 4, sizeof(char*), compare_names_desc);
    puts("These are the names in desc order:\n");
    for (i = 0; i < 4; i++) {
         printf("%s\n", names[i]);
    }
     return 0;
}
