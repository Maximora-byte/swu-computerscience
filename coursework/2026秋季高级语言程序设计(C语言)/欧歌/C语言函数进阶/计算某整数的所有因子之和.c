#include <stdio.h>
int sum(int n)
{
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    return s;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("该整数的所有因子之和是%d\n", sum(n));

    return 0;
}