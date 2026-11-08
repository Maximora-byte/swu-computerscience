#include <stdio.h>
int main()
{
    int num, count = 0;
    int i, j, is_prime;

    FILE *fp_in = fopen("input.txt", "r");
    if (fp_in == NULL)
    {
        printf("File open failed!\n");
        return 1;
    }
    for (i = 0; i < 10; i++)
    {
        if (fscanf(fp_in, "%d", &num) != 1)
        {
            printf("Input error!\n");
            fclose(fp_in);
            return 1;
        }

        is_prime = 1;

        if (num < 2)
            is_prime = 0;

        for (j = 2; j <= num / j; j++)
        {
            if (num % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
            count++;
    }
    fclose(fp_in);
    FILE *fp_out = fopen("output.txt", "w");
    if (fp_out == NULL)
    {
        printf("File open failed!\n");
        return 1;
    }
    printf("%d\n", count);
    fprintf(fp_out, "%d\n", count);
    fclose(fp_out);
    return 0;
}