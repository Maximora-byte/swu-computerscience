#include <stdio.h>
int main()
{
    int a[3][4];
    int i, j;
    int max, row = 0, col = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("最大值是%d,行号为%d,列号为%d", max, row, col);
    return 0;
}
