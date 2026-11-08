#include <stdio.h>
int findMin(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int a[10];
    int min;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    min = findMin(a, 10);

    printf("min=%d\n", min);

    return 0;
}