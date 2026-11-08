#include <stdio.h>
double volume(double r, double h)
{
    return 3.14 * r * r * h;
}
int main()
{
    double r, h, v;
    scanf("%lf %lf", &r, &h);
    v = volume(r, h);
    printf("该圆柱体的体积为%.3f\n", v);
    return 0;
}