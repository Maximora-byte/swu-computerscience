#include <stdio.h>
#define NUM 100
int main()
{
    int a[NUM];
    int n, i;
    scanf("%d", &n);
    if (n < 1 || n > NUM)
        return 0;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%-10d", a[i]);

        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
