#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[80];
    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen(argv[1], "w");
    FILE *file2 = fopen(argv[3], "w");
    FILE *file3 = fopen(argv[4], "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, argv[0]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[2]))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }

    fclose(file3);
    fclose(file2);
    fclose(file1);
    fclose(in);
    return 0;
}
