#include <stdio.h>
int main()
{
    int i, n, count = 0;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);

        if (n % 3 == 0 && n % 7 != 0)
        {
            count++;
        }
    }
    printf("符合要求的数有%d个", count);
    return 0;
}
