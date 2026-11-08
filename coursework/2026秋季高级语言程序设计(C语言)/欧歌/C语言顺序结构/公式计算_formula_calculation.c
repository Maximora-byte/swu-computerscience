#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf", &x);

    y = (3*x*x*x + sqrt(5*x) - 7) / (4*x + 3);

    printf("y=%.4f\n", y);

    return 0;
}
