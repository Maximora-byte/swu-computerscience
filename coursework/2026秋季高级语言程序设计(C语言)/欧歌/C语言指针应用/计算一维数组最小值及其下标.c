#include <stdio.h>
int fun(int a[], int *min_i)
{
    int i, min = a[0];
    *min_i = 0;

    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            *min_i = i;
        }
    }

    return min;
}

int main()
{
    int a[10], i, min, min_i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    min = fun(a, &min_i);

    printf("min=%d,min_i=%d", min, min_i);

    return 0;
}
