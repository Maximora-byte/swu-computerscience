#include <stdio.h>
int main()
{
    int n, i;
    int count = 0;

    scanf("%d", &n);

    for (i = 100; i <= 999; i++)
    {
        if (n % i == 0)
        {
            if (count > 0)
                printf(" ");

            printf("%d", i);
            count++;
        }
    }

    return 0;
}
