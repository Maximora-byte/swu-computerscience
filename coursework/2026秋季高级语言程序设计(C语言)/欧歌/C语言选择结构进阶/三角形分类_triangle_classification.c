#include <stdio.h>
int main()
{
    long long a, b, c, temp;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a <= 0 || a + b <= c)
    {
        printf("输入的3个数无法构成三角形");
    }
    else if(a*a + b*b == c*c)
    {
        printf("这是一个直角三角形");
    }
    else if(a*a + b*b > c*c)
    {
        printf("这是一个锐角三角形");
    }
    else
    {
        printf("这是一个钝角三角形");
    }

    return 0;
}