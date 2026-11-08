
#include <stdio.h>

int main()
{
    double sum = 0, pi;
    int sign = 1;

    for (int i = 1; i <= 1000000; i++)
    {
        sum += sign * 1.0 / (2 * i - 1);
        sign = -sign;
    }

    pi = 4 * sum;

    printf("PI = %.6f\n", pi);

    return 0;
}
