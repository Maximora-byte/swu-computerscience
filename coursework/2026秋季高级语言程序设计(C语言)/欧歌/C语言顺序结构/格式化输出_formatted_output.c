#include <stdio.h>
int main()
{
    int a = 2022, b = -34, c = 478;
    double d = 3.1415926;
    int e = 23;

    //####################BEGIN####################
    printf("%+-10d %+-8d %+-10d\n", a, b, c);
    printf("%.10d %.7d %010d\n", a, b, c);
    printf("%f,%.2f,%010f\n", d, d, d);
    printf("%d,%#o,%#x\n", e, e, e);
    //####################END####################

    return 0;
}
