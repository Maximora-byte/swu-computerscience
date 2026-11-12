#include <stdio.h>
int isPrime(int num)
{
    int j;

    if (num < 2)
        return 0;

    for (j = 2; j <= num / j; j++)
    {
        if (num % j == 0)
            return 0;
    }

    return 1;
}
int countPrimes(FILE *fp)
{
    int num, count = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (fscanf(fp, "%d", &num) != 1)
            return -1;

        if (isPrime(num))
            count++;
    }

    return count;
}

int main()
{
    int count;

    FILE *fp_in = fopen("input.txt", "r");
    if (fp_in == NULL)
    {
        printf("File open failed!\n");
        return 1;
    }

    count = countPrimes(fp_in);
    fclose(fp_in);

    if (count == -1)
    {
        printf("Input error!\n");
        return 1;
    }

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
