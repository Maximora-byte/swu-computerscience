#include <stdio.h>
int main()
{
    int a;
    double b = 1.0;
    scanf("%d", &a);
    while (a > 1) {
        b = a*b;
        a--;
    }
    printf("%.2f", b);

    return 0;
}
