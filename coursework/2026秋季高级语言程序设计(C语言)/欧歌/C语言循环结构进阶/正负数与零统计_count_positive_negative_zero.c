#include <stdio.h>
int main()
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            positive++;
        }
        else if (n < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("整数有%d个,负数有%d个,零有%d个",positive, negative, zero);
    return 0;
}
