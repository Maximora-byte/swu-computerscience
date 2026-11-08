#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * (i + 1));
    }
    printf("分数之和是%.4f", sum);
    return 0;
}
