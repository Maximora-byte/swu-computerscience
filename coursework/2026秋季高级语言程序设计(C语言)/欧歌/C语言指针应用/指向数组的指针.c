#include <stdio.h>
int main()
{
    int a[10], *p;
    int i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
        sum += *(p + i);
    }

    printf("\nsum=%d", sum);

    return 0;
}
