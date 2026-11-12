#include <stdio.h>
double fun(double r, double h, double *s)
{
    *s = 2 * 3.14 * r * r + 2 * 3.14 * r * h;
    return 3.14 * r * r * h;
}

int main()
{
    double r, h, v, s;

    scanf("%lf %lf", &r, &h);

    v = fun(r, h, &s);

    printf("体积=%.2f,面积=%.2f", v, s);

    return 0;
}
