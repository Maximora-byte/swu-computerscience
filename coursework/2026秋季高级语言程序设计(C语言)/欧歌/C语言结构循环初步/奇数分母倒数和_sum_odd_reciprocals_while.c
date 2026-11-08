
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    while (n > 0)
    {
        sum = 1.0 / (2 * n - 1) + sum;
        n = n - 1;
    }
    printf("分数之和是%.6f", sum);
    return 0;
}
