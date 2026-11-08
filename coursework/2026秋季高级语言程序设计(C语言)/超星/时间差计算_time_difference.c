#include <stdio.h>
int main()
{
    int h1, m1, h2, m2;
    int t, h, m;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    t = (h2 * 60 + m2) - (h1 * 60 + m1);

    if (t < 0) {
        t = -t;
    }

    h = t / 60;
    m = t % 60;

    printf("the time difference is %d hour %d minute.", h, m);

    return 0;
}
