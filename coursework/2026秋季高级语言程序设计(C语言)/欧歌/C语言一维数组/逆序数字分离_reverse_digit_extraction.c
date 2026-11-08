#include <stdio.h>
int main()
{
    int n, a[10], i = 0, j;
    scanf("%d", &n);
    while (n > 0)
    {
        a[i] = n % 10;
        n = n / 10;
        i++;
    }

    for (j = 0; j < i; j++)
    {
        if (j > 0)
            printf(" ");

        printf("%d", a[j]);
    }

    return 0;
}
