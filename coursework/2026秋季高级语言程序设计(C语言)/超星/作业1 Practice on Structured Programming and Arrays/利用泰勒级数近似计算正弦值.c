#include <stdio.h>
#include <math.h>
int main()
{
    double x, sum = 0.0, term;
    int n = 1;
    scanf("%lf", &x);
    term = x;
    while (fabs(term) >= 0.0000001)
    {
        sum += term;
        term = -term * x * x / (2.0 * n * (2 * n + 1));
        n++;
    }
    printf("Approx sin(x) = %.8f\n", sum);
    printf("math.h  sin(x) = %.8f\n", sin(x));
    return 0;
}
