#include <stdio.h>
int count(int a[], int n)
{
    int sum = 0;
    int num = 0;
    double avg;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = (double)sum / n;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            num++;
        }
    }

    return num;
}

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("高于平均值的元素个数有%d个\n", count(a, 10));

    return 0;
}