#include <stdio.h>
int main()
{
    int a[4][5];
    int i, j, max;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        max = a[i][0];

        for (j = 1; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }

        printf("max[%d]=%d\n", i, max);
    }

    return 0;
}
