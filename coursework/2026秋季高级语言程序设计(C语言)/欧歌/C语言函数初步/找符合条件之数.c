#include <stdio.h>
int sum(int n)
{
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 7 == 0)
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
    printf("这些数的累加和是%d\n", sum(n));

    return 0;
}