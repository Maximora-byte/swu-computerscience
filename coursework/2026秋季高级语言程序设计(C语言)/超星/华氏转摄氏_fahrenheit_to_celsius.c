#include <stdio.h>
int main()
{
    double fahrenheit, celsius;
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Celsius equivalent: %.1f\n", celsius);
    return 0;
}