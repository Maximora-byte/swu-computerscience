#include <stdio.h>
int main()
{
    int a[10];
    int i, j, k, temp;
    int max, min, max_i = 0, min_i = 0;
    int sum = 0;
    double avg;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    max = min = a[0];
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
        if (a[i] > max)
        {
            max = a[i];
            max_i = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            min_i = i;
        }
    }
    avg = sum / 10.0;
    printf("max=%d,max_i=%d,min=%d,min_i=%d,avg=%.2f\n",
           max, max_i, min, min_i, avg);
    for (i = 0; i < 9; i++)
    {
        k = i;

        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[k])
            {
                k = j;
            }
        }

        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}