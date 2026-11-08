#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        perror("Cannot open input.txt");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        perror("Cannot open output.txt");
        fclose(input);
        return 1;
    }

    int letters = 0, digits = 0, spaces = 0, others = 0;
    int ch;

    while ((ch = fgetc(input)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {
            letters++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else if (ch != '\n' && ch != '\r') {
            others++;
        }
    }

    fprintf(output, "%d %d %d %d\n",
            letters, digits, spaces, others);

    fclose(input);
    fclose(output);

    printf("Done: results written to output.txt\n");

    return 0;
}