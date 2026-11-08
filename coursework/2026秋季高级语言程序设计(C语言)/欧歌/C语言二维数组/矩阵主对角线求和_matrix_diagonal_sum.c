#include <stdio.h>
int main()
{
    int a[5][5];
    int i, j, sum = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        sum += a[i][i];
    }
    printf("sum=%d", sum);
    return 0;
}
