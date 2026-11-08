#include <stdio.h>
int main()
{
    int a[5][4];
    int i, j, sum;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        sum = 0;

        for (j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }

        printf("sum[%d]=%d\n", i, sum);
    }

    return 0;
}
