#include <stdio.h>
int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num, count = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (isPrime(num))
            count++;
    }

    printf("%d\n", count);
    return 0;
}
