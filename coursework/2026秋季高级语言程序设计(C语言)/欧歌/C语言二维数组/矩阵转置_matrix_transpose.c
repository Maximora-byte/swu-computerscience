#include <stdio.h>
int main()
{
    int a[4][3];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 4; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
