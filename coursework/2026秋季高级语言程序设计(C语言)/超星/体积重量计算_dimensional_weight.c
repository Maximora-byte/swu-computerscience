#include <stdio.h>
int main() {
    long long a, b, c, temp;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    long long volume = a * b * c;
    long long weight = (volume + 165) / 166;

    printf("Dimensions: %lldx%lldx%lld\n", a, b, c);
    printf("Volume (cubic inches): %lld\n", volume);
    printf("Dimensional weight (pounds): %lld\n", weight);

    return 0;
}
