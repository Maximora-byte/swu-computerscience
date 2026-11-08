#include <stdio.h>
int main()
{
    double money, commission;

    scanf("%lf", &money);

    if (money < 2500)
        commission = 30 + money * 0.017;
    else if (money < 6250)
        commission = 56 + money * 0.0066;
    else if (money < 20000)
        commission = 76 + money * 0.0034;
    else if (money < 50000)
        commission = 100 + money * 0.0022;
    else if (money < 500000)
        commission = 155 + money * 0.0011;
    else
        commission = 255 + money * 0.0009;

    if (commission < 39)
        commission = 39;

    printf("$%.2f\n", commission);

    return 0;
}
