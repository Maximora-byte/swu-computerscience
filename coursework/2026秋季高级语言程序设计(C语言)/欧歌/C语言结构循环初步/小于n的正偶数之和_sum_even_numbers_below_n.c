#include <stdio.h>
int main()
{
    int n, sum, original;
    sum = 0;
    scanf("%d", &n);
    original = n;
    n--;  // 新增：从 n-1 开始计算
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            sum = n + sum;
        }
        n = n - 1;
    }

    printf("不大于%d的偶数之和是%d", original, sum);
    return 0;
}
