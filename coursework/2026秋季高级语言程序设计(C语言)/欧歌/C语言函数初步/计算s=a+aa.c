#include <stdio.h>
int sum(int a, int n)
{
    int s = 0;
    int t = 0;

    for (int i = 1; i <= n; i++)
    {
        t = t * 10 + a;
        s += t;
    }

    return s;
}

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);

    printf("计算结果为%d\n", sum(a, n));

    return 0;
}