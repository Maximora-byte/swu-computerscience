#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        return 0;
    }

    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("x1=%.2f,x2=%.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2*a);
        printf("x1=%.2f\n", x1);
    }
    else
    {
        printf("方程无实根\n");
    }

    return 0;
}
