#include <stdio.h>
int main()
{
    int n, i;
    int flag = 1;
    scanf("%d", &n);
    if (n < 2)
    {
        flag = 0;
    }
    else
    {
        for (i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("%d是素数", n);
    }
    else
    {
        printf("%d不是素数", n);
    }

    return 0;
}
