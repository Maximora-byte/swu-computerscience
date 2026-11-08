#include <stdio.h>
void fibonacci(long long a[], int n)
{
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
}
int main()
{
    int n;
    long long a[50];
    scanf("%d", &n);

    if (n < 1 || n >= 50)
        return 0;
    fibonacci(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);

        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
    if (n % 10 != 0)
        printf("\n");

    return 0;
}