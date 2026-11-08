#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int max = a[i][0];

        for (int j = 1; j < n; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }

        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == max)
            {
                int flag = 1;

                for (int k = 0; k < m; k++)
                {
                    if (a[k][j] < a[i][j])
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                {
                    printf("matrix[%d][%d] = %d\n",
                           i, j, a[i][j]);
                    return 0;
                }
            }
        }
    }
    printf("No saddle point.\n");
    return 0;
}